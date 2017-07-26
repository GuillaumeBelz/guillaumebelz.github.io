# Installer un compilateur C++

> Dernière mise à jour : 26 juillet 2017.

Qt est une bibliotheque C++, ce qui signifie que vous devez installer les outils de développement nécessaire pour
compiler un programme C++. L'installation de ces outils depend du systeme et parfois plusieurs outils sont possibles.
La procedure d'installation des principaux outils est detaillee.

Lors de l'installation de Qt, celui-ci detecte automatiquement les outils de compilation et configure automatiquement
l'editeur Qt Creator. Pour cette raison, il est preferable d'installer ces outils avant Qt. Mais si vous avez fait 
autrement, pas d'inquietude, vous pouvez configurer n'importe quand Qt Creator. La configuration de Qt Creator
est detaillee dans le chapitre [Configurer Qt Creator](config.md).

Le premier (et seul) outil à installer pour programmer en C++ est un compilateur C++. Un compilateur est un outil 
qui prend du code C++ dans des fichiers textes et produit des binaires.

Certains compilateurs sont disponibles sur plusieurs systèmes, alors que d'autres compilateurs sont spécifique 
d'un système. Pour les plus connus sur Desktop :

- GCC : multi-plateforme (pour Windows, Linux, Android) ;
- Clang : multi-plateforme (pour Windows, Mac, Linux, Android, iOS) ;
- Microsoft Visual Studio (souvent appelle “MSVC”, pour Windows).

Dans le cas des mobiles (Android, iOS), la compilation est un peu particulière. Il s'agit d'une cross-compilation, 
c'est-à-dire que le programme est compilé sur un système hôte (sur Desktop) différent du système cible (sur mobile). 
Par exemple, il est possible de compiler une programme pour Android sur Windows. Il faut donc installer un environnement 
de compilation spécifique.

## Pour Windows

### Microsoft Visual Studio (MSVC)

Visual Studio est l'outil de développement conçu par Microsoft (“MSVC” signifie “Microsoft Visual C++”). C'est donc 
naturellement l'outil conseillé pour compiler sur Windows. De nombreuses bibliothèques logicielles ne sont disponibles 
sur Windows uniquement pour Visual Studio. C'est en particulier le cas du module WebEngine de Qt, qui permet d'afficher 
des pages internet en utilisant le moteur de Chromium.

Il est important d'installer la version de Visual Studio correspondant a la version de Qt que vous souhaitez installer. 
Il existe différentes versions de Visual Studio, identifiées par :

- la date de sortie : 2008, 2010, 2013, 2015, 2017 ;
- la licence d'utilisation : `Express` (version gratuite limitée), `Community` (version gratuite moins limitée) et les versions 
payantes (`Professional`, `Enterprise`, `Ultimate`, etc.).

Les versions payantes sont relativement chères pour un particulier. Si votre entreprise possède des licences, utilisez-les. 
Sinon, la version `Community` est suffisante. (Ce tutoriel utilisera cette version).

Si vous installez la dernière version de Qt, il faut installer Visual Studio 2017 (la version 16.0). 
Le lien direct pour telecharger Visual Studio sur le [site officiel de Microsoft](https://www.visualstudio.com/fr/vs/), mais si ce 
lien ne fonctionne pas (Microsoft change souvent les liens de telechargement), vous trouverez facilement sur internet le 
lien de telechargement. (Prenez bien le site officiel de Microsoft).

installation + screenshot…

### Mingw32 (GCC)

A l'origine, le compilateur GCC a été conçu pour Linux. Il existe des versions pour Windows (par exemple 
http://www.equation.com/servlet/equation.cmd?fa=fortran), mais on prefere souvent utiliser un compilateur 
dérivée de GCC pour Windows : MingW.

Le plus simple pour installer MingW sur Windows est de sélectionner cet outil dans l'installateur de Qt.




Faites attention à prendre la version de MingW correspondant a la version de Qt que vous souhaitez installer. 
Pour la dernière version de Qt (la version 5.8), il faut installer MingW 4.9.2.

Vous pouvez également installer manuellement MingW. Pour cela, vous pouvez suivre le tutoriel de int21h sur 
OpenClassRoom : Mettre à jour le MinGW GCC de Code::Blocks. Je vous recommande d'installer la version de 
https://nuwen.net/mingw.html.

### Clang

L'installation et la configuration de Clang sur Windows est un peu complexe et ne sera pas detailee ici. Sachez 
simplement que vous pouvez télécharger ce compilateur sur le site officiel du projet LLVM : 
http://releases.llvm.org/download.html#3.9.1


## Pour Linux

installation via les depots : clang et gcc


## Pour Mac et iOS

installation via XCode. Permet d'installer Clang et outils pour iOS


## Pour Android

cross compile, sur windows, linux et mac. Necessite 2 outils :

Android SDK pour programmer sur Android
Android NDK pour ecrire des programmes C++
