
# Installation de Qt 6

> [Revenir à la page d'accueil](../../README.md)
> 
> Mise à jour : 11 novembre 2026 (Qt 6.12).

Pour un débutant, l'installation et la configuration d'un environnement de développement pour C++ et Qt posent
régulièrement des problèmes. Ce guide explique les choix à faire, mais les noms des composants et les écrans de
l'installateur évoluent. Reportez-vous à la documentation officielle si un écran diffère des captures.

**Important ! Si vous avez des problèmes et que vous souhaitez poser des questions sur les forums, lisez d'abord 
ceci : [Savoir comment demander de l'aide sur les forums](help.md).**

## L'installation en détails

Si vous avez déjà installé Qt et rencontré des problèmes, ne commencez pas par supprimer des fichiers de configuration :
identifiez d'abord le kit et le message d'erreur, puis suivez le [guide de dépannage](help.md). Une désinstallation complète
n'est utile que si elle est réellement nécessaire :

- [Désinstaller proprement Qt et Qt Creator](uninstall.md)

Pour installer Qt, commencez par choisir un compilateur compatible avec votre plateforme et la version de Qt :

- [Installer un compilateur C++](compiler.md)
- [Télécharger l'installateur de Qt](download.md)
- [Installer Qt](installation.md)

Une fois Qt installé, créez, compilez et exécutez un projet minimal dans Qt Creator. Cela permet de vérifier le kit avant de
changer d'éditeur ou de configuration.

- [Tester l'installation de Qt](test.md)

Qt Maintenance Tool permet d'ajouter, retirer et mettre à jour les composants d'une installation existante.

- [Mettre à jour Qt](update.md)

## Aller plus loin

Les tutoriels suivants ne sont pas indispensables à lire pour installer Qt, mais ils vous permettront de mieux comprendre
comment Qt fonctionne et donc d'être plus efficace.

- [Comprendre les versions et le support de Qt](version.md)
- [Configurer Qt Creator](config.md)
- [Deployer une application Qt](deploy.md)
- [Savoir utiliser la documentation de Qt](documentation.md)

## Contributions

Si vous souhaitez améliorer ce tutoriel, vous pouvez :

- consulter et modifier les sources Markdown sur [GitHub](https://github.com/GuillaumeBelz/guillaumebelz.github.io/tree/master/qt6/installation) ;
- creer un [rapport de bug](https://github.com/GuillaumeBelz/guillaumebelz.github.io/issues/new).

Si vous avez des questions sur l'installation, consultez [comment demander de l'aide](help.md) et le [forum Qt](https://forum.qt.io/).

## Licence

Ce tutoriel est sous licence [Creative Common Attribution-Noncommercial-Share Alike 3.0 Unported](https://creativecommons.org/licenses/by-nc-sa/3.0/) 
(CC BY-NC-SA 3.0).

## Notes

Ce tutoriel est une reprise et une mise à jour des vidéos que j'avais faites pour 
[mon livre](http://www.d-booker.fr/110-qt-5-les-essentiels.html) sur la chaîne YouTube 
de mon éditeur, D-Booker, à l'occasion de la sortie de Qt 5.0 :
[Installer le framework Qt 5](https://www.youtube.com/watch?v=rYU4ONnyChc&list=PLJ0RWFYCJZYF1pxD5FlAFqQVYkmebeTUY). C'est également 
une reprise des vidéos que j'avais faites à l'occasion de la sortie de Qt 5.2, sur ma chaîne YouTube : 
"Installation et premier pas avec Qt 5.2 sur Windows" et "Savoir utiliser la documentation de Qt" (videos supprimées). Je préfère 
passer au format tutoriel classique, pour faciliter les mises à jour.
