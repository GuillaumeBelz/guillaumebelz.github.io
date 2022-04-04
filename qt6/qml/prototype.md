
# Prototype

obtenir le resultat visuel attendu peut prendre beaucoup de temps à finaliser. Pas nécessaire (voire contre-productif) d'attendre
la version finale avant de tester l'UI. Le prototypage va permettre de proposer des versions intermédiaires permettant de répondre
à certaines questions d'UX design.

![image](https://pbs.twimg.com/media/BylDyxyIcAAg30b.jpg)

Par exemple : Qt Creator prototype.

Exemple minimaliste, mais suffisant par exemple pour tester sur mobile et tablette et voir si l'UI est utilisable sur ces plateformes.

L'intérêt de faire le prototypage en QML, c'est de pouvoir avoir directement un code d'UI en cours d'amélioration (moins de cout de
integration), découper les tâches par composants graphiques (on va revenir la dessus) et facile pour les designers pour tester directement
certains changements.

## Création de composants

Exemple pour illustrer avec Qt Creator.

Le point important est de découper visuellement les éléments par groupes, en fonction de leurs relations, etc. Pour vous aider,
je vous conseille de changer la taille de la fenêtre et de voir les éléments dont les dimensions sont liées.

Par exemple, pour Qt Creator, on peut faire ce découpage :

```js
import QtQuick 2.0

Rectangle {
	Rectangle {
      x: 0; y: 0
      width: 60; height: 25
      color: "darkgrey"
      Text { text: "vide" }
    }
  	Rectangle {
      x: 61; y: 0
      width: parent.width - 62; height: 25
      color: "darkgrey"
      Text { text: "Barre de projets" }
    }
  	Rectangle {
      x: 0; y: 26
      width: 60; height: parent.height - 28
      color: "darkgrey"
      Text { text: "Modes" }
    }
  	Rectangle {
      x: 61; y: parent.height - 27
      width: parent.width - 62; height: 25
      color: "darkgrey"
      Text { text: "Fenetres de sortie" }
    }
  	Rectangle {
      x: 61; y: 26
      width: parent.width - 62; height: parent.height - 54
      color: "lightgrey"
      Text { text: "Zone centrale" }
    }
  
    Rectangle {
      x: 0; y: 0
      width: 61; height: parent.height
      color: "transparent"
      border { width: 3; color: "green" }
    }
    Rectangle {
      x: 61; y: 0
      width: parent.width - 62; height: parent.height
      color: "transparent"
      border { width: 3; color: "red" }
    }
}
```

Creation de composants pour architecturer le code, en fonction de l'architecture de l'UI.

```js
// main.qml
Window {
    ModeMenubar {
      x: 0; y: 0
      width: 61; height: parent.height
    }
    MainArea {
      x: 61; y: 0
      width: parent.width - 62; height: parent.height
    }
}

// ModeMenubar.qml
Rectangle { ... }

// MainArea.qml
Rectangle { ... }
```

Ce qui est interne (qui n'interagit pas avec le reste) et externe (ce qui interagit avec d'autres composants).

## UX design

## Colors

## Exercices




