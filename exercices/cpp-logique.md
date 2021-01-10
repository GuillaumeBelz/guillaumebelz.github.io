
# Création d'un émulateur d'ordinateur simple

**Niveau C++ : débutant**

Tu devras utiliser es opérateurs logiques du C++, la classe `std::bitset`, écrire des fonctions
et des classes.

Les exercices présentés ici demanderont plus de connaissances sur la logique binaire et les composants
élémentaires d'un ordinateur que sur le C++ proprement dit.

Ces exercices peuvent intéresser ceux qui veulent approfondir la logique binaire, l'architecture des ordinateurs
et l'électronique.

**Vue d'ensemble**

Le but final de ce projet est de construire un ordinateur de façon logicielle. C'est-à-dire implémenter
avec du code les différents éléments d'un ordinateur simple, en partant des portes logiques, jusqu'aux composants
les plus complexes.

Pour des raisons de simplicité, l'architecture à implémenter sera un ordinateur simple, type TRS-80 ou Arduino, 
sans pipeline d'instructions, sans mémoire cache, et sans les fonctionnalités que l'on retrouve

Seuls les exercices sont donnés ici, il faudra que tu fasses tes propres recherches quand nécessaire
pour résoudre les exercices. Voici quelques liens :

- [Combinational Logic Circuits](https://www.electronics-tutorials.ws/combination/comb_1.html)
- [Pratique des circuits logiques](http://www.circuits-logiques.polymtl.ca/php/manuel.php)

## Comment réaliser les exercices

Pour la majorité des exercices, il est possible d'écrire la solution dans des fonctions ou des classes et utiliser la
fonction `main` pour appeler la fonction de test de ton code. Il suffit alors de copier-coller ton code dans un éditeur 
en ligne, par exemple [wandbox](https://wandbox.org/).

Pour les projets, il faudra créer de vrais projets C++ dans l'éditeur de ton choix.

## Exercices pour bien comprendre les opérateurs logiques du C++

Pour rappel, il existe trois types d'opérateurs en C++ [Logical operators](https://en.cppreference.com/w/cpp/language/operator_logical),
à utiliser avec le type `bool` :

- l'opérateur unaire, qui prend une opérande : `!` (NOT)
- les opérateurs binaires, qui prennent deux opérandes : `&&` (AND) et `||` (OR)

```cpp
// Remplis le code suivant pour l'opérateur AND
bool and_operator(bool a, bool b)
{
    // Doit retourner le résultat de l'opération (a AND b)
    return ...
}

void test_and_operator()
{
    // Écris les tests pour l'opérateur AND
    assert(and_operator(false, false) == ...);
    assert(and_operator(false, true) == ...);
    assert(and_operator(true, false) == ...);
    assert(and_operator(true, true) == ...);
}
```

```cpp
// Remplis le code suivant pour l'opérateur (inclusif) OR
bool or_operator(bool a, bool b)
{
    // Doit retourner le résultat de l'opération (a OR b)
    return ...
}

void test_or_operator()
{
    // Ecris les tests pour l'opérateur OR
    assert(or_operator(false, false) == ...);
    assert(or_operator(false, true) == ...);
    assert(or_operator(true, false) == ...);
    assert(or_operator(true, true) == ...);
}
```

```cpp
// Remplis le code suivant pour l'opérateur NON
bool negation_operator(bool a)
{
    // Doit retourner le résultat de l'opération (!a)
    return ...
}

void test_negation_operator()
{
    // Écris les tests pour l'opérateur NON
    assert(negation_operator(false) == ...);
    assert(negation_operator(true) == ...);
}
```


## Première partie : les composants logiques élémentaires

Cette série d'exercices à pour but de te faire écrire des circuits logiques (des expressions logiques dans le code)
à partir de tables de vérité et d'écrire des tables de vérité (sous forme de tests) à partir d'expressions logiques
simples. Tu n'as besoin d'utiliser que les trois opérateurs logiques de base et tu n'as pas besoin
de simplifier les expressions en utilisant des tableaux de Karnaugh et les lois de Morgan.

### Quelques opérateurs logiques simples

```cpp
// Remplis le code suivant pour l'opérateur NON-AND
bool non_and_operator(bool a, bool b)
{
    return ...
}

void test_non_and_operator()
{
    assert(non_and_operator(false, false), true);
    assert(non_and_operator(false, true), true);
    assert(non_and_operator(true, false), true);
    assert(non_and_operator(true, true), false);
}
```

**Aide**

Tu peux remarquer que la table de vérité donnée dans les tests correspond à la négation de l'opérateur AND :

  a  |  b  |  AND  |  NON-AND
----|-----|------|--------
  false  |  false |  false  | true
  false  | true  |  false  | true
 true  |  false |  false  | true
 true  | true  | true   |  false

```cpp
// Remplis le code suivant pour l'opérateur non-OR
bool non_or_operator(bool a, bool b)
{
    return ...
}

void test_non_or_operator()
{
    assert(non_or_operator(false, false), true);
    assert(non_or_operator(false, true), false);
    assert(non_or_operator(true, false), false);
    assert(non_or_operator(true, true), false);
}
```

```cpp
// Avec l'opérateur OR "classique" (dit "inclusif"), le résultat
// est vrai si l'une au moins des deux valeurs est vraie.
// Avec l'opérateur OR exclusif (XOR), le résultat est vrai si
// l'une ou l'autre valeur est vraie, mais pas les deux en meme temps.

// Remplis la table de vérité et le code suivant pour l'opérateur OR exclusif (XOR),
// en te basant sur la description précédente.
bool xor_operator(bool a, bool b)
{
    return ...
}

void test_xor_operator()
{
    assert(xor_operator(false, false) == ...);
    assert(xor_operator(false, true) == ...);
    assert(xor_operator(true, false) == ...);
    assert(xor_operator(true, true) == ...);
}
```

```cpp
// Remplis la table de vérité et le code suivant pour l'opérateur NON-XOR,
// en te basant sur la description de l'opérateur XOR.
bool non_xor_operator(bool a, bool b)
{
    return ...
}

void test_non_xor_operator()
{
    assert(non_xor_operator(false, false) == ...);
    assert(non_xor_operator(false, true) == ...);
    assert(non_xor_operator(true, false) == ...);
    assert(non_xor_operator(true, true) == ...);
}
```


### Quelques expressions logiques plus complexes

Les exercices suivants consistent à implémenter des expressions logiques un peu plus complexes,
avec plus de deux entrées et une ou plusieurs sorties. Tu peux utiliser les tableaux de Karnaugh
et les lois de Morgan pour simplifier les expressions (si c'est possible) avant de les implementer.

```cpp
// Écris le code et les tests, en te basant sur la table de Karnaugh suivante :
//               ab
//      | 00 | 01 | 11 | 10
// -------------------------
// c  1 |  0 |  0 |  0 |  0
//    0 |  0 |  0 |  0 |  1
// Cette table peut également s'exprimer avec l'expression logique suivante : r = !a!b!c + abc
bool expression_1(bool a, bool b, bool c)
{
    return ...
}

void test_expression_1()
{
    assert(expression_1(false, false, false) == ...);
    assert(expression_1(false, true, false) == ...);
    assert(expression_1(true, false, false) == ...);
    assert(expression_1(true, true, false) == ...);
    assert(expression_1(false, false, true) == ...);
    assert(expression_1(false, true, true) == ...);
    assert(expression_1(true, false, true) == ...);
    assert(expression_1(true, true, true) == ...);
}
```

```cpp
// Écris le code et les tests, en te basant sur la table de Karnaugh suivante :
//               ab
//      | 00 | 01 | 11 | 10
// -------------------------
// c  1 |  1 |  0 |  0 |  0
//    1 |  1 |  0 |  1 |  1
bool expression_2(bool a, bool b, bool c)
{
    return ...
}

void test_expression_2()
{
    assert(expression_2(false, false, false) == ...);
    assert(expression_2(false, true, false) == ...);
    assert(expression_2(true, false, false) == ...);
    assert(expression_2(true, true, false) == ...);
    assert(expression_2(false, false, true) == ...);
    assert(expression_2(false, true, true) == ...);
    assert(expression_2(true, false, true) == ...);
    assert(expression_2(true, true, true) == ...);
}
```

```cpp
// Écris le code et les tests, en te basant sur la table de Karnaugh suivante :
//                 ab
//        | 00 | 01 | 11 | 10
// ---------------------------
//     00 |  1 |  0 |  0 |  0
// cd  01 |  0 |  1 |  0 |  0
//     11 |  0 |  0 |  1 |  0
//     10 |  0 |  0 |  0 |  1
bool expression_3(bool a, bool b, bool c, bool d)
{
    return ...
}

void test_expression_3()
{
    assert(expression_3(false, false, false) == ...);
    assert(expression_3(false, true, false) == ...);
    assert(expression_3(true, false, false) == ...);
    assert(expression_3(true, true, false) == ...);
    assert(expression_3(false, false, true) == ...);
    assert(expression_3(false, true, true) == ...);
    assert(expression_3(true, false, true) == ...);
    assert(expression_3(true, true, true) == ...);
}
```

```cpp
// Écris le code et les tests, en te basant sur la table de Karnaugh suivante :
//                 ab
//        | 00 | 01 | 11 | 10
// ---------------------------
//     00 |  1 |  1 |  0 |  1
// cd  01 |  1 |  1 |  0 |  1
//     11 |  0 |  0 |  0 |  1
//     10 |  0 |  0 |  0 |  1
void expression_4(bool a, bool b, bool c, bool d)
{
    return ...
}

void test_expression_4()
{
    assert(expression_4(false, false, false) == ...);
    assert(expression_4(false, true, false) == ...);
    assert(expression_4(true, false, false) == ...);
    assert(expression_4(true, true, false) ==...);
    assert(expression_4(false, false, true) == ...);
    assert(expression_4(false, true, true) == ...);
    assert(expression_4(true, false, true) == ...);
    assert(expression_4(true, true, true) == ...);
}
```

```cpp
// Écris le code suivant et le test, en te basant sur la table de Karnaugh suivante.
// Attention, il y a 2 sorties dans cet exercice.
//                 ab
//        | 00 | 01 | 11 | 10
// ---------------------------
//     00 | 01 | 01 | 00 | 01
// cd  01 | 01 | 01 | 00 | 01
//     11 | 10 | 10 | 10 | 11
//     10 | 10 | 10 | 10 | 11
std::pair<bool, bool> expression_4(bool a, bool b, bool c, bool d)
{
    return ...
}

void test_expression_4()
{
    assert(expression_4(false, false, false, false) == std::make_pair(false, false));
    ...
}
```

```cpp
// Prends un exercices sur l'un des sites proposés (ou cherches d'autres exercices en ligne)
// et implémente le code et les tests.
// https://fr.wikiversity.org/wiki/Logique_de_base/Exercices/Tableau_de_Karnaugh_1
// https://mrproof.blogspot.com/2012/10/exercices-sur-le-tableau-de-karnaugh.html
// http://electroussafi.ueuo.com/docs/sln/E_karnaugh.pdf
// https://f2school.com/tableau-de-karnaugh-cours-et-exercices-corriges/
void expression_5(bool a, ...)
{
    // Écris l'expression logique qui respecte les tests suivants.
    return ...
}

void test_expression_5()
{
    assert(expression_5(...) == ...);
    ...
}
```


## Deuxième partie : les composants élémentaires d'un ordinateur simple (logique combinatoire)

Pour ces exercices, tu devras en général concevoir un circuit logique à partir d'une table de vérité,
éventuellement après simplification en utilisant des tableaux de Karnaugh ou les
lois de Morgan.

Dans la suite des exercices, tu vas devoir implementer des composants logiques utilises dans
les ordinateurs, par exemple un multiplexeur, un additionneur, un décodeur, etc.

En pratique, il s'agit simplement d'implémenter des expressions logiques de plus en plus
complexes, en suivant la même méthode que pour les expressions logiques précédentes.

Note : ces circuits sont dit "combinatoires" du fait qu'ils ne dependent pas du temps
[https://fr.wikipedia.org/wiki/Fonction_logique](https://fr.wikipedia.org/wiki/Fonction_logique).

### Le multiplexeur

Le but d'un multiplexeur est de sélection une entrée parmi plusieurs.
[The Multiplexer](https://www.electronics-tutorials.ws/combination/comb_2.html)

```cpp
// Implémente un multiplexeur simple à deux entrées et une entrée de sélection.
// Lorsque l'entrée de sélection `select` est `false`, la sortie est égale
// à l'entrèe `input_a`. Sinon la sortie est égale à la seconde entrèe `intput_b`.
// (x = ignore)
//  select | input_a | input_b || output
// --------------------------------------
//     0   |    0    |    x    ||   0
//     0   |    1    |    x    ||   1
//     1   |    x    |    0    ||   0
//     1   |    x    |    1    ||   1
bool multiplexer_2_to_1(bool select, bool input_a, bool input_b)
{
    return ...
}

void test_multiplexer_2_to_1()
{
    assert(multiplexer_2_to_1(false, false, false) == ...);
    ...
}
```

**Exercices supplémentaires**

- Écris un multiplexeur 4-to-1.
- Écris un multiplexeur 4-to-2.


### Le démultiplexeur

Le démultiplexeur réalise l'opération inverse du multiplexeur, c'est-à-dire de prendre une entrée et de
l'envoyer dans une sortie parmis plusieurs.
[The Demultiplexer](https://www.electronics-tutorials.ws/combination/comb_3.html)

```cpp
// Implemente un démultiplexeur simple à une entrée, une entrée de sélection et deux sorties.
// Lorsque l'entrée de sélection `select_a` est `false`, la première valeur booléenne est égale
// à l'entrée `input`. Sinon la seconde valeur booléenne est égale à l'entrée `input`.
// Une sortie non active est conservée à `false`.
//  select | input || output 1 | output 2
// ----------------------------------------
//     0   |   0   ||    0     |    0
//     0   |   1   ||    1     |    0
//     1   |   0   ||    0     |    0
//     1   |   1   ||    0     |    1

bool demultiplexer_1_to_2(bool select_a, bool input_a, bool input_b)
{
    return ...
}

void test_demultiplexer_1_to_2()
{
    assert(demultiplexer_1_to_2(false, false, false) == ...);
    ...
}
```

**Exercices supplémentaires**

- Écris un démultiplexeur 1-to-4.


### L'encodeur prioritaire

L'encodeur prioritaire prend plusieurs entrées et retourne le numéro (codé en binaire) de l'entrée la plus prioritaire.
[Priority Encoder](https://www.electronics-tutorials.ws/combination/comb_4.html)

```cpp
// Ordre de priorité : 0 (plus basse priorité) -> 3 (plus haute priorité)
//  input_3 | input_2 | input_1 | input_0 || output_1 | output_0 | valid
// ----------------------------------------------------------------------
//     0    |    0    |    0    |    0    ||    x     |    x     |   0
// ----------------------------------------------------------------------
//     0    |    0    |    0    |    1    ||    0     |    0     |   1
//     0    |    0    |    1    |    x    ||    0     |    1     |   1
//     0    |    1    |    x    |    x    ||    1     |    0     |   1
//     1    |    x    |    x    |    x    ||    1     |    1     |   1

std::tuple<bool, bool, bool> priority_decoder_4_to_2(bool input_3, bool input_2, bool input_1, bool input_0)
{
    return ...
}

void test_priority_decoder_4_to_2()
{
    assert(priority_decoder_4_to_2(false, false, false, false) = std::make_tuple(false, false, false));
    ...
}
```

**Exercices supplémentaires**

- Écris un décodeur prioritaire 8-to-3.
- Écris un keyboard encodeur.
- Écris un priority encoder navigation.
- Écris un interupt request.


### Le décodeur d'affichage

Écris le code et les tests pour un décodeur d'affichage 7-segments LEDS.
[Display Decoder](https://www.electronics-tutorials.ws/combination/comb_6.html)

**Exercices supplémentaires**

- Écris un décodeur BCD to 7-segments.
- Écris un contrôleur d'affichage. Le principe est le même mais l'affichage se fait sur une une grille 2D de pixels sur un écran. 
Prends par exemple les contrôleurs [mc685](http://www.primrosebank.net/computers/mtx/techlib/mtx/6845/fdx_80col.htm) ou 6847.


### Les autres circuits logiques combinatoires

Écris le code et les tests des autres composants logiques.

- Le décodeur binaire [Binary Decoder](https://www.electronics-tutorials.ws/combination/comb_5.html).
- L'additionneur binaire [Binary Adder](https://www.electronics-tutorials.ws/combination/comb_7.html).
  - Rappel sur la représentation binaire des nombres entiers : [Binary Numbers](https://www.electronics-tutorials.ws/binary/bin_1.html).
  - Exercices supplémentaires : écris des additionneurs 4 bits, 8 bits et 16 bits.
- Le comparateur logique [Digital Comparator](https://www.electronics-tutorials.ws/combination/comb_8.html).
  - Exercices supplémentaires : écris des comparateurs 4 bits et 8 bits.
- Le soustracteur binaire [Binary Subtractor](https://www.electronics-tutorials.ws/combination/binary-subtractor.html).
  - Exercices supplémentaires : écris des soustracteurs 4 bits et 8 bits.
- L'émetteur-récepteur de bus [Bus Transceiver](https://www.electronics-tutorials.ws/combination/bus-transceiver.html).
- Transmission Gate
- Analogue to Digital Converter
- Binary Weighted DAC
- R-2R DAC


## Bus de données = plusieurs booléens. Utilisation de std::bitset ou uint64_t. Permet de bosser les boucles.

```cpp
using bus8 = std::bitset<8>;

bool composantX(bus8 a, bus8 b, bus8 c) {
    bus8 result;
    for(int i=0; i<bus8::size; ++i)
        result[i] = composantOr(composantAnd(a[i], b[i]), c[i]);
    return result;
}
```

Idem avec std::join ?



## Composants avec registre : implémenta par une classe (état interne = variable membre)

circuit logique séquentiel : https://www.electronics-tutorials.ws/sequential/seq_1.html





## clock, ROM, demarrage de l'ordinateur

algo simple : instruction pointer contient addresse de l'instruction a lire, lecture de l'instruction, execution, incrementation de IP, refaire

instruction simple :
- lire et ecrire en memoire
- saut
- condition
- UAL
