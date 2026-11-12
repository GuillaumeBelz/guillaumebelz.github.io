# Utiliser Qt en C++

> [Revenir au tutoriel Qt 6](../README.md)
> [Revenir au README du site](../../README.md)

- **Création :** 26 février 2022
- **Dernière mise à jour :** 11 novembre 2026

Qt s'appuie sur le C++ et étend le modèle objet standard avec des fonctionnalités de métadonnées, propriétés et signaux.
Pour commencer, créez un projet CMake dans Qt Creator et reliez explicitement les modules employés.

## QObject, propriétés et signaux

Les classes qui héritent de `QObject` peuvent utiliser le système de méta-objets et les signaux/slots. La macro `Q_OBJECT`
est requise lorsqu'une classe déclare des signaux, des slots ou des propriétés Qt.

```cpp
#include <QObject>
#include <QtQml/qqmlregistration.h>

class Counter : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(int value READ value NOTIFY valueChanged)

public:
    Counter(QObject* parent = nullptr) : QObject(parent) {}

    int value() const { return m_value; }

public slots:
    void increment()
    {
        ++m_value;
        emit valueChanged();
    }

signals:
    void valueChanged();

private:
    int m_value = 0;
};
```

Le système parent-enfant de `QObject` peut gérer la durée de vie des objets enfants. Ne mélangez pas cette propriété
d'ownership avec des pointeurs intelligents sans avoir défini clairement qui possède l'objet.

## Utiliser `Counter` depuis QML

Pour créer le compteur depuis QML, il faut enregistrer la classe C++ comme type QML. `QML_ELEMENT` déclare le type et
CMake le prend en compte quand l'en-tête est ajouté au module avec `qt_add_qml_module`. On peut alors créer un objet
`Counter` directement dans QML, lire `counter.value` et appeler `counter.increment()` :

```qml
import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

ApplicationWindow {
    Counter {
        id: counter
    }

    visible: true
    width: 360
    height: 200
    title: qsTr("Compteur")

    ColumnLayout {
        anchors.centerIn: parent
        spacing: 12

        Text {
            text: qsTr("Valeur : %1").arg(counter.value)
        }

        Button {
            text: qsTr("Incrémenter")
            onClicked: counter.increment()
        }
    }
}
```

Le lien entre `counter.value` et le texte est maintenu automatiquement : lorsque `increment()` émet `valueChanged`, QML
réévalue l'expression. `Counter` est déclaré dans le même module QML que `Main.qml`. L'[exemple complet Qt Quick/CMake](../../articles/exemples/qt6-counter/)
contient le fichier [Main.qml](../../articles/exemples/qt6-counter/Main.qml), le code C++ et le `CMakeLists.txt`.

Depuis la racine du dépôt, avec CMake et Qt 6.5 ou supérieur installés et configurés :

```sh
cmake -S articles/exemples/qt6-counter -B build/qt6-counter
cmake --build build/qt6-counter
```

La déclaration explicite du type dans le module permet aux outils QML de connaître `Counter`. Voir la documentation Qt sur
[les types QML définis en C++](https://doc.qt.io/qt-6/qtqml-cppintegration-definetypes.html) et [l'intégration de QML avec CMake](https://doc.qt.io/qt-6/qt-add-qml-module.html).

## C++ et QML

Gardez l'interface et la logique métier aussi séparées que possible. Exposez à QML une API explicite et typée, par
exemple avec des propriétés, signaux et modèles `QAbstractItemModel`. Les API modernes de Qt permettent d'enregistrer des
types dans un module QML déclaré avec CMake. Évitez les singletons globaux et l'exposition non typée de gros objets sans
nécessité.

Qt 6 recommande CMake pour les nouveaux projets. Consultez le guide officiel [C++ et QML](https://doc.qt.io/qt-6/qtqml-cppintegration-overview.html)
et les pages des classes Qt utilisées pour choisir l'approche adaptée à votre version.

Article rédigé avec l’aide de l’IA.

## Historique des mises à jour

- 2022-02-26 — Création de la page.
- 2026-11-11 — Ajout d'un exemple complet où QML instancie le type C++ `Counter`.
