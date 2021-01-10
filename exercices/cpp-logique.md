
# Création d'un émulateur d'ordinateur simple

Le but final de ce projet est de construire un ordinateur de facon logicielle. C'est-à-dire implémenter
avec du code les differents éléments d'un ordinateur simple, en partant des portes logiques, jusqu'aux composants
les plus complexes.

Pour des raisons de simplicité, l'architure à implémenter sera un ordinateur simple, type TRS-80 ou arduino, 
sans pipeline d'instructions, sans mémoire cache, et sans les fonctionalités que l'on retrouve

Seuls les exerices sont donnés ici, il faudra que tu fasses tes propres recherches quand nécessaire
pour résoudre les exercices. Voici quelques liens :

- [Combinational Logic Circuits](https://www.electronics-tutorials.ws/combination/comb_1.html)
- [Pratique des circuits logiques](http://www.circuits-logiques.polymtl.ca/php/manuel.php)

## Comment réaliser les exercices

Pour la majorité des exercices, il est possible d'écrire la solution dans des fonctions ou des classes et utiliser la
fonction `main` pour tester ton code. Il suffit alors de copier-coller ton code dans un éditeur en ligne, par exemple
[wandbox](https://wandbox.org/).

Pour les projets, il faudra créer de vrais projets C++ dans l'éditeur de ton choix.

## Exercices pour bien comprendre les operateurs logiques du C++

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
    assert(and_operator(false, false), ...);
    assert(and_operator(false, true), ...);
    assert(and_operator(true, false), ...);
    assert(and_operator(true, true), ...);
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
    assert(or_operator(false, false), ...);
    assert(or_operator(false, true), ...);
    assert(or_operator(true, false), ...);
    assert(or_operator(true, true), ...);
}
```

```cpp
// Remplis le code suivant pour l'operateur NON
bool negation_operator(bool a)
{
    // Doit retourner le résultat de l'opération (!a)
    return ...
}

void test_negation_operator()
{
    // Écris les tests pour l'opérateur NON
    assert(negation_operator(false), ...);
    assert(negation_operator(true), ...);
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
    assert(non_and_operator(false, false),  true);
    assert(non_and_operator(false, true),  true);
    assert(non_and_operator(true, false),  true);
    assert(non_and_operator(true, true), false);
}
```

**Aide**

Tu peux remarquer que la table de vérité donnée dans les tests correspond à la négation de l'opérateur AND :

   a   |   b   |  AND  | Non-AND
---------------------------------
 false | false | false |  true
---------------------------------
 false | true  | false |  true
---------------------------------
 true  | false | false |  true
---------------------------------
 true  | true  | true  |  false


```cpp
// Remplis le code suivant pour l'operateur non-OR

bool non_or_operator(bool a, bool b)
{
    return ...
}

void test_non_or_operator()
{
    assert(non_or_operator(false, false),  true);
    assert(non_or_operator(false,  true), false);
    assert(non_or_operator( true, false), false);
    assert(non_or_operator( true,  true), false);
}
```

```cpp
// Avec l'operateur OR "classique" (dit "inclusif"), le resultat
// est vrai si l'une au moins des 2 valeurs est vraie.
// Avec l'operateur OR exclusif (XOR), le resultat est vrai si
// l'une ou l'autre valeur est vraie, mais pas les 2 en meme temps.

// Remplissez la table de verite et le code suivant pour l'operateur OR exclusif,
// en te basant sur la description de l'operateur XOR.

bool xor_operator(bool a, bool b)
{
    return ...
}

void test_xor_operator()
{
    assert(xor_operator(false, false), ...);
    assert(xor_operator(false,  true), ...);
    assert(xor_operator( true, false), ...);
    assert(xor_operator( true,  true), ...);
}
```

```cpp
// Remplis la table de verite et le code suivant pour l'operateur non-XOR,
// en te basant sur la description de l'operateur XOR.

bool non_xor_operator(bool a, bool b)
{
    return ...
}

void test_non_xor_operator()
{
    assert(non_xor_operator(false, false), ...);
    assert(non_xor_operator(false,  true), ...);
    assert(non_xor_operator( true, false), ...);
    assert(non_xor_operator( true,  true), ...);
}
```


### Quelques expressions logiques plus complexes

Les exercices suivants consistent a implementer des expressions logiques un peu plus complexes,
avec plus de 2 entrees et 1 ou plusieurs sorties. Tu peux utiliser les tableaux de karnaugh
et les lois de morgan pour simplifier les expressions (si c'est possible) avant de les implementer.

Rappel sur l'algebre boolean : https://www.electronics-tutorials.ws/boolean/bool_6.html


```cpp
// Remplis le code suivant et le test, en vous basant sur la table de Karnaugh suivante

//               ab
//      | 00 | 01 | 11 | 10
// -------------------------
// c  1 |  0 |  0 |  0 |  0
//    0 |  0 |  0 |  0 |  1

// Cette table peut egalement s'exprimer avec l'expression logique suivante : r = !a!b!c + abc

bool expression_1(bool a, bool b, bool c)
{
    return ...
}

void test_expression_1()
{
    assert(expression_1(false, false, false), ...);
    assert(expression_1(false,  true, false), ...);
    assert(expression_1( true, false, false), ...);
    assert(expression_1( true,  true, false), ...);
    assert(expression_1(false, false,  true), ...);
    assert(expression_1(false,  true,  true), ...);
    assert(expression_1( true, false,  true), ...);
    assert(expression_1( true,  true,  true), ...);
}
```

```cpp
// Remplissez le code suivant et le test, en vous basant sur la table de Karnaugh suivante

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
    assert(expression_2(false, false, false), ...);
    assert(expression_2(false,  true, false), ...);
    assert(expression_2( true, false, false), ...);
    assert(expression_2( true,  true, false), ...);
    assert(expression_2(false, false,  true), ...);
    assert(expression_2(false,  true,  true), ...);
    assert(expression_2( true, false,  true), ...);
    assert(expression_2( true,  true,  true), ...);
}
```

```cpp
// Remplis le code suivant et le test, en vous basant sur la table de Karnaugh suivante

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
    assert(expression_3(false, false, false), ...);
    assert(expression_3(false,  true, false), ...);
    assert(expression_3( true, false, false), ...);
    assert(expression_3( true,  true, false), ...);
    assert(expression_3(false, false,  true), ...);
    assert(expression_3(false,  true,  true), ...);
    assert(expression_3( true, false,  true), ...);
    assert(expression_3( true,  true,  true), ...);
}
```

```cpp
// Remplissez le code suivant et le test, en vous basant sur la table de Karnaugh suivante

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
    assert(expression_4(false, false, false), ...);
    assert(expression_4(false,  true, false), ...);
    assert(expression_4( true, false, false), ...);
    assert(expression_4( true,  true, false), ...);
    assert(expression_4(false, false,  true), ...);
    assert(expression_4(false,  true,  true), ...);
    assert(expression_4( true, false,  true), ...);
    assert(expression_4( true,  true,  true), ...);
}
```

```cpp
// Remplis le code suivant et le test, en vous basant sur la table de Karnaugh suivante
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
    assert(expression_4(false, false, false), {false, false});
    ...
}
```

```cpp
// Prends un exercices sur l'un des sites proposes (ou cherches d'autres exercices en ligne)
// et implemente le code et les tests.

