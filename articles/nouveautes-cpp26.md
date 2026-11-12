# Les nouveautés envisagées pour C++26

- **Créé le :** 11 novembre 2026
- **Dernière mise à jour :** 11 novembre 2026
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

## Communauté francophone

C++FrUG (C++ French User Group) est  un lieu d’échange sur les évolutions futures du C++. La communauté compte des personnes impliquées dans le comité de standardisation.

[Rejoindre C++FrUG sur Discord](https://discord.gg/YAgc4BsWVd).

## Historique des mises à jour

- 2026-11-11 — Création de l’article.
- 2026-11-11 — Ajout du lien vers la communauté C++FrUG.
- 2026-11-11 — Réduction du texte et ajout d’exemples de code.
- 2026-11-11 — Précision sur les discussions et les membres impliqués dans le comité au sein de C++FrUG.
