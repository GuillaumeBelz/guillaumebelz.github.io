# Mettre à jour Qt 5.9.1

> Dernière mise à jour : 6 septembre 2017.
>
> Revenir a la page d'accueil : [Installation et premiers pas avec Qt 5.9.1](index.md)
>
> Chapitre précédent : [Tester l'installation de Qt 5.9.1](test.md)
>
> Chapitre suivant : [Comprendre les versions de Qt](version.md)

La méthode la plus simple pour mettre à jour Qt est de lancer l'application `MaintenanceTool` 
qui se trouve dans le répertoire d'installation de Qt. Par défaut, le repertoire d'installation est :

- sur Windows : `C:\Qt\MaintenanceTool.exe` ;
- sur MacOS et Linux : `~\Qt\MaintenanceTool`.

![Mettre à jour Qt](http://guillaume.belz.free.fr/lib/exe/fetch.php?cache=&media=install_22.png)

Avec cet outil, vous pouvez choisir `Mettre à jour les modules` (ou `Update component`, selon la 
version de Qt) pour mettre à jour automatiquement les outils (Qt Creator, Installer, etc.) Pour mettre 
à jour les versions de Qt et compilateur, choisissez `Gestionnaire de paquets` (ou `Manage component`). 
Le reste de la procédure est identique à une installation.
