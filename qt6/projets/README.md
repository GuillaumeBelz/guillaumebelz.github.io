# Projets à réaliser avec Qt

> [Revenir au tutoriel Qt 6](../README.md)

Choisissez un projet assez petit pour être terminé, puis ajoutez une fonctionnalité à la fois. Commencez par un prototype
QML ou une maquette Widgets ; séparez ensuite l'interface, le modèle de données et les opérations métier.

## Idées de projets

- **Liste de tâches** : modèles, filtres, stockage local et tests.
- **Lecteur de flux** : Qt Network, gestion des erreurs et affichage d'une liste.
- **Carnet de notes** : fichiers, recherche et sauvegarde.
- **Visualiseur de données** : import de CSV/JSON, graphiques et export.
- **Application multiplateforme** : même fonctionnalité sur desktop et mobile, avec une interface adaptée à chaque écran.

Pour chaque étape :

1. définissez un besoin concret et les états de l'interface ;
2. écrivez les tests ou critères de validation ;
3. versionnez les changements avec Git et documentez la construction ;
4. testez les erreurs, les données invalides et le déploiement sur un environnement propre.

Un projet open source demande aussi un README clair, une licence choisie explicitement, un guide de contribution et des
issues ciblées. Automatisez progressivement la compilation et les tests dans une intégration continue, sans publier de
secrets ni de données personnelles.
