
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

Pour aider les débutants a mieux utiliser les chatbots pour apprendre le C++, je vais demander a un chatbot (j'ai utilisé Bard, mais le principe
est le même avec chatGPT) de générer des exercices pour le cours de C++ de Zeste de Savoir (le cours en version beta, que vous trouverez 
[ici](https://zestedesavoir.com/contenus/beta/822/la-programmation-en-c-moderne/)) et je vais commenter les solutions proposées, de façon à expliquer les
bonnes pratiques du C++ moderne et vous donner des mots-clés permettant d'améliorer votre apprentissage avec des chatbots.

## La programmation impérative en C++

> Écris des exercices et les solutions correspondantes en C++ pour apprendre a écrire des programmes simples du type hello world

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

> Écris des exercices en C++ pour apprendre a manipuler différents types de littérals

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
qu'il apprenne la rigueur. Un developpeur expériementé pourra faire ce genre de critiques, que ne fera pas un cahatbot.

Pareil pour la chaine de caractères. En C++, quand on parle de `string`, on fait generalement reference au type `std::string` de la bibliothèque standard.
En toute rigueur, `"Hello World!"` est du type `const char [13]`. Pour avoir une chaine de type `std::string`, il faudrait écrire `"Hello World!"s`.
