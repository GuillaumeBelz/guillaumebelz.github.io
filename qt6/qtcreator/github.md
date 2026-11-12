# Versionner un projet Qt avec Git et GitHub

> [Revenir à la page précédente](README.md)

Git enregistre l'historique du projet. GitHub peut héberger un dépôt Git et faciliter la collaboration ; Git et GitHub sont
deux services distincts. Un projet n'a pas besoin d'être public pour utiliser Git.

## Créer le dépôt

Créez un dépôt local dans le dossier du projet ou clonez un dépôt existant depuis Qt Creator, un terminal ou votre client
Git habituel. Si vous créez le dépôt GitHub avec un fichier `README` ou une licence, évitez de réinitialiser ensuite un
dépôt local non relié : clonez d'abord le dépôt distant, puis créez ou copiez le projet dans ce répertoire.

Qt Creator propose des actions Git pour voir les changements, créer un commit, récupérer les changements distants et
envoyer des commits. On peut également utiliser la ligne de commande ; les mêmes règles Git s'appliquent.

```sh
git status
git add CMakeLists.txt main.cpp main.qml
git commit -m "Add the Qt Quick application"
git push
```

Le premier push peut nécessiter la configuration d'un dépôt distant et une authentification. Suivez les instructions
actuelles de GitHub ; ne saisissez jamais un jeton d'accès dans le code ou dans un fichier versionné.

## Que versionner ?

Versionnez les sources, les fichiers de projet, les ressources et la documentation. N'ajoutez pas les résultats de compilation,
les fichiers temporaires ou les données personnelles locales de Qt Creator. Utilisez un modèle `.gitignore` adapté à Qt/C++
et vérifiez les fichiers effectivement indexés avant chaque commit.

Avant de partager un dépôt, choisissez explicitement une licence pour le code et vérifiez les licences des ressources.
Consultez [Git Book](https://git-scm.com/book/fr/v2) et [GitHub Docs](https://docs.github.com/fr) pour les bases de Git,
les dépôts et l'authentification.
