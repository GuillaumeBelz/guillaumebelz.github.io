# Positionner les éléments graphiques

> [Revenir à la page précédente](README.md)

Qt Quick propose plusieurs moyens de disposer les éléments. Choisissez un seul mécanisme principal par conteneur : les
ancres, les positionneurs et les layouts ne doivent pas se concurrencer pour contrôler la géométrie d'un même élément.

## Coordonnées et liaisons

Les éléments visuels héritent de `Item` et possèdent notamment `x`, `y`, `width` et `height`. Une liaison permet d'adapter
une dimension au parent, mais les coordonnées fixes seules ne s'adaptent pas bien aux redimensionnements ni aux contenus
traduits.

## Ancres

Les ancres expriment une relation entre les bords ou le centre d'un élément et ceux de son parent ou d'un autre élément.

```qml
Rectangle {
    anchors.fill: parent
    anchors.margins: 16
}
```

Les ancres sont adaptées aux relations simples. Une ancre ne peut être définie qu'entre des éléments appartenant à la même
scène. Évitez les cycles d'ancres ou de liaisons.

## Positionneurs et layouts

`Row`, `Column`, `Grid` et `Flow` positionnent les enfants selon une règle, mais ne redimensionnent pas nécessairement leurs
enfants pour occuper l'espace disponible. Pour une interface qui doit se réorganiser lors du redimensionnement, utilisez
les layouts comme `RowLayout`, `ColumnLayout` et `GridLayout` du module `QtQuick.Layouts`.

```qml
import QtQuick
import QtQuick.Layouts

RowLayout {
    anchors.fill: parent
    spacing: 12

    Text {
        text: qsTr("Nom")
    }
    TextField {
        Layout.fillWidth: true
    }
}
```

Les enfants directs d'un layout sont configurés avec les propriétés attachées `Layout.*` ; ne leur appliquez pas d'ancres
qui entrent en conflit avec le layout. Pour les listes de données, préférez `ListView` et des modèles plutôt que de créer
manuellement un grand nombre d'éléments. Consultez le guide Qt sur [positionnement et layouts](https://doc.qt.io/qt-6/qtquick-positioning-layouts.html)
et la [scalabilité](https://doc.qt.io/qt-6/scalability.html).
