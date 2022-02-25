
# Désinstaller proprement Qt et Qt Creator

> [Revenir à la page "Installation et premiers pas avec Qt 6.2"](README.md)
> 
> Dernière mise à jour : 24 février 2022.

Il peut sembler étrange de commencer un tutoriel sur l'installation de Qt en expliquant comment désinstaller.
La raison est que beaucoup ont tenté d'installer Qt avant de lire ce tutoriel et il est dans ce cas nécessaire 
de bien désinstaller Qt avant de le réinstaller.

La désinstallation en elle-même ne pose généralement pas de problème. Il faut lancer l'outil `MaintenanceTool`
qui se trouve dans le répertoire d'installation de Qt et choisir `Désinstaller` (Uninstall).

Les repertoires par défaut d'installation de Qt sont les suivants :

- pour Windows : dans `C:\Qt`
- pour Mac et Linux : dans `~\Qt`

Si cela ne fonctionne pas, il est possible de supprimer le répertoire d'installation de Qt. Cependant, il faut 
également supprimer les fichiers de configuration de Qt et de Qt Creator, pour éviter les conflits lors de la 
réinstallation. Ces fichiers ne se trouvent pas dans le répertoire d'installation de Qt, ce qui explique qu'il 
est facile de les oublier (d'autant plus qu'ils sont dans un répertoire caché).

Sous Windows, il faut aller dans le répertoire `C:\Users\VotreNom\AppData\Roaming` et supprimer les 
répertoires `QtProject`.

Sous Linux et Mac OS X, il faut aller dans `~/.config` et supprimer le répertoire `QtProject`. Le répertoire 
`.config` est est caché, donc il faut afficher les répertoires cachés (`Ctrl + H` sous Linux. Sous Mac, il n'y a pas d'option
pour faire cela, tapez `cd ~/.config`). Une solution alternative est de lancer un terminal et d'utiliser la ligne 
de commande suivante : `rm -R ~/.config/QtProject`.
