
# Le C++17 est arrivé !

Historiquement, le C++ alternait les mises à jour majeures (C++98 et C++11) et mineures (C++03 et C++14). 
Mais le délai entre les deux versions majeures, dû à la complexité pour que les membres du comité se mettent
d'accord sur les fonctionnalités a integerer ou non dans le C++11, a été critiqué.

Le comité a donc choisit de modifier son fonctionnement en profondeur, de facon a simplifier et accélerer les
mises à jour du C++ sans faire de compromis sur la qualité. Cela à conduit à la création des différents sous-groupes
de travail (les WG - "working group" - et SG - "study goup"), chargés de rédiger les propositions de mises a jour, et 
des TS "technical specification", des mises à jour intermediaires sur un sujet spécifique. Les TS permettent d'avoir
une fonctionnalité prête à être intégrée à la mise a jour suivante du C++, ce qui facilite l'ajout de cette fonctionnalité
dans les compilateurs, d'avoir plus de retours sur cette fonctionnalité et de facilité son adoption.

Suivant le fonctionnement historique des mises a jour mineures et majeures et du fait que beaucoup de TS etaient
en bonne progression avant la sortie du C++17, beaucoup d'utilisateurs (et de membres du comité) s'attendaient
a ce que le C++17 soit une version majeure, qui contient plusieurs TS très attendues. Malheureusement, certaines
de ces fonctionnalités attendues n'etaient pas encore finalisées ou assez testées. Le comité a donc du prendre une
décision : retarder la date de sortie de mise a jour du C++ ou ne pas integrer ces fonctionnalités dans le C++17.

Quelque soit le choix que le comité aurait fait, il aurait été critiqué. Il a donc décidé de ne pas sacrifier la
qualité, ni de retarder les mises a jour : les mises a jour auront donc lieu tous les 3 ans, avec les fonctionnalités
disponnibles a moment de la validation. Les fonctionnalités qui ne sont pas pretes devront attendre la mise a jour
suivante. La question de savoir si le C++17 devait être consideré comme une version majeure ou mineure a eté vite
réglee : le principe de versions majeures et mineures est abandonnée, tout simplement.

Nombreuses fonctionnalités qui n'ont pas été adoptée dans le C++17 sont maintenant intégré dans le C++20 !

Ce tutoriel se decompose en 2 parties : les changements dans le langage et ceux dans la bibliothèque standard.

Note : de nouveaux termes en anglais ont été ajouté dans le C++17. Il n'existe pas forcément de traductions
largement acceptées par la communauté francphone. Les termes anglais sont donc utilisés preferentiellement et les
propositions de traductions francaises, si elles existent, sont indiquees.

## Les changements dans le langage

### Structured bindings

En C++ et d'autres langages, les fonctions peuvent generalement prendre plusieurs parametres en entrée, mais qu'un 
seul en sortie.

```
PARAMETRE_SORTIE fonction(PARAMETRE_ENTRÉE_1, PARAMETRE_ENTRÉE_2, PARAMETRE_ENTRÉE_3,...);
```

Il existe bien sur des moyens de contourner cette limitation : utiliser des references non constantes dans les 
parametre d'entrée, retourner une structure de données, retourner des `std::pair` ou des `std::tuple`, etc.

Ces différentes solutions fonctionnent bien, mais ne sont pas sans présenter aucun inconveniant. Par exemple,
utiliser les references nécessitent que l'argument existe avant, qu'il ne soit pas constant, et cela ne respecte
pas la distinction paramètres d'entree vs parametres de sortie. Les structures de données, les `std::pair` et
`std::tuple` nécessitent plus de code pour acceder aux valeurs retournées. De plus, le code est moins expressif.

Prenons un exemple concret : l'insertion d'un élément dans un `std::unordored_map`. La fonction `insert` doit 
pouvoir retourner 2 types d'information : si l'insertion a réussie (si l'element existe deja dans la map, l'insertion 
peut echouer) et l'endroit a laquelle l'insertion a ete faite.

```
const std::pair<iterator, bool> result = my_map.insert(value);
if (result.second)
  do_something(result.first);
```

Les syntaxes `result.first` et `result.second` ne sont pas très expressives. Ce que l'on aimerait pouvoir faire, 
c'est par exemple de créer une variable `it_result` qui contient l'iterateur et `is_succeed` qui contient le booléen.

Il est possible d'utiliser `std::tie` pour cela :

```
iterator it_result { std::end(my_map) };
bool is_succeed { false };
std::tie(it_result, is_succeed) = my_map.insert(value);
if (it_result)
  do_something(is_succeed);
```

Mais ce code nécessite de créer les variables a l'avance et implique qu'elle ne peuvent pas etre constantes.

Autre impératif, on veut pouvoir faire cela sans devoir mettre a jour toutes les fonctions de la bibliotheque
standard ! Donc que cela fonctionne avec des `std::pair` directement.

Les structured bindings sont une solution a cette problématique. Le principe est de pouvoir créer des variables
directement a partir des structures de donnees, des tableaux de taille fixée à la compilation, des `std::pair` 
et des `std::tuple` retournés par les fonctions.

La syntaxe est la suivante :

```
auto const [it_result, is_succeed] = my_map.insert(value);
if (it_result)
  do_something(is_succeed);
```

La synthaxe générale est la même que pour déclarer une variable avec la déduction de type (avec le mot-clé `auto`,
avec ou sans `const`, `volatile` et un référence `&` ou `&&`), sauf que l'identifiant est remplacé par une liste
d'identifiants entre crochets `[]`. Le nombre d'identifiants dans la liste doit correspondre exactement au nombre
de valeurs dans le tableau, le tuple ou la structure de données.

Avec un tableau :

```
#include <array>
#include <iostream>

std::array<int, 2> foo() { 
    return { 1, 2 };
}
 
int main() {
    auto const [i1, i2] = foo();
    std::cout << i1 << ' ' << i2 << std::endl;
}
```

Ce code fonctionnera aussi avec les différentes alternatives suivantes :

```
// avec un tableau
std::array<int, 2> foo();

// avec std::pair
std::pair<int, int> foo();

// avec std::tuple
std::tuple<int, int> foo();

// avec une structure
struct my_data { int i1, i2; };
my_data foo();
```

Références :

- [Structured binding declaration (cppreference.com)](https://en.cppreference.com/w/cpp/language/structured_binding)
- [C++ Weekly Ep 24 - C++17's Structured Bindings (YouTube)](https://www.youtube.com/watch?v=aBZlbb9sE-g)

### Selection statements with initializers

- Compile-time conditional statments
- Fold expressions
- Class template argument deduction (CTAD)
- auto non-type template parameters
- inline variables
- constexpr lambdas
- Guaranteed copy elision
- Nested namespace definitions
...

## Library Changes 

- string_view
- optional
- variant
- any
- Parallel algorithms
- New algorithms
- Filesystem support
- Improved insertion and splicing for associative containers
- Variable templates for metafunctions
- Boolean logic metafunctions
...


## Références

- https://youtu.be/nnY4e4faNp0  CppCon 2017: Jason Turner “Practical C++17” (YouTube)

