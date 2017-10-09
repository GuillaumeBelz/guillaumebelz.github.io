# Les paradigmes de programmation

Un paradigme de programmation est une façon specifique d'écrire un programme. Il existe de nombreux
paradigmes de programmation. L'une des specificités du C++ est qu'il autorise l'utilisation de 
plusieurs paradigmes en même temps.

Pour faciliter l'apprentissage du C++, ce cours se décompose en trois parties, chaque partie
correspondant à un paradigme. Ce découpage suit un decoupage historique du C++, mais vous allez
voir au cours de votre apprentissage que ce découpage n'est pas très stricte et que les
différents paradigmes se mélangent.

Les trois paradigmes sont :

- la programmation imprérative, qui consiste à décomposer un programme en un suite d'instructions ;
- la programmation objet, qui consiste à décomposer une programme en un ensemble de composants qui communiquent entre eux ;
- la programmation générique, qui consiste à écrire du code qui s'adapte aux types de données qui sont manipulées.

## Programmation impérative

Il existe plusieurs façons de concevoir un programme informatique, appelés
[[https://fr.wikipedia.org/wiki/Paradigme_(programmation)|paradigme de programmation]]. Le C++ est un langage qui 
autorise l'utilisation de plusieurs paradigme, il est multi-paradigme. Il supporte en particulier la programmation 
impérative, que va être détaillé dans la suite, la [[https://fr.wikipedia.org/wiki/G%C3%A9n%C3%A9ricit%C3%A9|programmation générique]] 
et la [[https://fr.wikipedia.org/wiki/Programmation_orient%C3%A9e_objet|programmation objet]], qui seront vues plus tard 
dans ce cours, la [[https://fr.wikipedia.org/wiki/Programmation_fonctionnelle|programmation fonctionnelle]], qui sera 
simplement citée, etc.

La [[https://fr.wikipedia.org/wiki/Programmation_imp%C3%A9rative|programmation impérative]] décris un programme comme 
une suite d'instructions, qui modifie l'état du programme. Cette approche permet de suivre un programme pas-à-pas, 
depuis le début du programme (correspondant à la fonction ''main'' en C++) jusqu'à sa fin (lorsque la fonction ''main'' 
se termine en C++).

Les instructions sont exécutées une par une, dans l'ordre où elle apparaissent dans le code. Une instruction commence 
dès que la précédente se termine.

Vous pourrez également entendre parler de [[https://fr.wikipedia.org/wiki/Programmation_proc%C3%A9durale|programmation procédurale]] 
et de [[https://fr.wikipedia.org/wiki/Programmation_structur%C3%A9e|programmation structurée]], toutes deux appartenant 
au paradigme impératif. Dans la programmation procédurale, le programme est décomposé en "procédures" (en C++, on parle 
de "fonctions") qui sont des suites d'instructions. Dans la programmation structurée, le programme n'est pas linéaire, mais 
ajoute les concepts de boucles (une suite d'instruction qui est répétée) et de conditions (une suite d'instruction qui peut 
être exécutée ou non). Cela sera détaillé dans la suite de ce cours.

> Les ordinateurs modernes sont généralement capables d'exécuter plusieurs instructions en même temps, voire plusieurs 
> programme en même temps. Cela complique forcement la compréhension du déroulement d'un programme. Pour simplifier les
> explications, ce cours se base sur une situation parfaite et abstraite, dans laquelle les instructions sont exécutées 
> une par une.

Voyons sur un code simple comment suivre le déroulement d'un programme C++. Lorsque vous exécutez le programme suivant, 
que se passe-t-il ?

```cpp
#include <iostream>

int main() {
    std::cout << "ligne 1" << std::endl;
    std::cout << "ligne 2" << std::endl;
    std::cout << "ligne 3" << std::endl;
}
```

Pour commencer, le système lance le programme et appelle la fonction ''main''. Dans cette étape, il se passe beaucoup de 
choses, mais qui concernent le système (et qui sont relativement complexes). Cela sort du cadre de ce cours. Mais vous 
pouvez considérer que le programme commence au niveau de la ligne contenant le ''main''.

A cette étape, le programme n'a encore rien écrit dans la console (le système peut avoir écrit des choses, mais cela ne 
concerne pas le programme).

Une fois que le programme est lancé, la première instruction est exécutée. Cette première instruction est la première 
ligne contenant le ''std::cout'', ce qui produit l'affichage de texte dans la console. La console affiche donc à la fin 
de cette étape :

```
ligne 1
```

L'étape suivante est la seconde ligne contenant ''std::cout'' et la console affiche donc :

```
ligne 1
ligne 2
```

La troisième étape est la ligne contenant le dernier ''std::cout'' :

```
ligne 1
ligne 2
ligne 3
```

Pour terminer, le programme arrive à la fin de la fonction ''main'', correspondant à l'accolade fermante ''}''. 
Le programme se termine et le système reprend la main.

> Pour simplifier la lecture du code, chaque instruction est écrite sur une ligne, se terminant par un point-virgule '';''. 
> Mais si une ligne contient plusieurs instructions, séparées par des points-virgules, cela ne change pas le déroulement du 
> programme : chaque instruction est exécutée une par une. La présentation du code n'influence pas le déroulement du programme.

Pour suivre le déroulement d'un programme C++, vous avez deux garanties :

- chaque instruction est exécutée ;
- les instructions sont exécutées dans l'ordre.

Il n'est donc pas possible d'obtenir les résultats suivants dans la console :

```
ligne 1
ligne 3
```

ou

```
ligne 1
ligne 3
ligne 2
```

Le comportement d'un programme sera dont prédictible (sauf erreur de programmation) et constant.
