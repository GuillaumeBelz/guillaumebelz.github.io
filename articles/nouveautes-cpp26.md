# Les nouveautés envisagées pour C++26

- **Créé le :** 11 novembre 2026
- **Dernière mise à jour :** 16 novembre 2026
- **Rédaction :** avec l’aide de l’IA

Quelques fonctionnalités majeures du projet C++26, avec des exemples courts.

## Réflexion statique

La réflexion permet d’inspecter les types à la compilation et de générer du code. Ici, une énumération est convertie en son nom :

```cpp
template<class E>
constexpr std::string enum_to_string(E value) {
    template for (constexpr auto e : std::meta::enumerators_of(^^E)) {
        if (value == [:e:])
            return std::string(std::meta::identifier_of(e));
    }
    return "<unknown>";
}
```

[Code complet](exemples/cpp26/reflection_enum.cpp) · [Réflexion P2996](https://isocpp.org/files/papers/P2996R13.html) · [Expansion P1306](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2025/p1306r5.html)

## Contrats

Une précondition documente et vérifie une condition requise avant l’appel :

```cpp
int divide(int numerator, int denominator)
    pre (denominator != 0)
{
    return numerator / denominator;
}
```

[Code complet](exemples/cpp26/contracts.cpp) · [Proposition P2900](https://wg21.link/P2900R14)

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

## Historique des mises à jour

- 2026-11-11 — Création de l’article.
- 2026-11-16 — Ajout des références cppreference et de résumés de conférences sur C++26.
