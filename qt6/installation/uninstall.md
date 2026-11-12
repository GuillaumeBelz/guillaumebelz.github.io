# Désinstaller Qt et Qt Creator

> [Revenir à la page d'installation de Qt 6](README.md)

Pour retirer une version de Qt ou Qt Creator, utilisez **Qt Maintenance Tool** dans le répertoire d'installation. Choisissez
les composants à retirer et vérifiez la sélection avant de confirmer. Cette méthode préserve les autres versions et outils
qui partagent la même installation.

Ne supprimez pas directement le répertoire Qt comme première étape : cela peut laisser des kits, des chemins CMake et des
raccourcis obsolètes dans Qt Creator. Après la désinstallation, retirez les anciennes références depuis **Preferences/Options
> Kits** si elles sont encore présentes.

Les paramètres personnels de Qt Creator sont indépendants des bibliothèques installées. Ne supprimez pas ces préférences
pour résoudre un problème sans avoir d'abord sauvegardé les réglages et vérifié le diagnostic ; cela efface des paramètres
et configurations sans réparer nécessairement Qt. Pour un dépannage, consultez d'abord [l'aide](help.md).
