# C++, Qt, OpenGL, CUDA

Bonjour à tous

Les tutoriels sur internet sont une source d'information et d'auto-formation très intéressante. Cependant, il faut reconnaître qu'il est difficile de trouver des tutoriels de niveau correct, on doit souvent se contenter de tutoriels de qualité plus ou moins bonne, plus ou moins bien rédigés, plus ou moins exacts.

L'un des points que j'appréciais sur Developpez.com est le processus de validation en plusieurs étapes des articles. La vie d'un article commençait sur le forum privé de l'équipe de rédaction C++, l'auteur devait lancer une discussion pour avoir une relecture technique. Après validation et corrections, l'article passait ensuite en gabarisation pour mettre dans un format XML spécifique, utilisé pour générer les différentes versions (en ligne, hors ligne, PDF, ebook, etc). Pour terminer, l'article passait dans les mains des correcteurs, qui valident l'orthographe, la grammaire et parfois les tournures des phrases. Au final, 5 à 10 personnes contribuaient à chaque article, ce qui garantissait sa qualité.

Depuis que je rédige mes articles sur mon propre blog, je n'ai plus cette relecture technique et orthographique avant publication. Il me faut attendre les commentaires de lecteurs pour corriger d'éventuelles erreurs ou préciser certains points.

En revanche, il y a un défaut que je retrouve sur tous les sites : l'absence de mise à jour des tutoriels. Sur Developpez.com, quand je suis devenu responsable de la rubrique C++, il n'y avait plus de responsable C++ depuis plusieurs années. La majorité des tutoriels et la FAQ datent de plusieurs années (c'est encore le cas) et j'ai dû, à plusieurs reprises, déconseiller les cours de C++ de base aux débutants. La situation n'est pas mieux ailleurs, le tutoriel C++ débutant sur OpenClassRooms n'est pas à jour pour le C++ (C++11) et Qt (Qt 5).

Et je dois reconnaître que le problème se pose aussi pour mes propres tutoriels. Le tutoriel sur Qt Android, le tutoriel le plus consulté sur mon blog, n'est pas à jour pour Qt 5.4. Mon tutoriel sur le C++11 n'a pas été finalisé. C'est la raison pour laquelle je crée ce wiki : permettre à tous de corriger ou mettre à jour mes tutoriels. Et pour rappel, mes tutoriels sont tous (même mes anciens articles sur Developpez.com) sous licence Creative Common  BY-NC-SA. Je demande simplement de citer la source.

Même si je choisis les articles que je rédige en fonction de mes propres centres d'intérêt, je suis ouvert aux suggestions. Si vous le souhaitez, vous pouvez proposer des thèmes sur la page [Propositions de sujets d'article](http://guillaume.belz.free.fr/doku.php?id=Propositions de sujets d'article). Si vous souhaitez également que j'ajoute des fonctionnalités sur ce wiki (doluwiki), vous pouvez également le faire sur cette page.

# Cours de C++ moderne

Depuis quelques semaines, je me suis lancé dans un projet que j'envisage depuis des années : la rédaction d'un cours en C++ "moderne". Ce cours est encore en cours de rédaction, mais il y a une vingtaine de chapitres déjà écrit et le PDF fait 200 pages. Il faudra encore quelques mois pour avoir la version finale, il manque en particulier les exercices d'application.

* [Débuter en C++ moderne](cppbook/index.md)
* Tome 2 - C++ avancé, méta programmation et performances
* Tome 3 - Programmation multi-plateforme avec Qt 5
* Tome 4 - GPU computing
* Tome 5 - La 3D avec OpenGL

Si vous avez des questions ou des remarques, vous pouvez les poser directement sur le [forum du Site du Zéro](http://fr.openclassrooms.com/forum/sujet/nouveau-cours-c-moderne).

# Articles C++

Documentation de référence : [cppreference.com](http://en.cppreference.com/w/)

* [ECS](http://guillaume.belz.free.fr/doku.php?id=ECS)
* [design pattern C++14](http://guillaume.belz.free.fr/doku.php?id=design pattern C++14)
* [Pourquoi le RAII est fondamental en C++](http://guillaume.belz.free.fr/doku.php?id=Pourquoi le RAII est fondamental en C++)
* [Ça ne sert à rien de se prendre la tête avec les nouvelles normes du C++ !](http://guillaume.belz.free.fr/doku.php?id=Ça ne sert à rien de se prendre la tête avec les nouvelles normes du C++ !)
* [Pourquoi le C++ est un langage plus adapté pour les débutants que le C](http://guillaume.belz.free.fr/doku.php?id=Pourquoi le C++ est un langage plus adapté pour les débutants que le C)

## Le C++11

* [Nouvelles fonctionnalités du C++11](http://guillaume.belz.free.fr/doku.php?id=Nouvelles fonctionnalités du C++11)
* [Le design des bibliothèques en C++11](http://guillaume.belz.free.fr/doku.php?id=Le design des bibliothèques en C++11)

### Les rvalue reference et la move semantic

- [Problématiques rencontrées dans le C++03](http://guillaume.belz.free.fr/doku.php?id=Rvalue reference et move semantic - Problématiques rencontrées dans le C++03)
- [Quelques définitions](http://guillaume.belz.free.fr/doku.php?id=Rvalue reference et move semantic - Quelques définitions)
- [Les nouveaux concepts du C++11](http://guillaume.belz.free.fr/doku.php?id=Rvalue reference et move semantic - Les nouveaux concepts du C++11)
- [Les rvalue references](http://guillaume.belz.free.fr/doku.php?id=Rvalue reference et move semantic - Les rvalue references)
- [Analyse de quelques implémentations](http://guillaume.belz.free.fr/doku.php?id=Rvalue reference et move semantic - Analyse de quelques implémentations)
- [Ce que cela change pour la STL](http://guillaume.belz.free.fr/doku.php?id=Rvalue reference et move semantic - Ce que cela change pour la STL)

## Le C++ 14

* [Le C++14](http://zestedesavoir.com/articles/71/le-c14-est-arrive/)
* [Les derniers jours du C++11](http://guillaume.belz.free.fr/doku.php?id=Les derniers jours du C++11)
* [Généricité, concepts et C++14](http://guillaume.belz.free.fr/doku.php?id=Généricité, concepts et C++14)

## Le C++ 1z

- [C++1y - Les tableaux](http://guillaume.belz.free.fr/doku.php?id=C++1y - Les tableaux)
- [C++1y – File System](http://guillaume.belz.free.fr/doku.php?id=C++1y – File System)
- [C++1y - Concepts Lite](http://guillaume.belz.free.fr/doku.php?id=C++1y - Concepts Lite) (en cours de rédaction)
- [C++1y - Parallelism & Concurrency](http://guillaume.belz.free.fr/doku.php?id=C++1y - Parallelism & Concurrency)
- [C++1y - Programming Langage C++](http://guillaume.belz.free.fr/doku.php?id=C++1y - Programming Langage C++)
- [C++1y - Library Fundamentals](http://guillaume.belz.free.fr/doku.php?id=C++1y - Library Fundamentals)

## Généralités

* [Les accesseurs et les détails d'implémentation](http://guillaume.belz.free.fr/doku.php?id=Les accesseurs et les détails d'implémentation)
* [Commencer facilement avec Boost Graph](http://guillaume.belz.free.fr/doku.php?id=Commencer facilement avec Boost Graph)
* [Pile, Tas, portée et durée de vie](http://guillaume.belz.free.fr/doku.php?id=Pile, Tas, portée et durée de vie)

* [communication inter-classes](http://guillaume.belz.free.fr/doku.php?id=communication inter-classes) (en cours de rédaction)

# Articles Qt

Documentation de référence : [qt-project.org](http://doc-snapshot.qt-project.org/)

* [install Qt](http://guillaume.belz.free.fr/doku.php?id=install Qt)
* [Les signaux et slots dans Qt5](http://guillaume.belz.free.fr/doku.php?id=Les signaux et slots dans Qt5)
* [Déployer une application Qt](http://guillaume.belz.free.fr/doku.php?id=Déployer une application Qt)
* [Les modules de Qt 5](http://guillaume.belz.free.fr/doku.php?id=Les modules de Qt 5)
* [Introduction au module QtTest](http://guillaume.belz.free.fr/doku.php?id=Introduction au module QtTest)
* [QtScript - utilisation des prototypes](http://guillaume.belz.free.fr/doku.php?id=QtScript - utilisation des prototypes)

## Exemple de code Qt : création d'un colorpicker

- [Enoncé de l’exercice](http://guillaume.belz.free.fr/doku.php?id=Un ColorPicker avec Qt – Enoncé de l’exercice)
- [Version Qt](http://guillaume.belz.free.fr/doku.php?id=Un ColorPicker avec Qt – Version Qt)
- [Version QML](http://guillaume.belz.free.fr/doku.php?id=Un ColorPicker avec Qt – Version QML)
- [Benchmark et optimisations](http://guillaume.belz.free.fr/doku.php?id=Un ColorPicker avec Qt – Benchmark et optimisations)

## Qt Android

* [Développez en natif pour Android avec Qt](http://guillaume.belz.free.fr/doku.php?id=Développez en natif pour Android avec Qt)
* [Qt Quick Controls sur Android](http://guillaume.belz.free.fr/doku.php?id=Qt Quick Controls sur Android)
* [Qt sur OUYA](http://guillaume.belz.free.fr/doku.php?id=Qt sur OUYA)

## Utiliser une manette de jeux avec Qt

- [Implémentation Windows (première partie)](http://guillaume.belz.free.fr/doku.php?id=Qt Gamepad – Implémentation Windows (première partie))
- [Implémentation Windows (deuxième partie)](http://guillaume.belz.free.fr/doku.php?id=Qt Gamepad – Implémentation Windows (deuxième partie))
- [Implémentation Windows (troisième partie)](http://guillaume.belz.free.fr/doku.php?id=Qt Gamepad – Implémentation Windows (troisième partie))
- [Utilisation du gamepad en QML](http://guillaume.belz.free.fr/doku.php?id=Qt Gamepad – Utilisation du gamepad en QML)

## Qt Quick et QML

* [Qt Quick Controls dans Qt 5.1](http://guillaume.belz.free.fr/doku.php?id=Qt Quick Controls dans Qt 5.1)


# Articles OpenGL

##  Techniques divers

* [Illumination globale et partitionnement de l’espace](http://guillaume.belz.free.fr/doku.php?id=Illumination globale et partitionnement de l’espace)
* [Déboguer avec OpenGL 4](http://guillaume.belz.free.fr/doku.php?id=Déboguer avec OpenGL 4)
* [Introduction aux geometry shaders](http://guillaume.belz.free.fr/doku.php?id=Introduction aux geometry shaders)
* [La technique d'instanciation](http://guillaume.belz.free.fr/doku.php?id=La technique d'instanciation)
* [Les queries objects](http://guillaume.belz.free.fr/doku.php?id=Les queries objects)

## Utiliser OpenGL avec Qt 5.4

- [Qt OpenGL - Introduction](http://guillaume.belz.free.fr/doku.php?id=Qt OpenGL - Introduction)
- [OpenGL dans Qt5](http://guillaume.belz.free.fr/doku.php?id=OpenGL dans Qt5)
- [Qt OpenGL - Générer un terrain](http://guillaume.belz.free.fr/doku.php?id=Qt OpenGL - Générer un terrain)
- [Qt OpenGL - Envoyer des données au processeur graphique](http://guillaume.belz.free.fr/doku.php?id=Qt OpenGL - Envoyer des données au processeur graphique)
- [Qt OpenGL - Utilisation du pipeline programmable](http://guillaume.belz.free.fr/doku.php?id=Qt OpenGL - Utilisation du pipeline programmable)
- [Qt OpenGL - Ajouter des lumières et des textures](http://guillaume.belz.free.fr/doku.php?id=Qt OpenGL - Ajouter des lumières et des textures)
- [Qt OpenGL - Réaliser un rendu offscreen](http://guillaume.belz.free.fr/doku.php?id=Qt OpenGL - Réaliser un rendu offscreen)
- [Qt OpenGL - Overpainting](http://guillaume.belz.free.fr/doku.php?id=Qt OpenGL - Overpainting)
- [Qt OpenGL - Gestion des extensions](http://guillaume.belz.free.fr/doku.php?id=Qt OpenGL - Gestion des extensions)
- [Qt OpenGL - Annexes](http://guillaume.belz.free.fr/doku.php?id=Qt OpenGL - Annexes)

# Tutoriels vidéo

* [Introduction à Qt](https://www.youtube.com/watch?v=m6dyyBSanlA)
* [Installation et premier pas avec Qt 5.2 sur Windows](https://www.youtube.com/watch?v=7AlH4bPbBsE)
* [Savoir utiliser la documentation de Qt 5.2](https://www.youtube.com/watch?v=qKWtfDNfbzA)

## Le C++ User Group France

* [Rencontre C++ Francophone - Introduction](https://www.youtube.com/watch?v=e4Ajlq_hGA0)
* [Du Polymorphisme dynamique au polymorphisme statique : abstraction sans perte de performances](https://www.youtube.com/watch?v=2R6zsH-XPk0)
* [Ajouter une autre dimension à la qualité des logiciels](https://www.youtube.com/watch?v=r7P6O5TtTEQ)

## Les éditions D-BookeR

* [Installation de Qt 5.0 sur Ubuntu via le dépôt Synaptic](https://www.youtube.com/watch?v=rYU4ONnyChc)
* [Installation de Qt 5.0 sur Ubuntu](https://www.youtube.com/watch?v=0a6DabaPtKk)
* [Installation de Qt 5.0 sur Windows avec Visual Studio](https://www.youtube.com/watch?v=6X3VtWNHADo)
* [Installation Qt 5.0 sur Windows avec MinGW](https://www.youtube.com/watch?v=SrUJHs4zuKM)

# Sélection de livres

* [Sélection de livres](http://guillaume.belz.free.fr/doku.php?id=Sélection de livres)

# Mes autres sites

* [Blog](http://guillaumebelz.wordpress.com/)
* [YouTube](https://www.youtube.com/user/GuillaumeBelz)
* [Google+](https://plus.google.com/u/0/103405009836652683671/posts)
* [GitHub](https://github.com/GuillaumeBelz)
* [Les éditions D-BookeR](http://www.d-booker.fr/)
* [StackOverflow](http://stackoverflow.com/users/2801661/guillaume-belz)
