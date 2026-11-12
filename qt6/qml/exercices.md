# Exercices en QML

> [Revenir à la page précédente](README.md)

Le but des exercices est de pratiquer la composition, les propriétés, les liaisons, les layouts et les contrôles. Utilisez
un projet Qt Quick avec CMake et testez chaque écran en le redimensionnant.

## Niveau 1 : composants de base

1. Affichez un titre, un texte et une image dans une fenêtre.
2. Créez une carte composée d'un rectangle, d'un libellé et d'un bouton. Transformez-la en composant réutilisable avec
   une propriété obligatoire pour son titre.
3. Créez un compteur avec un bouton d'incrémentation et un bouton de remise à zéro. Le texte doit rester lié à la valeur.

## Niveau 2 : mise en page et données

1. Réalisez un formulaire avec `ColumnLayout`, `Label`, `TextField` et `Button`. Faites en sorte que le champ occupe
   l'espace disponible.
2. Affichez une liste d'éléments avec `ListView` et un modèle. Ajoutez un état visible lorsque la liste est vide.
3. Créez une petite grille de tuiles dont le nombre de colonnes s'adapte à la largeur de la fenêtre.

## Niveau 3 : robustesse

1. Ajoutez une navigation clavier et vérifiez l'ordre du focus.
2. Ajoutez les états de chargement, erreur et succès à un écran de recherche simulé.
3. Testez les traductions avec un texte long et vérifiez que le contenu ne se chevauche pas.

Pour chaque exercice, séparez les composants quand cela rend le code plus clair et consultez la documentation Qt avant
d'ajouter un contrôle personnalisé.
