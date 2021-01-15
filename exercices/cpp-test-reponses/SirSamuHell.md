# Le code proposé

```cpp
#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <numeric>
 
namespace utils 
{
    constexpr int TAILLE = 6;
    
    constexpr int sum(const std::array<int, TAILLE> t)
    {
        return std::accumulate(t.begin(), t.end(), 0);
    }
    
    constexpr int max (std::array<int, TAILLE> t)
    {
        return *std::max_element(t.begin(), t.end());
    }
    
    constexpr std::array<int, TAILLE> inverse(std::array<int, TAILLE> t)
    {
        std::reverse(t.begin(), t.end());
        return t;
    }
    
    constexpr std::array<int, TAILLE> multiply(std::array<int, TAILLE> t, const int k)
    {
        for(auto& e : t)
            e *= k; // pas trouver de fonction dans la STL...
            
        std::array<int, TAILLE> cpy;
        
        std::copy(t.begin(), t.end(), cpy.begin());
        return cpy;
    }
 
    constexpr std::array<int, TAILLE> unique(std::array<int, TAILLE> t)
    {
        (void)t;
        
        for(auto i = 0; i < TAILLE; i++)
        {
            for(auto j = 0; j < TAILLE; j++)
            {
                if(t[i] == t[j] && j != i)
                {
                    t[j] = -1;
                }
            }
        }
        
        return t;
    } 
}

using namespace utils; // Pour la fonction inverse qui est écrit sans utils

int main() {
    // Initialization et création du tableau d'entier 
    constexpr std::array<int, utils::TAILLE> t {1, 3, 2, 5, 3, 2};
  
    // calcule la somme des éléments
    constexpr auto s { utils::sum(t) };
    (void)s;    
 
    // recherche la valeur maximale
    constexpr auto m { utils::max(t) };
    (void)m;
 
    // inverse l'ordre des éléments du tableau (le premier devient le dernier, etc)
    constexpr auto t2 { inverse(t) };
    (void)t2;
    // multiplie chaque élément par une valeur constante
    utils::multiply(t, 2);
 
    // supprime les doublons
   
    constexpr auto  t3 { utils::unique(t) };
    (void)t3;
}
```

# Mes commentaires

```
constexpr int sum(const std::array<int, TAILLE> t)
...
constexpr int max (std::array<int, TAILLE> t)
```

- pourquoi une version const et une version non const ? => revoir la const-correctness, pourquoi c'est important
- revoir le passage de paramètres par valeur et par reference => revoir comment éviter les copies inutiles
- utilisation de std::array => très bien

```cpp
std::accumulate(t.begin(), t.end(), 0);
// préférer :
std::accumulate(std::begin(t), std::end(t), 0);
```

- utilisation des algorithmes standards => très bien
- free function versus member function. On préfère utiliser les versions libres, `t.begin()` -> `std::begin(t)`, idem pour `end` => revoir pourquoi la généricité, ce que cela apporte en termes de maintenabilité du code.
- note : `std::accumulate` est `constexpr` que depuis le C++20.
- a propos de généricité, il aurait été possible de faire des fonctions template, pour prendre différents types de collections.

```cpp
Template<typename ARRAY_TYPE>
constexpr int sum(const ARRAY_TYPE& t)
```

```cpp
return *std::max_element(t.begin(), t.end());
```
- c'est un UB de déréférencer un itérator invalide. Puisque tu utilises un `std::array` de taille non nulle, `std::max_element` va forcément retourner un élément valide, donc ton code en soi est valide.

Par contre, ton code sera moins resistant aux évolutions. Imagine par exemple que `TAILLE` devienne un paramètre template ou que `std::array` soit remplacé par `std::vector`. (Imagine en particulier si tu fais un rechercher-remplacer global dans un projet). Dans ce cas, ton code devient invalide. Est-ce un problème ? Ca depend :)

