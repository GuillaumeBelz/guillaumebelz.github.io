# Comprendre les versions de Qt

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
