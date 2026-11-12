# Créer ses propres composants QML

> [Revenir à la page précédente](README.md)

Un composant QML réutilisable est généralement défini dans un fichier `.qml`. Le nom de fichier commence par une majuscule
et devient le nom du type utilisable dans les autres fichiers du même module. Un composant doit exposer clairement les
propriétés et signaux nécessaires, sans révéler ses détails d'implémentation.

Exemple `Greeting.qml` :

```qml
import QtQuick

Item {
    id: root
    required property string name
    property color textColor: "steelblue"

    implicitWidth: message.implicitWidth
    implicitHeight: message.implicitHeight

    Text {
        id: message
        text: qsTr("Bonjour, %1").arg(root.name)
        color: root.textColor
    }
}
```

Le composant peut ensuite être utilisé dans un autre fichier du même répertoire ou module :

```qml
import QtQuick

Item {
    Greeting {
        name: "Ada"
    }
}
```

`required property` rend obligatoire la valeur fournie par le parent. `implicitWidth` et `implicitHeight` donnent une taille
naturelle au composant sans imposer une taille à son parent. Pour un module QML déclaré avec CMake, listez les fichiers avec
`qt_add_qml_module` et séparez l'interface (QML) du traitement métier lorsque celui-ci devient complexe.

Pour un contrôle réutilisable, partez de Qt Quick Controls et personnalisez-le au besoin plutôt que de réimplémenter son
comportement clavier, accessibilité et focus. Voir les [bonnes pratiques Qt Quick](https://doc.qt.io/qt-6/qtquick-bestpractices.html).
