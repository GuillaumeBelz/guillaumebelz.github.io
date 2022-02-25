# Installer un compilateur C++

> [Revenir à la page "Installation et premiers pas avec Qt 6.2"](README.md)
> 
> Dernière mise à jour : 24 février 2022.

Qt est une bibliotheque C++, ce qui signifie que vous devez installer les outils de développement nécessaire pour
compiler un programme C++. L'installation de ces outils depend du systeme et parfois plusieurs outils sont possibles.
La procedure d'installation des principaux outils est detaillée dans ce chapitre.

Lors de l'installation de Qt, celui-ci détecte les outils de compilation et configure automatiquement
l'éditeur Qt Creator. Pour cette raison, il est préférable d'installer ces outils avant Qt. Mais si vous avez fait 
autrement, pas d'inquietude, vous pouvez configurer les kits n'importe quand dans Qt Creator. La configuration de Qt Creator
est détaillée dans le chapitre [Configurer Qt Creator](config.md).

Le minimum à installer pour programmer en C++ est un compilateur C++. Un compilateur C++ est un outil 
qui prend du code C++ dans des fichiers textes et produit des binaires. En complément du compilateur,
il est intéressant d'installer d'autres outils, en particulier un débogueur et un editeur. Un débogueur
est un outil qui aide à trouver et corriger les erreurs dans le code. Un editeur permet 
d'écrire du code et propose differents outils pour aider les développeurs. Qt est fournit avec l'editeur _Qt Creator_.

Certains compilateurs sont disponibles sur plusieurs systèmes, alors que d'autres compilateurs sont spécifiques 
à un système. Pour les plus connus pour les ordinateurs de bureau ("desktop") :

- GCC : multi-plateforme (pour Windows, Linux, Android) ;
- Clang : multi-plateforme (pour Windows, Mac, Linux, Android, iOS) ;
- Microsoft Visual Studio (souvent appelle "MSVC", pour Windows).

Dans le cas des mobiles (Android et iOS), la compilation est un peu particulière. Il s'agit d'une cross-compilation, 
c'est-à-dire que le programme est compilé sur un système hôte (sur desktop) différent du système cible (sur mobile). 
Par exemple, il est possible de compiler une programme pour Android sur Windows. Il faut donc installer un environnement 
de compilation spécifique.

## Microsoft Visual Studio (MSVC)

Visual Studio est l'outil de développement conçu par Microsoft ("MSVC" signifie "Microsoft Visual C++"). C'est donc 
naturellement l'outil conseillé sur Windows.

Il est important d'installer la version de Visual Studio correspondante à la version de Qt que vous souhaitez installer. 
Il existe différentes versions de Visual Studio, identifiées par :

- la date de sortie : 2008, 2010, 2013, 2015, 2017 ;
- la licence d'utilisation : `Express` (version gratuite limitée), `Community` (version gratuite moins limitée) et les versions 
payantes (`Professional`, `Enterprise`, `Ultimate`, etc.).

_Ne soyez donc pas surpris, Visual Studio utilise deux systemes de numérotation des versions : avec l'année (2013, 2015, 2017, 2019, 2022) ou un 
numéro de version (12.0, 14.0, 16.0, 17.0)._

Les versions payantes sont relativement chères pour un particulier. Si votre entreprise possède des licences, utilisez-les. 
Sinon, la version `Community` est suffisante. Ce tutoriel utilisera cette version.

