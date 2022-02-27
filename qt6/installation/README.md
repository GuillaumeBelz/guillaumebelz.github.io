
# Installation et premiers pas avec Qt 6.2

> [Revenir à la page d'accueil](../../README.md)
> 
> **Mises à jour**
>
> - 8 décembre 2020 : mise a jour pour Qt 6.0
> - 24 février 2022 : correction des liens, mise à jour pour Qt 6.2

Pour un débutant, l'installation et la configuration d'un environnement de développement pour le C++ et Qt posent 
régulièrement des problèmes. Le processus est relativement simple et automatisé, mais encore faut-il avoir une 
idée de ce que l'on fait. Le but de cette série de tutoriels est de montrer pas-à-pas comment installer et tester 
l'installation de Qt 6.

**Important ! Si vous avez des problèmes et que vous souhaitez poser des questions sur les forums, lisez d'abord 
ceci : [Savoir comment demander de l'aide sur les forums](help.md).**

## L'installation en détails

Si vous avez déjà installé Qt et que vous avez rencontré des problèmes, il est possible que votre ordinateur contienne
des fichiers de configuration INVALIDES. La première étape dans ce cas est de nettoyer correctement votre ordinateur :

- [Désinstaller proprement Qt et Qt Creator](uninstall.md)

Pour installer Qt, vous avez besoin d'un compilateur et de l'installateur Qt :

- [Installer un compilateur C++](compiler.md)
- [Télécharger l'installateur de Qt](download.md)
- [Installer Qt](installation.md)


Une fois que vous avez installer Qt, il FAUT tester que l'installation est valide. Pour cela, il FAUT faire un premier
test avec Qt Creator, même si vous souhaitez utiliser un autre éditeur de code par la suite.

- [Tester l'installation de Qt](test.md)

Qt est régulièrement mit à jour. Vous n'avez pas besoin de faire une installation complète si vous avez déjà installé Qt,
il y a un outil pour faire les mises à jour.

- [Mettre à jour Qt](update.md)

## Aller plus loin

Les tutoriels suivants ne sont pas indispensables à lire pour installer Qt, mais ils vous permettront de mieux comprendre
comment Qt fonctionne et donc d'être plus efficace.

- [Comprendre les versions de Qt](version.md)
- [Configurer Qt Creator](config.md)
- [Deployer une application Qt](deploy.md)
- [Savoir utiliser la documentation de Qt](documentation.md)
- le plugin MSVC, installation et tests

## Contributions

Si vous souhaitez ameliorer ce tutoriel, vous pouvez :

- consulter et modifier les sources Markdown sur [GitHub](https://github.com/GuillaumeBelz/guillaumebelz.github.io/tree/master/qt6/installation) ;
- creer un [rapport de bug](https://github.com/GuillaumeBelz/guillaumebelz.github.io/issues/new).

Si vous avez des questions sur l'installation de Qt, n'hesitez pas à les poser sur le [discord Nan](https://discordapp.com/invite/zcWp9sC) ou sur
[le forum d'OpenClassrooms](https://openclassrooms.com/forum/categorie/langage-c-1).

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
