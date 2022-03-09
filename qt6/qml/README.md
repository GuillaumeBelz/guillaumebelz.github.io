
# Introduction au QML et à QtQuick (en cours de rédaction)

> [Revenir à la page précédente](../README.md)

Quand on présente un framework comme Qt, la logique voudrait qu'on présente dans un premier temps les fonctionnalités les
plus basiques, puisqu'on ajoute progressivement des couches de complexité par dessus. Par exemple en présentant les modules
dans l'ordre `QtCore` (le module de base) puis `QtGui` (le module graphique de base, qui utilise `QtCore`) et enfin
`QtQuick` (le module graphique qui utilise `QtGui` et `QtCore`).

Cependant, dans ce tutoriel, je vais choisir une approche différente : je vais commencer par la création d'interface graphique
avec `QtQuick`. La raison est que cela permet d'avoir un support visuel simple et ludique pour aborder plusieurs concepts
importants de Qt. Et même si vous n'êtes pas intéressé par la création d'applications graphique, je pense que cela reste une
compétence indispensable a avoir pour l'importe quel développeur C++, au minimum pour créer une fenêtre avec 2-3 boutons.

Pour tester les codes de ce cours, vous pouvez utiliser un projet par défaut `QtQuick Application`, comme vous avez fait dans
le chapitre sur Qt Creator. Vous pouvez également utiliser le site http://qmlweb.github.io pour tester les syntaxes de base du QML.

- [les base du QML et Qt Quick](bases.md)

## Outils et refences

- http://qmlweb.github.io/
- https://www.qt.io/product/qt6/qml-book/
- https://qmlbook.github.io/ (Qt 5)
