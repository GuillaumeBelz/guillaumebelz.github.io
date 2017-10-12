
# La programmation impérative

> Mise a jour : 12 octobre 2017
>
> Retourner au sommaire : [Sommaire](../index.md)
>
> Chapitre précédent
>
> Chapitre suivant

## Les paradigmes de programmation

Un paradigme de programmation est une façon spécifique de concevoir les solutions à une problématique. Il existe 
de nombreux paradigmes de programmation. L'une des spécificités du C++ est qu'il autorise l'utilisation de 
plusieurs paradigmes en même temps.

Pour faciliter l'apprentissage du C++, ce cours se décompose en trois parties, chaque partie
correspondant à un paradigme. Ce découpage suit un decoupage historique du C++, mais vous allez
voir au cours de votre apprentissage que ce découpage n'est pas très stricte et que les
différents paradigmes se mélangent.

Les trois paradigmes sont (dans l'ordre présenté dans ce cours) :

- la programmation imprérative, qui consiste à décomposer un programme en un suite d'instructions ;
- la programmation objet, qui consiste à décomposer une programme en un ensemble de composants qui communiquent entre eux ;
- la programmation générique, qui consiste à écrire du code qui s'adapte aux types de données qui sont manipulées.

## La programmation impérative

La [programmation impérative](https://fr.wikipedia.org/wiki/Programmation_imp%C3%A9rative) décrit un programme comme 
une suite d'instructions, qui doivent être suivies une par une, dans l'ordre. C'est exactement ce que vous faites lorsque
vous suivez une recette de cuisine par exemple :

- instruction 1 : cassez trois oeufs ;
- instruction 2 : pesez 300 grammes de farine ;
- instruction 3 : ajoutez un verre de lait ;
- etc.

Dans le cas d'un langage de programmation, les instructions sont très variables. Cela peut être :

- des calculs numériques (addition, soustraction, multiplication, etc.) ;
- afficher une fenêtre graphique à l'écran ;
- lire un fichier sur un disque dur ;
- envoyer une page HTML sur internet ;
- etc.

Les instructions que vous pouvez utiliser sont fournies par le langage proprement-dit ou par d'autres
développeurs (sous forme de bibliothèque logicielle partageable).

En pratique, vous utiliserez des paradigmes dérivés de la programmation impérative :

- [programmation procédurale](https://fr.wikipedia.org/wiki/Programmation_proc%C3%A9durale) ;
- [programmation structurée](https://fr.wikipedia.org/wiki/Programmation_structur%C3%A9e).

En programmation procédurale, une **procédure** est un ensemble d'instructions qui sont regroupées ensemble pour 
former une nouvelle instruction, cette nouvelle instruction pourra être ensuite réutilisée plusieurs fois.

En programmation structurée, les **structures de contrôle** sont des instructions spéciales qui modifient l'ordre 
d'exécution des instructions. Il en existe deux sortes : les *boucles*, qui permettent de répéter plusieurs fois
une série d'instructions, et les *conditions*, qui permettent de choisir entre plusieurs instructions.

Tous ces approches sont utilisables en C++ et seront détaillées dans la suite de ce cours.

## Lire le code d'un programme

Pour comprendre un code, vous devez respecter la règle simple précédante :

> **vous devez lire les instructions une par une, dans l'ordre.**

Prenez par exemple le *pseudo-code* qui suit. (Un pseudo-code est une code qui est écrit dans le langage courant, pas
dans un langage de programation).

```
x = 2
multiplier x par 3
soustraire 2 à x
afficher x
```

Ce pseudo-code contient quatre instructions différentes. La première instruction indique que `x` vaut 2, la deuxième
instruction indique qu'il faut multiplier la valeur de `x` par 3, donc `x` vaut maintenant 6.La troisième instruction 
indique qu'il faut soustraire 2 à `x`, donc `x` vaut maintenant 4. La dernière instruction indique qu'il faut 
afficher la valeur de `x`, donc cela affiche la valeur 4.

Lorsque vous lisez un code complexe, n'hésitez surtout pas à prendre un crayon et une feuille de papier et à écrire
les étapes que vous suivez, les valeurs et les calculs. Vous entendrez parfois parler "d'exécuter un programme ou
un algorithme sur papier" quand vous faites cela. C'est particulierement important quand vous étudierez l'algorithmique.
