*[Retourner à la liste des exercices et projets](README.md)*

# Évalues tes connaissances en C++

Lors des discussions sur les forums ou discord, je vois régulièrement des personnes qui essaient de résoudre des problèmes
ou qui posent des questions qui ne sont clairement pas adaptées à leur niveau de connaissance en C++. Cela indique en général
un problème de compréhension de concepts de base et de mauvaise progression dans l'apprentissage. Souvent parce
qu'ils ne suivent pas un cours correctement structuré.

Le but de cette séries d'exercices est d'évaluer tes connaissances de base en C++, pour mieux t'orienter dans ton apprentissage :
les concepts que tu as compris et ceux que tu dois encore travailler, t'orienter vers des ressources qui te permettront de
progresser.

C'est pour cette raison qu'il n'y a pas de réponse toute faite aux exercices suivants. Le but est que les codes que tu écris
soient relus par des personnes plus expérimentées.

Pour réaliser ces exercices, je te propose de suivre la démarche suivante :

- ouvre l'éditeur en ligne WandBox https://wandbox.org/ et sélectionne C++.
- copies-colles le code de l'exercice dans l'éditeur et écris ta solution.
- ajoutes les options de compilation suivantes : `-Weverything -Wno-reserved-id-macro`.
- cliques sur le bouton `Run (or Ctrl+Enter)`.
- le code doit s'exécuter sans erreur.

Rassemble ensuite tes codes sur un site (par exemple GitHub, c'est le plus simple) et partage le lien sur les discords de NaN ou 
de Jason Champagne, ou sur les forums de Zeste de Savoir ou d'Openclassrooms.

Si tu ne sais pas résoudre un exercice, ce n'est pas grave. Certains exercices sont volontairement plus difficiles.
N'hésite pas a modifier le code donne si tu ne comprends pas certaines parties du code et fais de ton milieu pour
résoudre les exercices.

Il est possible d'écrire plusieurs solutions différentes pour chaque exercice. Il faudra que tu écrives le code
comme si tu étais dans une entreprise, sur un projet professionnel non critique (c'est-à-dire en considérant que tu n'as pas
besoin d'optimiser pour les performances ou la mémoire, mais avoir la meilleure qualité logicielle possible).

Les instructions données sont volontairement minimales. Le but est de voir si tu as acquis aussi le vocabulaire et la compréhension
nécessaire pour réaliser ces exercices.

Le but est de tester ta connaissance de la syntaxe du C++, pas tes connaissances en algorithmique.

# Exercices

## Exercice 1 - tableau, algorithmes

Écris le code pour initialiser un tableau d'entiers avec les valeurs 1, 3, 2, 5, 3, 2 et les fonctions pour réaliser des opérations suivantes :
`sum`, `max`, `inverse`, `multiply`, `unique`. Ces fonctions seront déclarées dans l'espace de noms `utils`.

```cpp
int main() {
    // calcule la somme des éléments
    constexpr auto s { utils::sum(t) };
    
    // recherche la valeur maximale
    constexpr auto m { utils::max(t) };
    
    // inverse l'ordre des éléments du tableau (le premier devient le dernier, etc)
    constexpr auto t2 { inverse(t) };
    
    // multiplie chaque élément par une valeur constante
    utils::multiply(t, 2);
    
    // supprime les doublons
    constexpr auto  t3 { utils::unique(t) };
}
```

## Exercice 2 - Littéraux, fonction template, spécialisation template

Écris une fonction template `print` qui affiche dans la console le type de l'argument utilisé lors de l'appel de la fonction.
La fonction template de base affichera "unknown type" et les spécialisations template afficheront le type de l'argument.

```cpp
#include <array>
#include <string>
#include <tuple>

using namespace std::string_literals;

int main() {
    print(true);
    print(123ul);
    print(123.456);
    print("hello!"s);
    
    print(std::make_tuple(123, 456, "hello"s));
    print(std::to_array({ 0, 2, 1, 3 });
    
    print(); // affiche "unknown type"
}
```

## Exercice 3 - tableau, algorithmes, itérateurs, template

Ré-écris le code des fonctions de la bibliothèque standard suivants, ainsi que les tests unitaires qui te semblent nécessaires.
Les prototypes des fonctions a écrire sont donnés. Tu ne dois pas utiliser d'algorithmes de la bibliothèque standard.

Pour l'implémentation du tri, utilises l'algorithme de tri-fusion : https://fr.wikipedia.org/wiki/Tri_fusion.

Pour les tests unitaires, tu peux te limiter à `std::array<int>`, `std::vector<int>` et `std::list<int>`.

```cpp
namespace utils {

// https://en.cppreference.com/w/cpp/algorithm/count
template<class InputIt, class T>
constexpr typename iterator_traits<InputIt>::difference_type count(
    InputIt first, InputIt last, T const& value);

// https://en.cppreference.com/w/cpp/algorithm/transform
template<class InputIt, class OutputIt, class UnaryOperation>
constexpr OutputIt transform(InputIt src_first, InputIt src_last, 
                             OutputIt dest_first, UnaryOperation unary_op);

// https://en.cppreference.com/w/cpp/algorithm/sort
// https://fr.wikipedia.org/wiki/Tri_fusion
template<class RandomIt>
constexpr void sort(RandomIt first, RandomIt last);

} // utils namespace

int main() {
    // nombre d'éléments
    constexpr auto n = utils::count(std::begin(t), std::end(t), 2);
    
    // transform
    utils::transform(std::begin(in), std::end(in), std::begin(out), [](int x){ return x*x; });
    
    // multiplie chaque élément par une valeur constante
    utils::sort(std::begin(v), std::end(v));
}
```

## Exercice 4 - Surcharge d'opérateurs

Écris les opérateurs nécessaires pour que ce code fonctionne.

```cpp
struct vec3 {
    double x { 0.0 };
    double y { 0.0 };
    double z { 0.0 };
};

int main() {
    // init v1
    constexpr vec3 v1 { 1.0, 2.0, 3.0 };
    
    // get v2
    vec3 v2;
    std::cin >> v2;
    
    // calculate v3
    const vec3 v3 { v1 + (v2 * -1.0) };
    
    // test v3
    const bool utils::is_equal { v1 == v3 };
    
    // print v3
    std::cout << v3;
}
```

## Exercice 5 - Héritage, allocation dynamique

Écris le code des classes `Vehicule`, `Car` et `Plane` et la fonction `create`.

```cpp
int main() {
    std::string class_name;
    std::cin >> class_name;
    auto const vehicule = create(class_name);
    std::cout << vehicule->name() << std::endl;
}
```
