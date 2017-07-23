
# Télécharger l'installateur de Qt 5

> Dernière mise à jour : 23 juillet 2017.

> Revenir a la page d'accueil : [Installation et premiers pas avec Qt 5.9.1](index.md)

## Le site officiel de Qt

### La page de telechagement

Le téléchargement de Qt se fait sur le site du projet Qt : http://www.qt.io/. Si vous avez des doutes sur la version 
de Qt a utiliser (licence commerciale ou libre), vous pouvez cliquer sur le bouton “FREE TRIAL” en haut a droite et 
répondre aux questions. (Pensez a désactiver vos bloqueurs de publicités si nécessaire).

Dans ce tutoriel, nous allons utiliser la version open-source de Qt, le plus simple est donc d'aller directement 
sur la page de telechargement correspondante : https://www.qt.io/download-open-source/ et de cliquer sur le 
bouton “Download Now” en bas a droite. Le téléchargement de l'installateur correspondant à votre système démarre 
directement.

Le nom de l'installateur dépend du système. Notez que le nom du fichier contient un numero de version et que 
celui-ci peut changer. 

- pour Windows : qt-unified-windows-x86-3.0.0-online.exe ;
- pour Linux 32 bits : qt-unified-linux-x86-3.0.0-online.run ;
- pour Linux 64 bits : qt-unified-linux-x64-3.0.0-online.run ;
- pour Mac : qt-unified-mac-x64-3.0.0-online.dmg.

Une fois que le téléchargement est terminé (c'est rapide, le fichier ne fait que quelques Mo), vous pouvez 
lancer l'installateur.

### Autres liens utiles

Vous trouverez sur le site http://www.qt.io/ d'autres liens interessants :

- la documentation de Qt (qui est accessible également dans Qt Creator en appuyant sur F1) : http://doc.qt.io/ ;
- le blog de Qt, pour suivre les nouvelles : http://blog.qt.io/dev/ ;
- le wiki de Qt, qui contient de nombreuses informations complementaires : http://wiki.qt.io/Main ;
- le forum de Qt (en anglais) : https://forum.qt.io/.

## Installateurs online et offline

Le téléchargement, le choix des outils et versions, l'installation et la mise à jour de Qt utilise un outil
dédié, le `Qt Maintenance Tool`.

L'installateur de Qt permet de :

- choisir les versions de Qt à installer ;
- choisir les outils supplémentaires à installer (en particulier les compilateurs si besoin) ;
- télécharger et installer ce que vous aurez sélectionné ;
- faire les mises à jour.

Cet outil peut fonctionner selon deux modes :

- la version en ligne (online), qui contient uniquement l'installateur. Tous les outils seront installés 
  après téléchargement en ligne ;
- la version hors ligne (offline), qui contient l'installateur et une seule de version de Qt. Le fichier à 
  télécharger est plus important, mais permet ensuite d'installer une version de Qt sans avoir de connexion Internet.

Dans tous les cas, une fois que vous avez installé une première fois Qt, vous pouvez installer d'autres versions 
de Qt ou mettre à jour les outils en lançant le “Qt Maintenance Tool”, qui se trouve dans le répertoire d'installation 
de Qt.

Par défaut, cet outil se trouve :

- pour Windows : dans `C:\Qt\maintenancetool.exe` ;
- pour Linux et Mac : dans `~/Qt/MaintenanceTool`.

## Autres téléchargements possibles

Si vous souhaitez voir les autres téléchargements possibles, vous pouvez cliquer sur le lien `View All Downloads`. 
Cela permet d'afficher, dans l'ordre, les liens suivants :

- Les installateurs online pour tous les systèmes (linux 64b et 32b, Mac et Windows) ;
- Les installateurs offline pour Linux, Mac et Windows ;
- Les sources de Qt (Qt étant un projet libre, ses sources sont librement accessibles) ;
- L'éditeur Qt Creator seul ;

Les autres outils :

- les plugins pour Visual Studio ;
- l'outil JOM (outil de compilation similaire à nmake, dédié à Qt) ;
- le Qt Build Suite (QBS) (un outil de build, probable futur remplaçant de qmake) ;
- Qt Installer Framework (pour créer vos propres installateurs pour vos programmes) ;
- les dépôts Git de Qt ;
- les archives des anciennes versions de Qt (ce dernier lien permet en particulier de télécharger Qt 4 si nécessaire).
