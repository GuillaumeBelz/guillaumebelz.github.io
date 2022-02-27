
# Tutoriel d'introduction sur Qt 6

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

Si vous avez des questions sur Qt, n'hésitez pas à les poser sur le [discord Nan](https://discordapp.com/invite/zcWp9sC) ou sur
[le forum d'OpenClassrooms](https://openclassrooms.com/forum/categorie/langage-c-1).

Amusez-vous bien dans votre exploration de Qt !

## Premier pas avec Qt Creator

Qt Creator est l'éditeur fournit dans Qt pour écrire du code, compiler et executé vos applications Qt. Cet outil est automatiquement
configuré lors de l'installation de Qt et peut donc être utilisé directement quand vous avez fini l'installation. C'est pour des 
raisons de simplicité que Qt Creator est utilisé dans ce tutoriel.

Cependant, cela ne veut pas dire que Qt Creator est l'outil qui vous conviendra le mieux. Vous pourrez être intéressé par d'autres
outils et vous êtes tout à fait libre de les utiliser. Mais pour suivre ce tutoriel et vos premiers pas avec Qt 6, je vous conseille
quand même de tester Qt Creator dans un premier temps. Quand vous connaîtrez mieux Qt, vous pourrez explorer d'autres outils par
vous même.

Dans cette premirère partie du tutoriel sur Qt Creator, nous allons voir :

- L'interface générale de Qt Creator.
- Comment créer, compiler et exécuter un projet par défaut.
- Explorer les projets d'exemple.

### L'interface de Qt Creator

### Créer un projet avec Qt Creator

Creer un projet dans github. Utiliser git dans QtCreator.

### Projets d'exemple

explorer les projets et les lancer. Etudier le code.

### Tests, debug, deployement, cross plateformes

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



