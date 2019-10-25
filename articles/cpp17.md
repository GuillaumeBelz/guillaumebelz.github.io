
# Le C++17 est arrivé !

Bon, ok, il est arrivé depuis longtemps. Disant que cet article arrive enfain ! Pour ceux qui l'attendait ! Euh... 
Quelqu'un l'attendait ?

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

## Simplifier le code

### Les structured bindings

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

```cpp
const std::pair<iterator, bool> result = my_map.insert(value);
if (result.second)
  do_something(result.first);
```

Les syntaxes `result.first` et `result.second` ne sont pas très expressives. Ce que l'on aimerait pouvoir faire, 
c'est par exemple de créer une variable `it_result` qui contient l'iterateur et `is_succeed` qui contient le booléen.

Il est possible d'utiliser `std::tie` pour cela :

```cpp
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

```cpp
auto const [it_result, is_succeed] = my_map.insert(value);
if (it_result)
  do_something(is_succeed);
```

La synthaxe générale est la même que pour déclarer une variable avec la déduction de type (avec le mot-clé `auto`,
avec ou sans `const`, `volatile` et un référence `&` ou `&&`), sauf que l'identifiant est remplacé par une liste
d'identifiants entre crochets `[]`. Le nombre d'identifiants dans la liste doit correspondre exactement au nombre
de valeurs dans le tableau, le tuple ou la structure de données.

Avec un tableau :

```cpp
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

```cpp
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

+ avec refs -> auto& i = std::get<0>(tuple); vs auto& [ i, c, d ] = tuple;

+ support avec std::tuple_size<> and provides get<N>()

Références :

- [Structured binding declaration (cppreference.com)](https://en.cppreference.com/w/cpp/language/structured_binding)
- [C++ Weekly Ep 24 - C++17's Structured Bindings (YouTube)](https://www.youtube.com/watch?v=aBZlbb9sE-g)
- [Structured Bindings demystified - Marc Mutz - Lightning Talks Meeting C++ 2017 (YouTube)](https://youtu.be/FHM4yIe4EOg)
- [STRUCTURED BINDINGS in C++ - The Cherno Project (YouTube)](https://youtu.be/eUsTO5BO3WI)
- https://skebanga.github.io/structured-bindings/
- http://cpp-today.blogspot.com/2017/03/structured-binding-c17-inside.html

### Les variables inline

Utiliser une variable non initialisé est en général considéré comme une mauvaise pratique, qui peut amener à avoir
des comportements problématiques, voire des crashs. La règle de base est donc de toujour initialiser, sauf si vous
avez de bonnes raisons de le faire. (Donc pas juste une intuition, mais des tests de performances).

Pour les attribus de classes, il existe plusieurs synthaxes et les bonnes pratiques ont évoluées avec le temps.

```cpp
class MyClass {
    int i; // Comment l'initialiser ?
};
```    

La syntaxe la plus ancienne consiste a intiliaser les attribues dans la liste d'initialisation des membres dans les
constructeurs de la classe.

```cpp
class MyClass {
public:
    MyClass();
private:
    int i;
};

MyClass::MyClass() :
    i(123)
{
}
```

Note : en français, on parle habituellement de "liste d'initialisation", puisqu'avant le C++11, il ne pouvait pas y avoir
de confusion possible. Mais le C++11 a ajouté `std::initializer_list` et la possibilité de construire un objet en lui
donnant une liste de valeurs, avec une synthase similaire à l'initialization par aggrégation. Il peut y avoir
des confusions lorsqu'on utilise l'expression "liste d'initialisation" et il est donc préférable d'utiliser
"liste d'initialisation des membres".

Le risque avec cette syntaxe, c'est qu'il est possible d'oublier d'initialiser correctement un attribut ou de ne pas
être consistant lors de l'initialisation. Ce qui peut arriver très vite si une classe contient beaucoup constructeurs
(un exemple avec [QVariant](https://doc.qt.io/qt-5/qvariant.html)) ou beaucoup d'attribus.

```cpp
class MyClass {
public:
    MyClass();
    MyClass(int x);
private:
    int i, j, k;
};

MyClass::MyClass() :
    i(123), j(456) // k n'est pas initialisé
{
}

