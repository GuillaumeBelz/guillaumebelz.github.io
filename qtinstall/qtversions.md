# Comprendre les versions de Qt

> Dernière mise à jour : 26 juillet 2017.

> Revenir a la page d'accueil : [Installation et premiers pas avec Qt 5.9.1](index.md)

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

Pour etre plus concret :

- si vous avez ecrit un code pour Qt4 et que vous souhaitez le compiler avec Qt5, vous devrez modifier
votre code pour le rendre compatible.
- si vous avez ecrit un code par exemple pour Qt 5.6, ce code fonctionnera encore avec Qt 5.7. Par contre,
votre code aura ete ecrit sans les fonctionnalites de Qt 5.7, donc pour utiliser ces nouvelles fonctionnalites,
vous devrez modifier votre code.
- si vous avez ecrit  un code par exemple pour Qt 5.6.0, ce code fonctionnera encore avec Qt 5.6.1. Et comme
cette nouvelle version ne contient aucune fonctionnalite, mais que des corrections de bugs, vous n'avez pas
a modifier votre code.

Par defaut, lorsqu'une nouvelle version de Qt sort, les versions precedentes ne sont plus maintenues, 
sauf les versions LTS (Long Terme Support), qui sont garantie d'etre mise a jour pendant plusieurs annees. 
Les versions LTS de Qt sont actuellement :

- Qt 4.8.3
- Qt 5.6.3
- Qt 5.9.1
