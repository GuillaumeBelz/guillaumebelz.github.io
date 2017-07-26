
# Installation et premiers pas avec Qt 5.9.1

> Dernière mise à jour : 26 juillet 2017.

Pour un débutant, l'installation et la configuration d'un environnement de développement pour le C++ et Qt posent 
régulièrement des problèmes. Le processus est relativement simple et automatisé, mais encore faut-il avoir une 
idée de ce que l'on fait. Le but de cette série de tutoriels est de montrer pas-à-pas comment installer et tester 
l'installation de Qt.

## Les versions de Qt

Cette serie de tutoriels sera régulièrement mis-à-jour, en fonction des sorties des nouvelles versions de Qt.

Une version de Qt est indiquee grace a une serie de trois chiffres :

- le numero de version majeur ;
- le numero de version mineur ;
- et le numero de patch.

Par exemple, la derniere version est la version 5.9.1, cela signifie que la version majeure est 5, 
la version mineure est 9 et la version du patch est 1.

Un numero de version majeur correspond a un changement important dans l'architecture de Qt.
Qt ne supporte que deux versions majeures : la version courante (qui recoit les 
ameliorations et corrections de bugs) et la version precedente (qui ne recoit que des corrections de bugs).
La version majeure actuelle est Qt5. La version precedente Qt4 est encore disponible sur les
anciens systemes et pour la maintenance d'anciens codes, mais il est recommande de ne plus utiliser
cette version. Lorsque Qt6 sortira, Qt5 deviendra la version de maintenance et Qt4 sera abandonnee.

Le numero de version mineure correspond a la sortie de fonctionnalites importantes et a lieu environ
tous les 6 mois. La version actuelle est Qt 5.9 (Qt 5.10 est prevu fin 2017). Qt garantie (sauf cas 
exceptionnel) la compatibilite des versions mineures, c'est-a-dire que si vous compiler un programme
avec une version de Qt (par exemple Qt 5.9) et que l'utilisateur met a jour Qt (par exemple Qt 5.10), 
le programme sera encore fonctionnel.

Le numero de patch correspond a des mises a jour de correction de bugs. Il est conseille de toujours
installer la derniere version de patch.

Par defaut, lorsqu'une nouvelle version de Qt sort, les versions precedentes ne sont plus maintenues, 
sauf les versions LTS (Long Terme Support), qui sont garantie d'etre mise a jour pendant plusieurs annees. 
Les versions LTS de Qt sont actuellement :

- Qt 4.8.3
- Qt 5.6.3
- Qt 5.9.1


## Version courte du tutoriel d'installation

- suivez le lien suivant : [Download Qt Open Source](https://www.qt.io/download-open-source/).
- cliquez sur `Download Now` pour lancer le téléchargement de l'installateur de Qt. (Cette étape est rapide).
- lancez l'installateur.
- suivez la procédure.
- le telechargement et l'installation est automatique. (Cette étape peut etre tres longue).
- lancez Qt Creator, creez un projet par defaut et lancez le. Cela devrait fonctionner.

## Version detaillée du tutoriel d'installation

La première partie est consacrée à l'installation de Qt et la création de projets par défaut, pour vérifier
que l'installation s'est bien passée.

Dans la seconde partie, j'explique un peu plus en détail le fonctionnement de Qt et de son installation, pour 
aider ceux qui rencontrent des problèmes lors de l'installation.

Pour terminer, je décris comment utiliser la documentation de Qt, qui est très bien faite et très riche. En 
particulier, il existe des codes d'exemple pour la majorité des fonctionnalités de Qt. Quand vous souhaitez 
réaliser quelque chose, la première chose à faire est probablement d'étudier ces codes d'exemple.

- [Désinstaller proprement Qt et Qt Creator](uninstall.md)
- [Télécharger l'installateur de Qt](download.md)
- Installer le compilateur C++
- Installer Qt 5.8
- Installer Qt 5.5 sous Windows
- Installer Qt 5.5 sous Linux
- Installer Qt 5.5 sous Mac OS X
- Installer Qt 5.5 pour Android
- Installer Qt 5.5 pour iOS
- Tester l'installation de Qt 5.5
- Configurer Qt Creator 3.4.2 pour Qt 5.5
- Mettre à jour Qt 5.5
- Déployer une application Qt
- Savoir utiliser la documentation de Qt 5.5

## Notes

Ce tutoriel est une reprise et une mise à jour des vidéos que j'avais faites pour 
[mon livre](http://www.d-booker.fr/110-qt-5-les-essentiels.html) sur la chaîne YouTube 
de mon éditeur, D-Booker, à l'occasion de la sortie de Qt 5.0 :
[Installer le framework Qt 5](https://www.youtube.com/watch?v=rYU4ONnyChc&list=PLJ0RWFYCJZYF1pxD5FlAFqQVYkmebeTUY). C'est également 
une reprise des vidéos que j'avais faites à l'occasion de la sortie de Qt 5.2, sur ma chaîne YouTube : 
"Installation et premier pas avec Qt 5.2 sur Windows" et "Savoir utiliser la documentation de Qt" (videos supprimées). Je préfère 
passer au format tutoriel classique, pour faciliter les mises à jour.
