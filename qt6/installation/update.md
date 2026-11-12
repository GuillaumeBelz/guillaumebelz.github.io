# Mettre à jour Qt

> [Revenir à la page d'installation de Qt 6](README.md)
>
> [Revenir au README du site](../../README.md)

- **Création :** 27 août 2017
- **Dernière mise à jour :** 11 novembre 2026

L'outil **Qt Maintenance Tool**, installé dans le répertoire Qt, sert à ajouter, retirer et mettre à jour les composants.
Son nom et ses menus peuvent varier légèrement selon la version. Sélectionnez la maintenance ou la modification des
composants, connectez-vous si demandé, choisissez la version ou le module désiré, puis vérifiez les changements avant de
les appliquer.

Pour passer à une nouvelle version mineure (par exemple de 6.8 à 6.12), installez cette version en parallèle plutôt que
de remplacer aveuglément celle utilisée par un projet. Ouvrez ensuite le projet avec un kit correspondant, reconstruisez-le
et exécutez ses tests. Cela permet de revenir à l'ancienne configuration et de comparer les résultats.

Les projets de production doivent fixer la version et les modules utilisés, puis suivre une politique de mise à jour
incluant les correctifs de sécurité. Consultez les [versions Qt maintenues](https://www.qt.io/development/qt-framework/maintenance-periods)
et la [documentation de Qt Maintenance Tool](https://doc.qt.io/qt-6/add-update-remove-components.html).

Article rédigé avec l’aide de l’IA.

## Historique des mises à jour

- 2017-08-27 — Création de la page.
- 2026-11-11 — Actualisation pour Qt 6 et lien direct vers la gestion des composants avec Qt Maintenance Tool.