MyClass::MyClass(int x) : 
    i(x), j(123), k(456) // la valeur par défaut de j dépend du constructeur appelé
{
}
```

De plus, cela impliquait de devoir parfois écrire des constructeurs par défaut uniquement pour initialiser 
les attributs.

Le C++11 introduit la possibilité d'initialiser un attribut directement lors de la déclaration de celui-ci dans
la déclaration de la classe :

```cpp
class MyClass {
    int i = 123;
};
```

Cela permet de simplifier l'ecriture des classes, en particulier avec les constructeurs explicitement déclarés-implicitement
définis, et d'éviter les erreurs et oublis. La régle de bonne pratique va être de toujours initialiser par défaut (sauf
bonnes raisons de ne pas le faire, basé sur des tests), d'utiliser `default` et les constructeurs délégués si c'est
approprié.

Il reste cependant un problème : cette syntaxe n'est pas utilisable avec les attributs statiques. Pour initialiser
un tel attribut, il faut le définir en dehors de la déclaration de la classe. (detailler le probleme ? Meme raison que 
`inline` et `extern`).

```cpp
class MyClass {
    static int i; // Impossible d'intialiser ici en C++11.
};

int MyClass::i = 123;
```

+ constexpr en C++11. https://stackoverflow.com/questions/45183324/whats-the-difference-between-static-constexpr-and-static-inline-variables-in-c

Le C++17 ajoute la possiblité d'utiliser le mot-clé `inline` avec un attribut statique, de façon a spécifier au
compilateur que cette variable ne doit pas avoir un "internal linkage", mais un "external linkage"
(https://en.cppreference.com/w/cpp/language/storage_duration).

```cpp
class MyClass {
    static int i = 123; // C++17
};
```

Références

- Inline variables : p0386r2 http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0386r2.pdf
- https://en.cppreference.com/w/cpp/language/data_members
- https://www.bfilipek.com/2017/07/cpp17-details-simplifications.html#inline-variables

### programmation générique



Les simplifications effectuées sur la programmation générique:

- pour les utilisateurs: guide, template auto, std::size/data
- pour les développeurs: fold, les nouveaux traits, if constexpr

#### templates

- typename in a template template parameter : n4051 http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4051.html 
- Allow constant evaluation for all non-type template arguments : n4268 http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4268.html
- Template argument deduction for class templates	: p0091r3 http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0091r3.html
- Non-type template parameters with auto type	: p0127r2 http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0127r2.html
- DR: Matching of template template-arguments excludes compatible templates	: p0522r0 http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0522r0.html

#### Fold expressions





- problématique et contexte ?
- pré-C++17 ?

Sources :

- proposal : n4295 http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4295.html
- cppreference : https://en.cppreference.com/w/cpp/language/fold

- Unary fold expressions and empty parameter packs : p0036r0 http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0036r0.pdf
- Pack expansions in using-declarations : p0195r2 http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0195r2.html

### Autres

- Selection statements with initializers
- Compile-time conditional statments
- Class template argument deduction (CTAD)
- auto non-type template parameters
- constexpr lambdas
- Guaranteed copy elision
- Nested namespace definitions
...

## Library Changes 

- string_view
- Parallel algorithms
- New algorithms
- Filesystem support
- Improved insertion and splicing for associative containers
- Variable templates for metafunctions
- Boolean logic metafunctions
...

### stocker/retourner/transmettre une valeur

- problématique et contexte : any, variant et optional pour une autre manière de stocker/retourner/transmettre une valeur. 
- pré-C++17 : void*, union, T* (langage)

- Improving std::pair and std::tuple : n4387 http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4387.html

#### std::optional

- problématique et contexte ?
- pré-C++17 ?

#### std::variant

- problématique et contexte ?
- pré-C++17 : boost::variant, QVariant (libs)

#### std::any

- cppreference : https://en.cppreference.com/w/cpp/utility/any
- proposal : p0220r1 http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0220r1.html

## Références

- https://www.bfilipek.com/2017/11/cpp17summary.html
- [CppCon 2017: Jason Turner "Practical C++17" (YouTube)](https://youtu.be/nnY4e4faNp0)
- [C++ compiler support for C++17 (cppreference.com)](https://en.cppreference.com/w/cpp/compiler_support#cpp17)
- [C++17 in details: Code Simplification](https://www.bfilipek.com/2017/07/cpp17-details-simplifications.html)
- [https://www.fluentcpp.com/2018/06/19/3-simple-c17-features-that-will-make-your-code-simpler/](https://www.fluentcpp.com/2018/06/19/3-simple-c17-features-that-will-make-your-code-simpler/)
- https://www.codingame.com/playgrounds/2205/7-features-of-c17-that-will-simplify-your-code/introduction
