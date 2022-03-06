
# Tutoriel d'introduction sur Qt 6 (en cours de rédaction)

> [Revenir à la page d'accueil](../README.md)

## Prérequis

Ce cours est destiné à des développeurs qui ont les bases en C++. Je vous conseille d'avoir lu par exemple :
- [Tour of C++, de Bjarne Stroustrup](https://www.amazon.fr/Tour-C-Bjarne-Stroustrup/dp/0134997832)
- ou [Le cours de C++ de Zeste de Savoir](https://zestedesavoir.com/tutoriels/822/la-programmation-en-c-moderne/)

## Vue d'ensemble de Qt 6

Qt est un ensemble d'outils (framework) qui facilite le développement d'applications en C++. Le but de ce tutoriel est
de donner les bases pour concevoir une application avec Qt (graphique ou non), de savoir utiliser l'éditeur Qt Creator,
et de déployer une application sur différentes plateformes (desktop et mobile).

Qt est organisé sous forme de modules, chacun fournissant un ensemble de fonctionnalités. Les principaux modules qui
seront vu dans ce tutoriel sont les suivants.

`QtCore` est le module de base de Qt, qui propose toutes les fonctionnalités utilisées par tous les autres modules. 
Ce module est indispensable dans n'importe quelle application qui utilise Qt.

`QtGui` est le module graphique de base, qui encapsule les bibliothèques graphiques (OpenGL, DirectX, Metal, Vulkan, etc). Ce
module est utilisé par deux autres modules graphiques : `QtQuick` qui utilise le QML et le JavaScript pour concevoir des interfaces
graphiques et sera détaillé dans ce tutoriel, et `QtWidgets` qui ne sera pas détaillé.

La liste complète des modules est détaillée dans le lien suivant : [All Modules](https://doc.qt.io/qt-6/qtmodules.html).

Ce tutoriel est découpé de la façon suivante :

- [L'installation de Qt 6](installation/README.md), pour installer tout ce qui est nécessaire pour utiliser Qt.
- [Introduction sur l'éditeur Qt Creator](qtcreator/README.md), qui sera utilisé pendant tout ce tutoriel pour créer, compiler et exécuter des projets Qt.
- [Introduction sur le QML et QtQuick](qml/README.md), qui sont utilisés pour créer des applications avec une interface graphique.
- [L'utilisation de Qt en C++](cpp/README.md), pour aller plus loin avec le C++ et Qt.
- [Un tour d'horizon de plusieurs modules importants de Qt](modules/README.md), pour utiliser les fonctionnalités réseaux, fichiers, base de données, etc.
- [Quelques idées de projets](projets/README.md), pour vous entraîner et aller plus loin.

Si vous avez des questions sur Qt, n'hésitez pas à les poser sur le [discord Nan](https://discordapp.com/invite/zcWp9sC) ou sur
[le forum d'OpenClassrooms](https://openclassrooms.com/forum/categorie/langage-c-1).

Amusez-vous bien dans votre exploration de Qt !

----------------------------------------------------------
----------------------------------------------------------

# Allez plus loin ?

## Qt Creator

Tests, debug, deployement, cross plateformes

## Composants
 
Dialogues

Layouts, anchors

aspect, material

(animation, views, states)

internationalisation

(3d)

(charts)

touch screen, events

drag and drop

