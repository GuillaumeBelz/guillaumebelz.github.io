
# Apprendre le C++ en utilisant les IA de modèle de langage (ChatGPT, Bard, etc)

Une question qui revient de régulièrement ces derniers est de savoir si on peut apprendre en utilisant les modéles de langages, du type
[chatGPT](https://fr.wikipedia.org/wiki/ChatGPT) ou [Bard](https://fr.wikipedia.org/wiki/Bard_(chatbot)). Dans le cas qui va nous intéresser
ici, la programmation en C++.

Pour rappel, un [modèle de langage](https://fr.wikipedia.org/wiki/Mod%C3%A8le_de_langage) est une forme d'intelligence artificielle 
(plus précisement du [traitement automatique du langage naturel](https://fr.wikipedia.org/wiki/Traitement_automatique_du_langage_naturel))
qui cherche a prédire la suite de mots la plus probable, à partir d'une conversation. On parle de [chatbot ou d'agent conversationnel](https://fr.wikipedia.org/wiki/Chatbot).

L'idée est de discuter avec ces chatbot pour leur demander d'expliquer les concepts qu'on veut apprendre, proposer des exercices, des solutions
à ces exercices, etc. L'utiliser en quelque sorte comme un professioneur particulier, expert dans tous les domaines.

Je ne vais pas aller plus dans les détails de ce type d'outil, il existe pleins de ressources pour cela. Je vous conseille en particulier
les vidéos de [MrPhi sur le sujet](https://www.youtube.com/@MonsieurPhi/videos).

Pour aider les débutants a mieux utiliser les chatbots pour apprendre le C++, je vais demander a un chatbot (j'ai utilisé Bard, mais le principe
est le même avec chatGPT) de générer des exercices pour le cours de C++ de Zeste de Savoir (le cours en version beta, que vous trouverez 
[ici](https://zestedesavoir.com/contenus/beta/822/la-programmation-en-c-moderne/)) et je vais commenter les solutions proposées, de façon à expliquer les
bonnes pratiques du C++ moderne et vous donner des mots-clés permettant d'améliorer votre apprentissage avec des chatbots.

## Apprendre le C++ avec un chatbot ?

Pour commencer, je vais vous montrer un problème général des chatbot pour l'apprentissage (pas uniquement le C++ et la programmation). Demandons
a Bard de donner un cours de C++ pour débutant :

**Écris un plan détaillé d'un cours d'introduction à la syntaxe de base du C++**

```cpp
(...)
const int PI = 3.141592653589793; // Déclaration d'une constante
(...)
int age = 18;
int* pointeur = &age; // Initialisation du pointeur pointeur avec l'adresse de la variable age
(...)
char chaine[10] = "Hello"; // Déclaration d'une chaîne de caractères de style C
```

A mon sens, le problème dans ce type d'approche, c'est les mêmes que pour l'auto-apprentissage en général : comment un débutant dans un domaine
peut-il faire le tri dans les informations qu'il reçoit ?

En informatique, il existe souvent plusieurs façon de faire quelque chose et cela demande
souvent un niveau d'expertise avancé pour savoir faire le tri entre les différentes pratiques. Et comme il n'est pas possible d'être expert en tout,
et donc que chaque développeur puisse faire le tri lui même entre les pratiques, on utilise souvent des "guides de bonnes pratiques. C'est à dire
une ensemble de pratiques qui sont validées et recommandées par les communautés d'experts. En C++ par exemple, il existe les 
[C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines). 

En plus, il faut ajouter un problème plus spécifique au C++ (et plus généralement aux langages de programmation anciens) : les pratiques ont
évoluées au cours du temps. Les raisons de ces changements sont multiples, mais pour simplifier, c'est simplement parce que l'univers de l'informatique
a évolué : les ordinateurs modernes et les applications logicielles n'ont rien à voir avec ce qui existait il y a 20 ans. La structure des équipes
de développement, les exigences de qualité logiciel, la complexité des programmes, tout a changé radicalement.

Le problème est que l'on continue de trouver sur internet des codes et pratiques d'une autre époque ou spécifiques d'un domaine particulier.
Pour le débutant qui apprend, il est impossible de faire le tri entre toutes les informations qu'il reçoit, savoir si c'est des pratiques obsolètes
ou dangereuse (en termes de qualité logicielle) ou non recommandées dans le monde professionel.

## La programmation impérative en C++

**Écris des exercices et les solutions correspondantes en C++ pour apprendre a écrire des programmes simples du type hello world**

> Exercice 1 : Écrivez un programme qui affiche le message "Hello World" sur la console.

```cpp
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}
```

code simple, mais deja des points a noter. Quel norme de C++ ? Derniere verison, on ecrirait un code comme :

```cpp
import std;

int main() {
  println("Hello World!");
  return 0;
}
```

Accessoirement, pas de retour a la ligne (utliser `std::endl` ou `\n`). Et le `return 0` a expliquer (ou utiliser `SUCCESS`)

## Les littérals et les variables

Exercices sur le chapitre [Une super mémoire](https://zestedesavoir.com/contenus/beta/822/la-programmation-en-c-moderne/le-debut-du-voyage/une-super-memoire/)

**Écris des exercices en C++ pour apprendre a manipuler différents types de littérals**

> Exercice 1 : Écrivez un programme qui affiche la valeur de chaque littéral suivant :
> - int : 10
> - float : 3.14
> - double : 6.28
> - char : A
> - string : "Hello World!"

```cpp
#include <iostream>

int main() {
  std::cout << "int : " << 10 << std::endl;
  std::cout << "float : " << 3.14 << std::endl;
  std::cout << "double : " << 6.28 << std::endl;
  std::cout << "char : " << 'A' << std::endl;
  std::cout << "string : " << "Hello World!" << std::endl;
  return 0;
}
```

Une autre critique generale sur les chatbots, ils ne comprennent pas ce qu'ils expliquent. Ici, il y a une difference en C++ entre le type `float` et le type
`double`, mais cela n'apparait pas dans le code. En toute rigueur, `3.14` devrait être écrit `3.14f` pour que cet littéral soit de type `float` et pas de type
`double`.

Ce genre de détail n'est generalement pas un problème dans un vrai code, mais il est important qu'un débutant sache faire la distinction entre les types et
qu'il apprenne la rigueur. Un developpeur expériementé pourra faire ce genre de critique, que ne fera pas un cahatbot.

Pareil pour la chaine de caractères. En C++, quand on parle de `string`, on fait generalement reference au type `std::string` de la bibliothèque standard.
En toute rigueur, `"Hello World!"` est du type `const char [13]`. Pour avoir une chaine de type `std::string`, il faudrait écrire `"Hello World!"s`.

**Écris des exercices et les solutions à ces exercices, pour pratiquer les variables en C++23**

> Exercice 2 : Écrivez un programme C++ qui déclare une variable flottante, temperature, et l'initialise à 23.5 degrés Celsius. Imprimez la valeur de la variable
> temperature sur la console en degrés Fahrenheit.

```cpp
#include <iostream>

int main() {
  float temperature = 23.5;

  // Conversion de degrés Celsius en degrés Fahrenheit
  float fahrenheit = (temperature * 9 / 5) + 32;

  std::cout << "La température est de : " << fahrenheit << " degrés Fahrenheit" << std::endl;

  return 0;
}
```

Un problème classique : l'utilisation des constantes. Dans ce code, `temperature` et `fahrenheit` sont des constantes et devraient être `constexpr`. Le problème (déjà signalé) 
est que l'on trouve sur internet beaucoup de code obsolète (en particluer en C, dans lequel `const` et `constexpr` n'existent pas) et que les chatbots ont appris
à partir de ces codes.

Un problème plus général est le choix des exemples et exerices pour pratiquer une syntaxe. Il arrive très (trop) souvent que les exemples choisis ne servent qu'à
présenter les sytnaxes, mais vous ne trouverez jamais ces sytnaxes utilisés dans ces contextes dans un vrai code. Les apprenants peuvent en arriver à se demander
"a quoi servent ces syntaxes, ça sert à rien !". Mais c'est juste que le contexte d'utilisation n'est pas correct.

**Écris des exercices et les solutions à ces exercices, pour pratiquer les constantes en C++23**

> Exercice 1 : Écrivez un programme C++ qui déclare une constante entière, PI, et la initialise à la valeur de Pi. Imprimez la valeur de la constante PI sur la console.

```cpp
#include <iostream>

constexpr double PI = 3.141592653589793;

int main() {
  std::cout << "PI = " << PI << std::endl;

  return 0;
}
```

C'est de l'ordre du détail, mais dans le passé, il était classique de déclarer les constantes avec `#define` et les noms étaient écrit en majuscules. De nos jours, on
va préférer l'utilisation de `constexpr` et ne plus utiliser les majuscules. Je vous conseille de regarder les "coding guidelines/styles/conventions/etc" de projets
majeurs. Par exemple pour [boost](https://www.boost.org/doc/libs/1_31_0/libs/spirit/doc/style_guide.html), [Qt](https://wiki.qt.io/Qt_Coding_Style),
[Google](https://google.github.io/styleguide/cppguide.html).

> Exercice 2 : Écrivez un programme C++ qui déclare une constante chaîne, NOM, et la initialise au nom de l'utilisateur. Imprimez la valeur de la constante NOM sur la console.

```cpp
#include <iostream>

constexpr std::string NOM = "John Doe";

int main() {
  std::cout << "Bonjour, " << NOM << " !" << std::endl;

  return 0;
}
```

Gros problème dans ce code, il n'est pas valide. `std::string` ne peut pas être `constexpr` dans ce contexte (c'est possible dans d'autres contextes). Je ne sais pas
pourquoi ce chatbot donne cette syntaxe, mais il est possible qu'il a "appris" cette sytnaxe dans des discussions en ligne, où des développeurs demandaient si cette
syntaxe est possible (par exemple sur [StackOverflow](https://stackoverflow.com/questions/70571655/how-does-constexpr-stdstring-in-c20-work)). Comme le chatbot
ne comprend pas ce qu'il lit, il ne comprend pas que c'est des questions et ne comprend pas que les réponses sont négatives.

Pour créer une chaine de caractères à la compilation, on peut utiliser `constexpr` avec une littérale `const char[]` ou avec une `std::string_view`.
