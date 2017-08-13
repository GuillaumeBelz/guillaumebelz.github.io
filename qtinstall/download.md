
# Télécharger l'installateur de Qt 5

> Dernière mise à jour : 13 aout 2017.

> Revenir a la page d'accueil : [Installation et premiers pas avec Qt 5.9.1](index.md)

_Attention : evitez de telecharger des fichiers, en particulier des applications, sur des sites non-officiels, 
pour minimiser le risque d'installer des logiciels malveillants._

## Le site officiel de Qt

### La page de telechagement 

Le téléchargement de Qt se fait sur le [site officiel de Qt](http://www.qt.io/). Le site est concu pour aider
les utilisateurs a choisir la version correcte de Qt (en orientant pas mal vers la version commerciale...), 
ce qui le rend un peu complexe au premier abord. Dans ce tutoriel, nous allons installer la version
open-source de Qt, donc nous n'allons pas detailler le site de Qt.

_Note pour ceux qui possedent une licence commerciale de Qt : il est possible d'entrer votre numero de licence, 
meme si vous telecharger la version open-source. Et je trouve qu'il est plus facile de mettre a jour Qt si
vous installez la version open-source, donc je vous conseille de faire cela, meme si vous avez une licence._

Pour telecharger la version open-source de Qt, le plus simple est  d'aller directement 
sur la [page de telechargement](https://www.qt.io/download-open-source/) et de cliquer sur le 
bouton "Download Now" en bas a droite. Votre systeme d'exploitation est automatiquement reconnu et l'installateur
correspond est proposé par defaut.

Le nom de l'installateur dépend du système. Notez que le nom du fichier contient un numero de version et que 
celui-ci peut changer. 

- pour Windows : `qt-unified-windows-x86-3.0.0-online.exe` ;
- pour Linux 32 bits : `qt-unified-linux-x86-3.0.0-online.run` ;
- pour Linux 64 bits : `qt-unified-linux-x64-3.0.0-online.run` ;
- pour Mac : `qt-unified-mac-x64-3.0.0-online.dmg`.

Une fois que le téléchargement est terminé (c'est rapide, le fichier ne fait que quelques Mo), vous pouvez 
lancer l'installateur.

### Autres liens utiles

Vous trouverez sur le [site officiel de Qt](http://www.qt.io/) d'autres liens interessants :

- la [documentation de Qt](http://doc.qt.io/), qui est accessible également dans Qt Creator en appuyant sur 
la touche `F1` ;
- le [blog officiel de Qt](http://blog.qt.io/dev/) et les [blogs partenaires de Qt](http://planet.qt.io/) ;
- le [wiki officiel de Qt](http://wiki.qt.io/Main), qui contient de nombreuses informations complementaires a la documentation ;
- le [forum officiel de Qt](https://forum.qt.io/), en anglais.

## Installateurs online et offline

Lors de l'installation de Qt, l'outil `Qt Maintenance Tool` est installe dans le repertoire d'installation de Qt. 
Par défaut, cet outil se trouve :

- pour Windows : dans `C:\Qt\maintenancetool.exe` ;
- pour Linux et Mac : dans `~/Qt/MaintenanceTool`.

Cet outil permet de :

- choisir les versions de Qt à installer ;
- choisir les outils supplémentaires à installer (en particulier les compilateurs si besoin) ;
- faire les mises à jour.

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
