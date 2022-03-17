
# Introduction au QML et à QtQuick

> [Revenir à la page précédente](../README.md)

Quand on présente un framework comme Qt, la logique voudrait qu'on présente dans un premier temps les fonctionnalités les
plus basiques, puisqu'on ajoute progressivement des couches de complexité par dessus. Par exemple en présentant les modules
dans l'ordre `QtCore` (le module de base) puis `QtGui` (le module graphique de base, qui utilise `QtCore`) et enfin
`QtQuick` (le module graphique qui utilise `QtGui` et `QtCore`).

Cependant, dans ce cours, je vais choisir une approche différente : je vais commencer par la création d'interface graphique
avec `QtQuick`. La raison est que cela permet d'avoir un support visuel simple et ludique pour aborder plusieurs concepts
importants de Qt. Et même si vous n'êtes pas intéressé par la création d'applications graphique, je pense que cela reste une
compétence indispensable a avoir pour l'importe quel développeur C++, au minimum pour créer une fenêtre avec 2-3 boutons.

Pour tester les codes de ce cours, vous pouvez utiliser un projet par défaut `QtQuick Application`, comme vous avez fait dans
le chapitre sur Qt Creator. Vous pouvez également utiliser le site http://qmlweb.github.io pour tester les syntaxes de base du QML.

- [Les base du QML et Qt Quick](bases.md), pour comprendre la syntaxe de base du QML.
- [Les types et composants de base](types.md)
- [les matériels](material.md)
- [Le positionnement des composants](positioning.md) permet de placer les éléments graphiques dans un interface.
- [La conception d'interface utilisateur](ux.md), introduction aux principes de l'UX design.
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