// https://fr.wikiversity.org/wiki/Logique_de_base/Exercices/Tableau_de_Karnaugh_1
// https://mrproof.blogspot.com/2012/10/exercices-sur-le-tableau-de-karnaugh.html
// http://electroussafi.ueuo.com/docs/sln/E_karnaugh.pdf
// https://f2school.com/tableau-de-karnaugh-cours-et-exercices-corriges/

void expression_5(bool a, ...)
{
    // ecrivez l'expression logique qui respecte les tests suivants.
    return ...
}

void test_expression_5()
{
    assert(expression_5(...), ...);
    ...
}
```



## Deuxième partie : les composants elementaires d'un ordinateur simple (logique combinatoire)

Pour ces exercices, tu devras en général concevoir un circuit logique à partir d'une table de vérité,
éventuellement apres simlpification en utilisant des tableaux de Karnaugh ou les
lois de Morgan.

Dans la suite des exercices, tu vas devoir implementer des composants logiques utilises dans
les ordinateurs, par exemple un multiplexeur, un additioneur, un decodeur, etc.

En pratique, il s'agit simplement d'implenter des expressions logiques de plus en plus
complexes, en suivant la meme methode que pour les expressions logiques precedentes.

Rappel de cours : https://www.electronics-tutorials.ws/combination/comb_1.html

Note : ces circuits sont dit "combinatoires" du fait qu'ils ne dependent pas du temps : https://fr.wikipedia.org/wiki/Fonction_logique


### Le multiplexeur

Le but d'un multiplexeur est de selection une entree parmi plusieurs.

```cpp
// Implementer une multiplexeur simple a 2 entrees + 1 entree de selection.
// Lors que l'entree de selection select est false, la sortie est egale
// a l'entree input_a. Sinon la sortie est egale a la seconde entree intput_b.

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
    assert(multiplexer_2_to_1(false, false, false), ...);
    ...
}
```

Exercices supplementaires : multiplexeur 4-to-1, puis 4-to-2. https://www.electronics-tutorials.ws/combination/comb_2.html


### Le demultiplexeur

Le demultiplexeur realise l'operation inverse du multiplexeur, c'est a dire de prendre 1 entree et de
l'envoyer dans 1 sortie parmis plusieurs.

```cpp
// Implementer une demultiplexeur simple a 1 entree + 1 entree de selection + 2 sorties.
// Lors que l'entree de selection select_a est false, la premiere valeur booleen est egale
// a l'entree input. Sinon la seconde valeur booleen est egale a l'entree input.
// Une sortie non active est conservee a false.

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
    assert(demultiplexer_1_to_2(false, false, false), ...);
    ...
}
```

Exercices supplementaires : demultiplexeur 1-to-4. https://www.electronics-tutorials.ws/combination/comb_3.html


### L'encodeur prioritaire

https://en.wikipedia.org/wiki/Priority_encoder
https://www.electronics-tutorials.ws/combination/comb_4.html

plusieurs entree, prendre la plus prioritaire. Ie la sortie = indique quelle est l'entree le plus prioritaire active (= true).

```cpp
// ordre de priorite : 0 (plus basse priorite) -> 3 (plus haute priorite)

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
    assert(priority_decoder_4_to_2(false, false, false, false), {false, false, false});
    ...
}
```

Exercices supplementaires : decodeur prioritaire 8 to 3, keybord encodeur, priority encoder navigation, interupt request

### Le decodeur binaire

### Le decodeur d'affichage

afficheur 7-segments LEDS

Exercices : BCD to 7-segments


### Le controleur d'affichage

Meme principe, mais affichage sur une bitmap (une grille 2D de pixels sur un ecran). Exemple mc6845ou 6847

http://www.primrosebank.net/computers/mtx/techlib/mtx/6845/fdx_80col.htm

En realite, plus complexe, puisque le but est d'afficher sur ecran cathodique, donc d'envoyer les pixels
sequentiellement. http://bitsavers.trailing-edge.com/components/motorola/_dataSheets/6845.pdf
Non propose en exo, parce que n'apporte rien de plus en termes d'apprentissage et trop complexe. 
Mais tu es libre de le faire si ca t'amuse.

Ne pas utiliser une table pour implementer cela dans un premier temps. Puis meme exo avec table.

```cpp
std::bitset<64> display_controler(std::bitset<8> input)
{
    const uint8_t i = binary_decoder(input);
    switch(i)
    {
    case 0: return { false, false, false, ... };
    ...
    }
}
```

```cpp

