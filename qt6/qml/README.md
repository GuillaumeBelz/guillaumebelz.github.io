
# Introduction au QML et à QtQuick

> [Revenir à la page précédente](../README.md)

L'approche habituelle suivie par les développeurs C++ pour apprendre Qt est de commencer par le C++ et les widgets.
Cette approche est tout à fait valide, mais je pense qu'elle n'aide pas les développeurs C++ à aborder correctement le QML.
Pour cette raison, ce tutoriel est organisé en suivant une autre approche : commencer par le création de l'interface
graphique avec le QML et QtQuick et aller progressivement vers le bas niveau en C++.

Pour tester les codes de ce cours, vous pouvez utiliser un projet par défaut `QtQuick Application`, comme vous avez fait dans
le chapitre sur Qt Creator. Vous pouvez également utiliser le site http://qmlweb.github.io pour tester les syntaxes de base du QML.

- [Les base du QML et Qt Quick](bases.md), pour comprendre la syntaxe de base du QML.
- [Le prototypage d'interfaces graphiques](prototype.md), pour utiliser le QML pour concevoir vos interface graphiques.
- [Le positionnement des composants](positioning.md) permet de placer les éléments graphiques dans un interface.
- [Les types et composants de base](types.md)
- [Creer ses propres composants](component.md) composant dynamique, pour modifier en temps reel une UI (ecrire du code QML, changer les couleurs, etc)
- [les matériels](material.md)
- [La conception d'interface utilisateur](ux.md), introduction aux principes de l'UX design, gestion de projets, Agile
- [Exercices](exercices.md)

Certains concepts sont important et feront l'objet des chapitres suivants :

- [les scripts JS](js.md)
- [Les contrôles](controls.md), qui composants plus avancés pour créer une interface (bouton, checkbox, etc). https://doc-snapshots.qt.io/qt6-dev/qtquickcontrols-index.html
- [Gérer les interactions avec l'utilisateur](input.md) avec la souris, le clavier, l'écran tactile. https://doc-snapshots.qt.io/qt6-dev/qtquick-usecase-userinput.html
- [Enrichir les UI](ui.md) avec les animations https://doc-snapshots.qt.io/qt6-dev/qtquick-usecase-animations.html, particules

> - MVD https://doc-snapshots.qt.io/qt6-dev/qt-labs-qmlmodels-qmlmodule.html

## Outils et refences

- http://qmlweb.github.io/
- https://www.qt.io/product/qt6/qml-book/
- https://qmlbook.github.io/ (Qt 5)
