
# Premiers pas avec Qt 6

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

- Une introduction sur l'éditeur Qt Creator, qui sera utilisé pendant tout ce tutoriel, pour illustrer les explications.
- L'utilisation du QML et de QtQuick, qui sont utilisés pour créer des applications avec une interface graphique.
- L'utilisation de Qt dans du code C++, pour aller plus loin.
- Un tour d'horizon de plusieurs modules importants de Qt, pour utiliser les fonctionnalités réseaux, fichiers, base de données, etc.
- Quelques idées de projets, pour vous entraîner et aller plus loin.



## Premier pas avec Qt Creator

Lors de l'installation de Qt, vous avez vu dans le tutoriel [Tester l'installation de Qt](../installation/test.md) comment
créer un projet minimal et le lancer. Nous allons détailler dans un premier temps l'interface de Qt Creator.

premier pas, comprendre l'interface de QTC, creer et lancer des projets QML


Creer un projet dans github. Utiliser git dans QtCreator.



### Projets d'exemple

explorer les projets et les lancer. Etudier le code.

Tests, debug, deployement, cross plateformes

## Introduction au QML

Base du QML

Composants
 
Dialogues

Layouts, anchors

aspect, material

(animation, views, states)

internationalisation

(3d)

(charts)

touch screen, events

drag and drop

## Coder en C++

QObject, proprietes, invokables

signal et slots

(creer ses events, decouplage)

(modele view)

settings 

## Modules

multi threads

files, serialisation, JSON, XML, etc.

network

(sensor mobile)

(dessin, QPainter, OpenGL/Vulkan)

(multimedia)

(webengine, webassembly)

(database)

(plugins)


## Projets a realiser