namespace {
    uint64_t display_data[256] {
        0b00000100010010000100010000001000000011100000, // A
        0b00000100010010000100010000001000000011100000, // A
        ...
    }
}

uint64_t display_controler(uint8_t input)
{
    return display_data[i];
}
```


### L'additionneur binaire

Rappel sur la representation binaire des nombres entiers : https://www.electronics-tutorials.ws/binary/bin_1.html
Principe : https://www.electronics-tutorials.ws/combination/comb_7.html

Exercices supplementaires : additionneur 4 bits, 8 bits, 16, 32 et 64.

### Le comparateur logique

Princiape : https://www.electronics-tutorials.ws/combination/comb_8.html

1 bit

Exercices supplementaires : 4 bits, 8 bits.

### Le soustracteur binaire

https://www.electronics-tutorials.ws/combination/binary-subtractor.html

1 bit, puis n-bits.

### Bus Transceiver
### Transmission Gate



## Bus de donnees = plusieurs booleens. Utilisation de std::bitset ou uint64_t. Permet de bosser les boucles.

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



## Composants avec registre : implemente par une classe (etat interne = variable membre)

circuit logique sequentel : https://www.electronics-tutorials.ws/sequential/seq_1.html





## clock, ROM, demarrage de l'ordinateur

algo simple : instruction pointer contient addresse de l'instruction a lire, lecture de l'instruction, execution, incrementation de IP, refaire

instruciton simple :
- lire et ecrire en memoire
- saut
- condition
- UAL