Quand on fait évoluer un code, il peut se passer : le code accepte sans problème le changement, ou le code signale qu'il y a un problème, ou le code ne signale pas qu'il y a problème (ie tu passes du temps a debugger, parfois des heures ou des jours sur un vrai projet, pour trouver l'erreur). Faire un code qui accepte les changements est parfois plus complexe a écrire (par exemple en transformant la fonction en template) mais c'est le mieux. Le pire, c'est un code qui ne signale pas du tout les problèmes.

Idem pour les types de retour. Si tu changes ton `array<int, N>` par `array<float, N>`, le type de retour n'est plus valide. Si tu utilises `auto`, le type sera automatique.

Ici, par exemple, le minimum, c'est au moins de vérifier les préconditions de ta fonction. Par exemple :

```cpp
constexpr auto max (std::array<int, TAILLE> t)
{
    assert(!std::empty(t)); // verification que la taille n'est pas nulle
    return *std::max_element(std::begin(t), std::end(t));
}
```
Ou 
```cpp
constexpr auto max (std::array<int, TAILLE> t)
{
    constexpr auto it = std::max_element(std::begin(t), std::end(t);
    assert(it != std::end(t)); // verification que l'itérateur est valide avant de le déréférencer
    return *it;
}
```

=> voir la programmation par contrat, les préconditions, les postconditions, les invariants de classes.
=> tu peux regarder aussi les concepts, qui sont en quelques sortes des préconditions sur les types

- En C++20, il y a les ranges maintenant, qui acceptent de prendre directement une collection :
```cpp
constexpr int max (std::array<int, TAILLE> t)
{

    return *std::ranges::max_element(t); // C++20
}
```

- en C++20, il est possible d'utiliser les views, qui sont un moyen de manipuler une collection, mais sans la copier. (Par analogie, un iterateur est une indirection sur un element d'une collection, une vue est une indirection sur une collection, c'est a dire 2 iterateurs first-last).

```cpp
constexpr auto inverse(std::array<int, TAILLE> t)
{
    return std::ranges::reverse_view{t};
}
```


- dans le code de la fonction `multiply`, tu fais 2 copies du tableau. 1 seule suffit.
```cpp
constexpr std::array<int, TAILLE> multiply(std::array<int, TAILLE> t, const int k) // copie ici
...
    std::copy(t.begin(), t.end(), cpy.begin()); // seconde copie
```


```cpp
// pas trouver de fonction dans la STL...
```
- probablement `std::transform`, mais pour un code aussi simple, un range-for loop est très bien aussi. Par contre, utiliser `transform` permet d'utiliser les ranges (et par exemple composer un `std::ranges::copy` et un `std::ranges::transform`, qui est moins couteux que de faire la copie et le transform séparés) ou la version "parallèle" de `std::transform`.

=> si tu veux voir le C++20, tu peux regarder les ranges plus en detail
=> si tu es intéressé par le parallélisme, tu peux regarder la version multithreads des algos standard <https://en.cppreference.com/w/cpp/header/execution> (C++17)

```cpp
 constexpr std::array<int, TAILLE> multiply(std::array<int, TAILLE> t, const int k)
...
    std::array<int, TAILLE> cpy;
```
- tu as 3 fois la même info ici : le type de collection `std::array<int, TAILLE>`. C'est problème de maintenance, parce que si tu veux modifier le type, tu devras faire 3 modifications au lieu d'une seule. (Bien sur, 3 modifications, c'est rien. Mais imagine un projet avec des centaines de milliers de lignes). Tu peux utiliser `auto` pour le retour, et `decltype(t)` dans le corps.

```cpp
 constexpr auto multiply(std::array<int, TAILLE> t, const int k)
...
    decltype(t) cpy;
```


Si tu veux rendre ta fonction template, il faudra utiliser un template template ou `value_type` :

```cpp
Template<template<typename T> class array_type>
constexpr auto multiply(const array_type<T>& t, const T& k)
...
    array_type<T> cpy;
```
Ou
```cpp
Template<template array_type>
constexpr auto multiply(const array_type& t, const typename array_type::value_type& k)
...
    array_type cpy;
```

=> pour les details, voir les template template
=> voir aussi l'utilisation de `typename` et `template` dans les noms dépendants <https://en.cppreference.com/w/cpp/language/dependent_name>

```
(void)t;
```

- pas utile


```cpp
for(auto i = 0; i < TAILLE; i++)
```

- `0` est une littérale de type `int` donc `i` sera de type `int` aussi. `t[i]` attend un non signé, donc tu as un avertissement lors de la compilation. Idem pour `j`.
```
prog.cc:47:22: warning: implicit conversion changes signedness: 'int' to 'std::__1::array::size_type' (aka 'unsigned long') [-Wsign-conversion]
                if(t[i] == t[j] && j != i)
                   ~ ^
```

=> utilise `std::size_t` pour les indices de tableaux
=> attention a l'utilisation de signed et unsigned ensemble
=> tu peux revoir les littoraux, les types des littoraux et la deduction de type


```
t[j] = -1;
```

- c'est un peu le piège de `std::array`. Comme la taille est fixe, il n'est pas possible de retourner un `std::array<int,4> = {1, 3, 2, 5}`. Pour cela qu'il peut être intéressant d'utiliser `std::vector`, au moins pour le retour de la fonction `unique`.

```cpp
constexpr std::vector<int> unique(std::array<int, TAILLE> t)
```

- il existe deja des algos standard `std::unique` et `std::unique_copy`, mais qui ne fonctionnent que sur les élément  => ne pas hésiter a relire de temps en temps la doc, pour avoir une idée globale des algos existants. Tous les retenir est un peu lourd. <https://en.cppreference.com/w/cpp/algorithm>
- ton implémentation est en O(n^2), il est possible de faire plus efficace. => regarde par exemple "Introduction to Algorithms" de Corman. Tu peux deja simplement faire une boucle interne qui ne commence pas a 0.

```cpp
for(auto i = 0; i < TAILLE; i++)
{
    for(auto j = i+1; j < TAILLE; j++)
    {
        if(t[i] == t[j])
```

```
using namespace utils; // Pour la fonction inverse qui est écrit sans utils
```

- ca aurait été mieux d'ajouter le `utils::`


En tout cas, tu as les bases pour cet exo. La suite pour progresser, c'est la généricité, mais c'est le sujet de l'exo 3. Bon boulot !
