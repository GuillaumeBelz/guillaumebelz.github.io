
# Télécharger l'installateur de Qt

> [Revenir à la page "Installation et premiers pas avec Qt 6.2"](README.md)
> 
> Dernière mise à jour : 24 février 2022.

**Attention : évitez de télécharger des fichiers, en particulier des applications, sur des sites non-officiels, 
pour minimiser le risque d'installer des logiciels malveillants.**

## Le site officiel de Qt

### La page de téléchagement 

Le lien direct pour télécharger Qt 6 est https://www.qt.io/download-qt-installer. Si ce lien est modifié, il 
est possible de le retrouver en allant sur Google et rechercher "qt6 download".

Cette page détecte automatiquement
votre système d'exploitation et propose directement la version correcte de Qt à télécharger. Par exemple, dans cette 
capture d'écran, c'est la version pour macOS qui est proposée :

![Page de téléchargement de Qt](images/download_01.png)

Cliquez sur le lien "Download" pour lancer le téléchargement. Une page de remerciement s'affiche alors.

![Page de téléchargement de Qt](images/download_02.png)

Le nom de l'installateur dépend du système :

- pour Windows : `qt-unified-windows-x86-4.3.0-online.exe` ;
- pour Linux : `qt-unified-linux-x64-4.3.0-online.run` ;
- pour Mac : `qt-unified-macOS-x64-4.3.0-online.dmg`.

Le numéro de version correspond a l'installateur. Qt Creator (l'éditeur de code
de Qt) et Qt (le framework de developpement) ont des numéros de version differents, 
il ne faut pas les confondre.

L'installateur ne contient aucune version de Qt a proprement parlé. Lorsque vous le lancerez, il téléchargera les versions
de Qt que vous aurez sélectionné. Le téléchargement de l'installateur est donc rapide.

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

Il existe deux versions de l'installateur : `online` et `offline`. Les deux versions installe l'outil
`Qt Maintenance Tool`, qui permet d'installer, desinstaller et mettre a jour Qt. La version `online` ne
contient que cet outil, et c'est celui-ci qui va installer Qt. La version `offline` contient tout
ce qui est necessaire pour installer une version complete de Qt, sans avoir besoin d'etre connecte
a internet _pendant l'installation_. Naturellement, l'installateur `offline` est plus volumineuse que 
l'installateur `online`.

Lors de l'installation de Qt, l'outil `Qt Maintenance Tool` est installe dans le repertoire d'installation de Qt. 
Par défaut, cet outil se trouve :

- pour Windows : dans `C:\Qt\maintenancetool.exe` ;
- pour Linux et Mac : dans `~/Qt/MaintenanceTool`.

## Autres téléchargements possibles

Si vous souhaitez voir les autres téléchargements possibles, vous pouvez cliquer sur le lien `View other options` 
ou sur `offline packages you can get them here`.

Le premier permet d'afficher les installateurs online pour tous les systèmes (linux 64b et 32b, Mac et Windows).

Le second permet d'afficher :

- Les installateurs offline pour la dernière version de Qt (actuellement la version 5.14) pour Linux, Mac et Windows ;
- Les installateurs offline pour les versions LTS (Long Term Support) de Qt (les versions 5.12 et 5.9) pour Linux, Mac et Windows ;
- L'éditeur Qt Creator seul ;
- les plugins pour Visual Studio ;
- l'outil JOM (outil de compilation similaire à nmake, dédié à Qt) ;
- le Qt Build Suite (QBS) (un outil de build, probable futur remplaçant de qmake) ;
- Qt Installer Framework (pour créer vos propres installateurs pour vos programmes) ;
- les dépôts Git de Qt ;
- les archives des anciennes versions de Qt (ce dernier lien permet en particulier de télécharger Qt 4 si nécessaire).