La version officiellement testé avec Qt 6.2 est MSVC 2019, mais vous pouvez utiliser sans problème la dernière version : MSVC 2022 (version 17.1).
Le lien direct pour télécharger Visual Studio sur le [site officiel de Microsoft](https://visualstudio.microsoft.com/fr/downloads/), mais si ce 
lien ne fonctionne pas (Microsoft change souvent les liens de telechargement), vous trouverez facilement sur internet le 
lien de téléchargement. Prenez bien le site officiel de Microsoft.

Apres avoir télécharger l'installateur, lancez-le et suivez les instructions. Lors de l'étape de sélection 

## GCC et Mingw32

### Sur Linux

GCC (GNU Compiler Collection) est la suite historique de compilation sur GNU/Linux, mais elle est également disponible
pour iOS and Android. Le compilateur `g++` est le compilateur C++ de la suite GCC. En plus du compilateur, il faut également
installer d'autres outils de développement, comme `make`. Le plus simple est d'installer le paquet `build-essential`,
qui contient les outils de base pour compiler en C++.

En plus de ces outils, il est nécessaire d'installer le support pour OpenGL. Pour cela, il faut installer le paquet
`libglu1-mesa-dev`.

Vous pouvez installer tous des paquets via le gestionnaire de paquets ou avec la ligne de commande suivante :

```
sudo apt-get install build-essential libglu1-mesa-dev
```

### Sur Windows

MingW est le portage de GCC sur Windows. Le plus simple pour installer MingW sur Windows est de sélectionner cet 
outil dans l'installateur de Qt. Il est disponible dans la partie `Tools`. Chaque version de Qt peut utiliser
une version differente de MingW, il est donc nécessaire de sélectionner la version de MingW correspondant
à la version de Qt que vous souhaitez installer. Pour la version actuelle de Qt (Qt 5.9.1), il faut
installer MingW 5.3.

Vous pouvez également installer manuellement MingW. Pour cela, vous pouvez suivre le tutoriel de int21h sur 
OpenClassRoom : [Mettre à jour le MinGW GCC de 
Code::Blocks](https://openclassrooms.com/forum/sujet/mettre-a-jour-le-mingw-gcc-de-code-blocks).

### Pour Android

L'installation de GCC pour Android est un peu particulier. Il n'est pas possible de compiler les applications
directement sur un periphérique Android. Il faut compiler sur un ordinateur avec des outils de compilation
specifique pour Android puis transferer l'application sur Android. Cette technique s'appelle une 
cross-compilation. Le systeme sur lequel on compile est le systeme hôte (Windows, Linux ou MacOS X), le
systeme cible est Android.

La compilation d'une application Qt pour Android nécessite deux outils :

- le _Android SDK_ (_Software Developement Kit_) est le kit de développement en Java pour Android et contient 
  les outils de base pour travailler avec Android ;
- le _Android NDK_ (_Native Devlopement Kit_) est le kit de développement en C++ pour Android.

Ces deux outils sont nécessaires pour utiliser Qt sur Android, vous devez installer le SDK même si vous n'utilisez
pas le Java (Qt utilise en interne une activités Java sur Android).

Le SDK et le NDK peuvent être installés directement depuis Android Studio, l'outil officiel de développement pour Android.
Allez sur la page [Android Studio](https://developer.android.com/studio/index.html)
et cliquez sur `Download Android Studio`. Une fois le téléchargement fini, lancez l'installateur et suivez les
étapes pour installer le SDK et le NDK.

Consulter la page [Installing Qt for Android with Qt Installer](https://doc.qt.io/qt-6/android-getting-started.html)
pour savoir la liste des outils à installer.

## Clang

Clang est le compilateur le plus récent historiquement sur les trois proposés dans ce tutoriel. C'est un projet lancé initialement
par Apple pour compiler sur MacOS X et sur iOS, en C++ et en Objective-C, mais cet outil est également disponible
sur Linux, Android et Windows. Cependant, Qt ne supporte pas encore Clang sur Windows, l'installation
de Clang dessus n'est pas détaillé ici.

Pour MacOS X, le compilateur Clang est fourni dans l'outil de développement officiel d'Apple : XCode. Ce logiciel
est gratuit, il vous suffit donc d'aller dans l'App Store (cliquez sur la pomme de la barre de menu, puis selectionnez
`App store...`) et d'installer XCode.

Pour Linux, la procedure d'installation est identique à celle pour GCC : il faut installer les paquets `build-essential`, 
`libglu1-mesa-dev` et `clang`. La ligne de commande est la suivante :

```
sudo apt-get install build-essential libglu1-mesa-dev clang
```
