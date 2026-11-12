# Utiliser JavaScript dans QML

> [Revenir à la page précédente](README.md)
>
> [Revenir au README du site](../../README.md)

- **Création :** 15 mars 2022
- **Dernière mise à jour :** 11 novembre 2026

JavaScript sert notamment aux liaisons de propriétés, aux fonctions de présentation et aux gestionnaires de signaux. Une
expression QML reste déclarative tant qu'elle décrit la relation entre les valeurs ; une affectation impérative peut
remplacer cette liaison et empêcher ses mises à jour ultérieures.

```qml
import QtQuick
import QtQuick.Controls

ApplicationWindow {
    visible: true
    width: 360
    height: 240

    Column {
        anchors.centerIn: parent

        Text {
            id: counter
            property int value: 0
            text: qsTr("Compteur : %1").arg(value)
        }

        Button {
            text: qsTr("Incrémenter")
            onClicked: counter.value += 1
        }
    }
}
```

Pour une logique réutilisée, placez les fonctions dans un composant ou dans un module JavaScript importé explicitement.
Gardez le code QML lisible et évitez d'y placer des calculs longs ou bloquants : le code s'exécute sur le thread de
l'interface. Les traitements coûteux, accès réseau ou accès aux données se prêtent mieux à C++ ou à un service asynchrone.

QML utilise le moteur JavaScript de Qt, pas un environnement navigateur ou Node.js. Des API comme `document`, `window`,
`require()` ou les modules Node ne sont pas disponibles automatiquement. Pour les règles précises et les modules JS,
consultez le guide [JavaScript Host Environment](https://doc.qt.io/qt-6/qtqml-javascript-hostenvironment.html).

Article rédigé avec l’aide de l’IA.

## Historique des mises à jour

- 2022-03-15 — Création de la page.
- 2026-11-11 — Actualisation du chapitre et correction du lien vers l'environnement JavaScript de QML.
