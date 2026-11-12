# Types et contrôles QML

> [Revenir à la page précédente](README.md)

Ce chapitre donne des points de départ ; le module et les propriétés exactes sont indiqués dans la documentation de
chaque type. QML distingue les types visuels des types de valeur, et les éléments graphiques héritent généralement de
`Item`.

## Types visuels courants

- `Item` : conteneur visuel de base sans rendu propre.
- `Rectangle` : forme rectangulaire avec couleur, bordure et rayon.
- `Text` : texte non éditable ; `TextInput` et `TextEdit` servent à la saisie.
- `Image` : image ou ressource graphique.
- `Window` et `ApplicationWindow` : fenêtres d'application. Pour `ApplicationWindow` et ses contrôles, importez
  `QtQuick.Controls`.

Pour une interface complète, utilisez les composants de `QtQuick.Controls` : `Button`, `Label`, `TextField`, `CheckBox`,
`Slider`, `Dialog` et les autres contrôles documentés.

## Propriétés et types

Une propriété QML peut être déclarée avec un type précis :

```qml
property string title: qsTr("Accueil")
property int itemCount: 0
property real spacing: 8.0
property bool busy: false
property color accent: "steelblue"
```

Les types courants incluent `bool`, `int`, `real`, `string`, `url`, `color`, `date`, `var` et des types de Qt ou de
composants QML. `var` accepte différentes valeurs JavaScript, mais un type explicite améliore la lisibilité et l'analyse
statique lorsque le type est connu. `property alias` expose une propriété d'un objet enfant. Les modèles et collections
ont des règles de type et de propriété spécifiques.

Évitez de mélanger des coordonnées codées en dur à la logique d'affichage : préférez des layouts, ancres ou propriétés
implicites pour que l'interface s'adapte. Consultez les références [QML Types](https://doc.qt.io/qt-6/qtqml-typesystem-basictypes.html),
[Qt Quick](https://doc.qt.io/qt-6/qtquick-qmlmodule.html) et [Qt Quick Controls](https://doc.qt.io/qt-6/qtquickcontrols-index.html).
