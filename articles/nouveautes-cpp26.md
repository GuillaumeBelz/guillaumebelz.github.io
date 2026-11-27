# Les nouveautés envisagées pour C++26

- **Créé le :** 11 novembre 2026
- **Dernière mise à jour :** 27 novembre 2026
- **Rédaction :** avec l’aide de l’IA

Quelques fonctionnalités majeures du projet C++26, avec des exemples courts.

## Réflexion statique

La réflexion permet d’inspecter les types à la compilation et de générer du code. Ici, une énumération est convertie en son nom :

```cpp
enum class Color {
    red,
    green,
    blue
};

template<class E>
    requires std::is_enum_v<E>
constexpr std::string enum_to_string(E value) {
    template for (constexpr auto e : std::meta::enumerators_of(^^E)) {
        if (value == [:e:])
            return std::string(std::meta::identifier_of(e));
    }
    return "<unknown>";
}

int main() {
    return enum_to_string(Color::green) == "green" ? 0 : 1;
}
```

[Code complet](exemples/cpp26/reflection_enum.cpp) · [Réflexion P2996](https://isocpp.org/files/papers/P2996R13.html) · [Expansion P1306](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2025/p1306r5.html)

Dans cet exemple :

- `template for` est une boucle d’expansion à la compilation : le compilateur répète le corps pour chaque élément de la séquence. Les comparaisons avec `value`, elles, s’exécutent à l’exécution.
- `^^E` applique l’opérateur de réflexion au type `E` et produit une représentation réflexive de ce type.
- `std::meta::enumerators_of(^^E)` renvoie les énumérateurs de `E`, chacun sous forme d’une représentation réflexive. `e` désigne successivement ces représentations.
- `[:e:]` est une *splice* : elle réinjecte dans le code l’entité décrite par `e`. Ici, il s’agit de la valeur de l’énumérateur à comparer avec `value`.
- `std::meta::identifier_of(e)` récupère le nom de l’énumérateur sous forme de texte, par exemple `"green"`.

La fonction cherche donc l’énumérateur dont la valeur correspond à `value`, puis renvoie son nom.

Il faut distinguer l’objet de réflexion de la *splice* qui l’utilise : `e` est une représentation réflexive, tandis que `[:e:]` réintroduit l’énumérateur décrit par `e` dans le code. La même syntaxe s’emploie dans un contexte de type. Par exemple, si `r` décrit le type `int`, `typename [:r:]` désigne ce type et `constexpr typename [:r:] x{42};` équivaut à déclarer `constexpr int x{42};`. Ainsi, `[:r:]` et `[:e:]` sont des splices ; leur résultat dépend du contexte, ici un type pour `r` et une expression désignant un énumérateur pour `e` (voir [P2996](https://isocpp.org/files/papers/P2996R13.html)).

## Contrats

Les contrats du C++26 permettent d’exprimer des conditions attendues à différents moments de l’exécution. Au 27 novembre 2026, le modèle comprend trois formes :

- **Précondition (`pre`)** : décrit une condition que l’appelant doit satisfaire avant l’appel. Dans l’exemple ci-dessous, le dénominateur doit être différent de zéro.
- **Postcondition (`post`)** : décrit une propriété qui doit être vraie au retour normal de la fonction. Elle peut nommer la valeur retournée pour la référencer dans le prédicat.
- **Assertion de contrat (`contract_assert`)** : vérifie une condition à un point précis du corps de la fonction, par exemple un invariant intermédiaire.

La forme exacte de l’évaluation dépend des sémantiques de contrat choisies : une assertion peut notamment être ignorée, observée ou appliquée avec arrêt en cas de violation.

Voici une fonction assortie d’une précondition :

```cpp
int divide(int numerator, int denominator)
    pre (denominator != 0)
{
    return numerator / denominator;
}
```

[Code complet](exemples/cpp26/contracts.cpp) · [Proposition P2900](https://wg21.link/P2900R14) · [Contrats C++26 sur cppreference](https://en.cppreference.com/w/cpp/language/contracts)

## Conteneur à capacité fixe

`std::inplace_vector` peut grandir jusqu’à sa capacité sans allocation dynamique :

```cpp
std::inplace_vector<int, 3> samples;
samples.push_back(4);
samples.push_back(9);
std::cout << samples[1] << '\n'; // 9
```

[Code complet](exemples/cpp26/inplace_vector.cpp) · [Référence](https://en.cppreference.com/w/cpp/container/inplace_vector)

## Exécution asynchrone

`std::execution` compose un travail et son résultat avec des *senders* :

```cpp
auto work = std::execution::just(20)
          | std::execution::then([](int value) { return value * 2; });
auto [result] = std::this_thread::sync_wait(std::move(work)).value();
```

[Code complet](exemples/cpp26/execution.cpp) · [Proposition P2300](https://wg21.link/P2300R10)

## Autres ajouts

- `std::simd` et `std::linalg` : calcul vectorisé et algèbre linéaire.
- `std::hive` : conteneur séquentiel adapté aux insertions et suppressions fréquentes.
- `<debugging>` et `<text_encoding>` : outils de débogage et informations d’encodage.
- RCU et *hazard pointers* : mécanismes de récupération mémoire pour le code concurrent.

## Statut et compilation

Le projet C++26 a été rejeté au vote ISO d’octobre 2026 ; ces fonctionnalités restent donc susceptibles d’évoluer. Les exemples sont illustratifs : **Apple Clang 21.0.0**, testé avec `clang++ -std=c++2c -fsyntax-only`, ne prend pas en charge les fonctionnalités ou bibliothèques nécessaires. Ils n’ont pas pu être compilés avec cet environnement.

[Liste des fonctionnalités C++26](https://en.cppreference.com/w/cpp/26)

## Références et conférences

Les pages de cppreference donnent une vue d’ensemble des nouveautés du C++26 et de leur prise en charge par les compilateurs.

- [C++26 sur cppreference](https://en.cppreference.com/w/cpp/26) — fonctionnalités du langage et de la bibliothèque standard.
- [Prise en charge de C++26 par les compilateurs](https://en.cppreference.com/cpp/compiler_support/26) — état de l’implémentation des fonctionnalités.

Les conférences suivantes approfondissent plusieurs de ces sujets :

- [C++26: A Curated Tour of What's New - Marc Gregoire - CppCon 2026](https://www.youtube.com/watch?v=ak1zrDo2y-U) — panorama de la réflexion statique, des contrats, des améliorations du langage et de la bibliothèque standard, dont `std::execution`, `std::inplace_vector` et `std::hive`.
- [C++26 - What's In It For You? — Marc Gregoire, CppCon 2025](https://youtu.be/PcidhLUYp-4) — présentation de la réflexion et des contrats, puis tour d’horizon des ajouts du langage et de la bibliothèque : exécution asynchrone, nouveaux conteneurs, algèbre linéaire et SIMD (Single Instruction, Multiple Data, ou « instruction unique, données multiples »).
- [C++26 Uncovered: Everything You Need to Know About the New Standard — Inbal Levi - Core C++ 2026](https://youtu.be/AKO5A1bdwuM) — lecture du standard autour de trois axes, simplicité, sûreté et performance, avec un focus sur réflexion statique, contrats, `std::execution`, SIMD et comportements erronés, une catégorie distincte du comportement indéfini.
- [Three Cool Things in C++26: Safety, Reflection & std::execution — Herb Sutter, C++ on Sea 2025](https://youtu.be/kKbT0Vg3ISw) — met en avant la réduction des comportements indéfinis, la réflexion à la compilation et le modèle sender/receiver pour composer des tâches concurrentes et parallèles.

## Communauté francophone

C++FrUG (C++ French User Group) est  un lieu d’échange sur les évolutions futures du C++. La communauté compte des personnes impliquées dans le comité de standardisation.

[Rejoindre C++FrUG sur Discord](https://discord.gg/YAgc4BsWVd).

Retour au [README.md](../README.md).

## Historique des mises à jour

- 2026-11-11 — Création de l’article.
- 2026-11-16 — Ajout des références cppreference et de résumés de conférences sur C++26.
- 2026-11-27 — Explication des notations, des objets réflexifs et du rôle des splices dans l’exemple de réflexion statique ; présentation des trois formes de contrats C++26.
