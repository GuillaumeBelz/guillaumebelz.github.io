# Tester l'installation de Qt

> [Revenir à la page d'installation de Qt 6](README.md)

Après l'installation, vérifiez d'abord qu'un kit desktop est valide dans Qt Creator. Créez ensuite un projet d'exemple
Qt Widgets ou Qt Quick à l'aide de l'assistant, en choisissant CMake et le kit installé. Le modèle exact dépend de la
version de Qt Creator.

Construisez puis exécutez l'application avec le bouton **Run**. Une fenêtre qui s'ouvre confirme que le kit et les
dépendances de base fonctionnent. Pour vérifier aussi le débogueur, placez un point d'arrêt dans le code puis lancez
l'application avec **Start Debugging**.

En cas d'échec :

- regardez d'abord la première erreur dans **Issues** et **Compile Output** ;
- vérifiez dans **Projects > Build & Run** le kit actif et le type de construction ;
- si CMake ne trouve pas Qt, vérifiez que le projet est configuré avec le chemin de la bonne installation Qt ;
- après un changement de kit ou de version majeure, relancez la configuration CMake et reconstruisez le projet.

Pour confirmer que l'installation fonctionne hors de l'IDE, utilisez ensuite le processus documenté pour votre projet
et votre plateforme. La réussite dans Qt Creator ne vérifie pas à elle seule le déploiement.
