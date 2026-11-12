
# Tutoriel d'introduction à Qt 6

> [Revenir à la page d'accueil](../README.md)

## Prérequis

Ce cours est destiné à des développeurs qui ont les bases en C++. Je vous conseille d'avoir lu par exemple :
- [Tour of C++, de Bjarne Stroustrup](https://www.amazon.fr/Tour-C-Bjarne-Stroustrup/dp/0134997832)
- ou [Le cours de C++ de Zeste de Savoir](https://zestedesavoir.com/tutoriels/822/la-programmation-en-c-moderne/)

## Vue d'ensemble de Qt

Qt est un ensemble d'outils (framework) qui facilite le développement d'applications en C++. Le but de ce tutoriel est
de donner les bases pour concevoir une application avec Qt (graphique ou non), de savoir utiliser l'éditeur Qt Creator,
et de déployer une application sur différentes plateformes (desktop et mobile).

Qt est organisé en modules. Les principaux modules de ce tutoriel sont les suivants.

`QtCore` est le module de base de Qt, qui propose toutes les fonctionnalités utilisées par tous les autres modules. 
Ce module est indispensable dans n'importe quelle application qui utilise Qt.

`QtGui` fournit les fonctions graphiques de bas niveau. `Qt Quick` et `Qt Widgets` s'appuient sur les fonctionnalités graphiques
de Qt pour proposer deux approches d'interface différentes : QML déclaratif avec Qt Quick, ou widgets C++ traditionnels.

La liste complète des modules est détaillée dans le lien suivant : [All Modules](https://doc.qt.io/qt-6/qtmodules.html).

Qt 6.12 est la version LTS courante au moment de la mise à jour de ce tutoriel (novembre 2026). Les exemples privilégient
les API communes à Qt 6. Vérifiez toujours les plateformes, modules et compilateurs pris en charge dans la documentation
de la version que vous installez : [versions et support](https://www.qt.io/development/qt-framework/qt-lts).

Ce tutoriel est découpé de la façon suivante :

- [Installer Qt 6](installation/README.md), Qt Creator et une chaîne de compilation adaptée.
- [Prendre en main Qt Creator](qtcreator/README.md) et créer un projet CMake.
- [Découvrir QML et Qt Quick](qml/README.md) pour concevoir des interfaces.
- [Relier QML et C++](cpp/README.md) et structurer une application.
- [Explorer les modules Qt](modules/README.md) et approfondir certaines fonctionnalités.
- [Trouver des idées de projets](projets/README.md) pour pratiquer.

Les chapitres Qt Creator et QML peuvent être abordés sans expérience approfondie du C++. Pour développer une application complète,
des bases en C++ restent utiles.

Pour poser une question, consultez le [forum Qt](https://forum.qt.io/) ou les communautés francophones de programmation.

Amusez-vous bien dans votre exploration de Qt !

Mise à jour : 11 novembre 2026. Voir aussi [le sommaire](sommaire.md) et [les pistes pour aller plus loin](plus-loin.md).

