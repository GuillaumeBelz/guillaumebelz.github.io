
# Introduction au QML et à QtQuick

> [Revenir à la page précédente](../README.md)

L'approche historique pour apprendre à utiliser Qt est de partir des fonctionnalités les plus internes, en C++, et d'aller vers 
les fonctionnalités plus haut niveau (interface graphique, fichier, base de données, réseaux, etc). Cette approche est tout à fait
valide, mais je préfère aborder ce cours dans un approche top-down : aller du plus haut niveau (par le plus proche de l'utilisateur
final, donc par l'interface graphique) vers le bas niveau (les fonctionnalités implémentées en C++).

Pour tester les codes de ce cours, vous pouvez utiliser un projet par défaut `QtQuick Application`, comme vous avez fait dans
le chapitre sur Qt Creator. Vous pouvez également utiliser le site http://qmlweb.github.io pour tester les syntaxes de base du QML.

- [Les base du QML et Qt Quick](bases.md), pour comprendre la syntaxe de base du QML.
- [Le prototypage d'interfaces graphiques](prototype.md)
- [Le positionnement des composants](positioning.md) permet de placer les éléments graphiques dans un interface.
- [Les types et composants de base](types.md)
- [Creer ses propres composants](component.md) composant dynamique, pour modifier en temps reel une UI (ecrire du code QML, changer les couleurs, etc)
- [les matériels](material.md)
- [La conception d'interface utilisateur](ux.md), introduction aux principes de l'UX design, gestion de projets, Agile
- [Exercices](exercices.md)

Certains concepts sont important et feront l'objet des chapitres suivants :

- [les scripts JS](js.md)
- [Les contrôles](controls.md), qui composants plus avancés pour créer une interface (bouton, checkbox, etc).
- [Gérer les interactions avec l'utilisateur](input.md) avec la souris, le clavier, l'écran tactile.
- [Enrichir les UI](ui.md) avec les animations, particules, et

## Outils et refences

- http://qmlweb.github.io/
- https://www.qt.io/product/qt6/qml-book/
- https://qmlbook.github.io/ (Qt 5)
