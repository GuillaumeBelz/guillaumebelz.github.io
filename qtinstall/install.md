# Installer et mettre a jour

> Dernière mise à jour : 24 aout 2017.

> Revenir a la page d'accueil : [Installation et premiers pas avec Qt 5.9.1](index.md)

Pour installer ou mettre des versions de Qt, lancez l'installateur que vous avez telecharge a l'etape precedente, si 
vous installez Qt pour la premiere fois. Ou lancez l'outil `Qt Maintenance Tool` qui se trouve dans le repertoire 
d'installation de Qt si vous avez deja installe Qt.

La premiere page donne des informations generales sur les licences, avec des liens pour plus d'informations.

![Informations generales](http://guillaume.belz.free.fr/lib/exe/fetch.php?cache=&media=install-qt55-04.png)

La page suivante permet de se connecter a son compte Qt ou de creer une compte Qt.

![Connexion](http://guillaume.belz.free.fr/lib/exe/fetch.php?cache=&media=install-qt55-05.png)

Cette page sert simplement à vous souhaitez la bienvenue... `Suivant`.

![Informations generales](http://guillaume.belz.free.fr/lib/exe/fetch.php?cache=&media=install-qt55-06.png)

![Image](http://guillaume.belz.free.fr/lib/exe/fetch.php?cache=&media=install-qt55-07.png)

L'installeur recherche en ligne la liste des outils et versions que vous pouvez installer (cela peut durer 
de quelques dizaines de secondes à quelques minutes, en fonction de votre connexion internet).

Une fois que le téléchargement est fini, la page suivante s'affiche automatiquement. Cette page permet de
choisir le dossier d'installation de Qt. Par défaut, le chemin est `C:\Qt\`.

![Image](http://guillaume.belz.free.fr/lib/exe/fetch.php?cache=&media=install-qt55-08.png)

Vous pouvez changer le répertoire d'installation si vous le souhaitez. Dans la suite de ce tutoriel, nous 
allons utiliser le chemin par défaut. Si vous changez de répertoire, pensez à adapter les chemins donnés 
dans la suite de ce tutoriel.

Cliquez sur `Suivant`.

![Image](http://guillaume.belz.free.fr/lib/exe/fetch.php?cache=&media=install-qt55-09.png?500 |}}

La page suivante permet de sélectionner la liste des outils à installer. Pour programmer en C++ avec Qt,
il faut installer au moins trois outils :

  * un **éditeur**. Qt (le framework) est fourni avec un éditeur appelé Qt Creator (ne confondez pas
  l’éditeur et le framework). Cet éditeur est installé automatiquement et il n'est pas possible de le 
  désactiver ;
  * au moins une version de **Qt** ;
  * un **compilateur** compatible avec la version de Qt installée.

Il existe sous Windows deux compilateurs principaux : MinGW (version Windows du compilateur
[[https://fr.wikipedia.org/wiki/GNU_Compiler_Collection|GCC]] de Linux) et le compilateur de 
[[https://fr.wikipedia.org/wiki/Microsoft_Visual_Studio|Visual Studio]] de Microsoft. 

Pour des raisons de licences logicielles, l'installeur Qt ne fournit que le compilateur MinGW. Pour 
installer le compilateur de Visual Studio, il faudra installer séparément Visual Studio, directement
à partir du site de Microsoft. La procédure est expliquée dans la partie "Installer Qt 5.5 avec Visual 
Studio 2013".

L'installeur propose de nombreuses options, nous allons les détailler un peu.

Pour commencer, on peut voir que l'installeur permet d'installer plusieurs versions de Qt : 5.9, 5.8, etc. 
Par défaut, nous allons utiliser la dernière version (5.5). Si vous devez travailler sur une version plus
ancienne que Qt 5.9.1, vous pouvez l'installer à partir de cette page. (Remarque : il est encore possible 
d'installer Qt 4, mais la procédure est différente, nous n'allons pas voir cela.)

Pour chaque version de Qt proposée, il existe plusieurs versions et modules, selon le compilateur.

**Remarque importante : vous choisissez ici les versions de Qt à installer, pas les compilateurs. Chaque 
version de Qt est identifiée par un nom de compilateur, mais cela ne veut pas dire que le compilateur 
correspondant sera installé. Les compilateurs sont installés séparément, voir plus bas.**

  * `MinGW 4.9.2 32 bit` : version de Qt compatible avec le compilateur MinGW 4.9.2. C'est la dernière 
  version de MinGW (GCC est en version 5.1, MinGW est un peu en retard, mais le support du C++11 est 
  complet sur cette version, donc vous pouvez l'utiliser sans problème). Il n'existe pas de version 64 
  bits, mais la version 32 bit fonctionne parfaitement sous Windows 32 bit et 64 bit ;
  * `MSVC 2012 32 bit` : compilateur de Visual Studio 2012 ;
  * `MSVC 2010 32 bit` : compilateur de Visual Studio 2010 ;
  * `MSVC 2013 32 bit` et `MSVC 2013 64 bit` : compilateur de Visual Studio 2013 ;
  * `Windows Runtime 8.1 x64 (MSVC2013)` : version pour Windows RT 8.1, avec le compilateur de Visual Studio 2013.

Et les versions pour  mobiles :

  * `Windows Phone arm (MSVC2013)` et `Windows Phone x86 (MSVC2013)` : versions pour Windows Phone, avec 
  le compilateur de Visual Studio 2013 ;
  * `Android x86 (MSVC2013)`, `Android armv5 (MSVC2013)` et `Android armv7 (MSVC2013)` : versions pour Android, 
  avec le compilateur de Visual Studio 2013.

Comme vous pouvez le voir, Qt supporte de nombreux systèmes d'exploitation, c'est un peu compliqué de s'y
retrouver. Dans ce chapitre, nous allons voir uniquement l'installation de Qt pour les ordinateurs de bureau
 (Desktop). L'installation de Qt pour mobiles sera vu de dans chapitres spécifiques. De plus, nous n'allons 
 voir que l'installation des dernières versions des compilateurs :

  * `MinGW 4.9.2 32 bit`, qui sera vu dans la suite de ce chapitre ;
  * `MSVC2013`, qui sera vu dans la partie "Installer Qt 5.5 avec Visual Studio 2013".

En dessous des différentes versions de Qt, vous pouvez choisir d'installer différents modules optionnels :

  * `Source Components` : permet d'installer le code source de Qt. Si vous débutez, cela ne vous servira 
  pas, mais si vous êtes un développeur C++/Qt un peu plus expérimenté, cela permet d'analyser comment Qt est conçu ;
  * `Qt Location` : fonctionnalités de positionnement (GPS) ;
  * `Qt 3D` : moteur 3D simple ;
  * `Qt Script` : déprécié, ne pas utiliser (sauf besoin spécifique) ;
  * `Qt Canvas 3D` : moteur 3D simple similaire à WebGL en JavaScript ;
  * `Qt Quick 1` : déprécié, ne pas utiliser (sauf besoin spécifique) ;
  * `Qt Quick Controls` : éléments d'interface graphique (bouton, dialogues, etc.) pour Qt Quick ;
  * `Qt WebEngine` : moteur Web, pour afficher des pages internet.

Je vous conseille d'installer les modules correspondant à la capture d’écran précédente (Qt pour MinGW, Qt 
Location, Qt 3D, Qt Canvas 3D, Qt Quick Controls et Qt WebEngine. Vous n'aurez pas besoin de tous ces modules
 pour commencer, mais cela vous permettra d'explorer ce que propose Qt et de vous amuser un peu).

En dessous du choix des versions de Qt et des modules additionnels, vous pouvez sélectionner l'installation 
des outils externes.

![Image](http://guillaume.belz.free.fr/lib/exe/fetch.php?cache=&media=install-qt55-10.png?500 |}}

Qt Creator est l’éditeur fournit avec Qt. Il n'est pas possible de ne pas l'installer. (Même si vous souhaitez 
utiliser un autre éditeur, on utilisera Qt Creator dans ce tutoriel, pour tester si l'installation s'est bien 
passée).

Comme nous avons sélectionné Qt pour MinGW 4.9.2, il faut également installer le compilateur MinGW 4.9.2.

Il n'est pas nécessaire d'installer les modules `Qt Cloud Services` et `Qt Extras`.

Cliquez sur suivant lorsque vous avez sélectionné les modules qui vous intéressent.

![Image](http://guillaume.belz.free.fr/lib/exe/fetch.php?cache=&media=install-qt55-11.png)

Cette page permet de valider les licences utilisateurs. Acceptez et cliquez sur suivant.

![Image](http://guillaume.belz.free.fr/lib/exe/fetch.php?cache=&media=install-qt55-12.png)

Cette page permet de choisir le répertoire dans le menu Démarrer. Cliquez sur suivant.

![Image](http://guillaume.belz.free.fr/lib/exe/fetch.php?cache=&media=install-qt55-13.png)

Une fois que tout cela est fait, l'installation est prête à démarrer. Cliquez sur `Installation`.

Le téléchargement puis l'installation se lancent. Selon votre connexion et le nombre de paquets que vous 
installez, cela peut prendre plusieurs minutes à plusieurs heures (si vous souhaitez installer beaucoup de
 paquets, il est probablement préférable de répéter l'installation plusieurs fois). L'installation sature 
 le processeur, ne vous étonnez pas trop si Windows devient un peu lent pendant ce temps-là. Allez vous balader 
 dehors, il fait beau (la pluie, c'est beau...).

![Image](http://guillaume.belz.free.fr/lib/exe/fetch.php?cache=&media=install-qt55-14.png)

Une fois que l'installation est terminée, la page suivante propose de lancer Qt Creator.

![Image](http://guillaume.belz.free.fr/lib/exe/fetch.php?cache=&media=install-qt55-15.png)

Cliquez sur `Terminer`.

![Image](http://guillaume.belz.free.fr/lib/exe/fetch.php?cache=&media=install-qt55-16.png?500 |}}

Qt Creator s'ouvre et affiche la page d'accueil.

## Installer Qt 5.5 avec Visual Studio 2013

Il est également possible d'utiliser Qt avec le compilateur de Microsoft : Microsoft Visual Studio C++ 
(que l'on appelle en raccourci "MSVC"). L'installation de Qt pour Visual Studio est similaire à celle de MinGW, 
il faut simplement installer en plus :

  * la version de Visual Studio correspondant à la version de Qt correspondante ;
  * le plugin Qt dans Visual Studio (optionnel, il sert uniquement si vous souhaitez utiliser Visual Studio pour développer).

La première étape est donc d'installer la version de Qt correspondant à Visual Studio. Suivez les étapes décrites
 dans la première partie de ce tutoriel, jusqu'au choix des modules à installer. Dans la liste des versions de Qt, 
 installez "msvc 2013 32-bit" et/ou "msvc 2013 64-bit". (Sachez que la version 32-bit fonctionne sur Windows 32-bit 
 et 64-bit, alors que la version 64-bit ne fonctionne que sur les Windows 64-bit. De plus, sauf contrainte particulière
 dans votre code, vous ne verrez pas de différence de performance entre les deux versions. Donc je vous conseille
 d'installer la version 32-bit). Terminez ensuite l'installation de façon classique.

La seconde étape consiste à installer Visual Studio. Il existe différentes versions de Visual Studio, identifiées par :

  * la date de sortie : 2008, 2010, 2013, 2015 ;
  * la licence d'utilisation : //Express// (version gratuite limitée), //Community// (version gratuite moins limitée)
  et les versions payantes (//Professional//, //Enterprise//, //Ultimate//...)

Les versions payantes sont relativement chères pour un particulier. Si votre entreprise possède des licences, utilisez-les.
 Sinon, la version //Community// est suffisante (nous allons utiliser cette version dans la suite de ce tutoriel).

La dernière version de Visual Studio est 2015, mais Qt n'est pas encore disponible pour ce compilateur (les binaires 
sont compatibles, mais il faut faire quelques manipulations. Autant attendre une version de Qt pour Visual Studio 2015, 
ça sera plus simple dans un premier temps).

Il faut rechercher un peu pour trouver le lien pour télécharger les anciennes versions de Visual Studio. Pour Visual 
Studio 2013 Community, vous pouvez utiliser ce lien : http://go.microsoft.com/fwlink/?LinkId=517284. Celui-ci permet 
de télécharger un installateur, qui s'appelle `vs_community.exe`. Vous pouvez le lancer.

//need screenshots...//

Suivez les instructions pour l'installation de Visual Studio. Cela peut prendre plusieurs minutes.

La dernière étape consiste à installer le plugin Qt dans Visual Studio. Cette étape est optionnelle, elle est utilise 
que si vous utilisez l'éditeur de Visual Studio pour écrire vos programme.

Pour bien comprendre ce que vous avez installé :

  * vous avez installé une ou plusieurs versions de Qt (pour MinGW et/ou pour Visual Studio, pour Android, etc.) ;
  * vous avez installé deux éditeurs de code : Qt Creator (qui est fourni dans Qt) et Visual Studio ;
  * vous avez installé un ou plusieurs compilateurs (MinGW et/ou le compilateur de Visual Studio).

Pour utiliser Qt (avec MinGW et Visual Studio) dans Qt Creator, vous n'avez pas besoin d'installer le plugin Qt pour 
Visual Studio. Qt Creator reconnaît et configure automatiquement les différentes versions de Qt et les différents 
compilateurs installés. Le plugin ne sert que si vous utilisez l'éditeur Visual Studio.

(Sauf si vous avez besoin ou envie d'utiliser spécifiquement Visual Studio, je vous conseille d'utiliser Qt Creator. 
Il est spécifiquement conçu pour travailler avec Qt et permet de gérer facilement les différentes versions de Qt, en 
particulier les versions pour mobiles.)

Commencez par télécharger le plugin Qt sur ce lien : [[http://download.qt.io/official_releases/vsaddin/qt-vs-addin-1.2.4-opensource.exe|qt-vs-addin-1.2.4-opensource.exe]] et lancez-le.

{{  :install-qt55-msvc-01.png?300  |}}

La première page est une simple page d'information. Cliquez sur `Next`.

{{  :install-qt55-msvc-02.png?300  |}}

Cette page permet d'accepter la licence d'utilisation du plugin. Cliquez sur `I accepte...`, puis sur `Next`.

{{  :install-qt55-msvc-03.png?300  |}}

Cette page permet de choisir les versions de Visual Studio à installer. Choisissez les versions 2013 pour le plugin, 
l'aide et le débogage. Cliquez sur `Next`.

{{  :install-qt55-msvc-04.png?300  |}}

Cette page permet de choisir le dossier d'installation. Utilisez le répertoire par défaut et cliquez sur `Next`.

{{  :install-qt55-msvc-05.png?300  |}}

Le téléchargement, puis l'installation se lancent. Cela peut prendre quelques minutes, en fonction de votre connexion.
 (La taille des fichiers téléchargées est beaucoup plus petite que ceux téléchargés pour Qt, donc cela prend beaucoup moins de temps).

{{  :install-qt55-msvc-06.png?300  |}}

Une fois que l'installation des fichiers est terminée, cliquez sur `Next`.

{{  :install-qt55-msvc-07.png?300  |}}

L'installation est terminée, vous pouvez fermer l'installateur en cliquant sur `Finish`.
