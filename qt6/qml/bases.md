
# Les bases du QML et Qt Quick

> [Revenir à la page précédente](README.md)

## Vue d'ensemble du QML et de QtQuick

Le QML et `QtQuick` sont indisociables, mais pour autant, ce sont bien deux choses différentes. `QtQuick` est le module de
Qt qui fournit les fonctionnalités pour créer une interface graphique. Le QML est un langage basé sur le JavaScript et qui
permet d'utiliser `QtQuick`.

## Paradigme déclaratif

Le QML est un langage déclaratif. Vous connaissez déjà les paradigmes de programmation impératif, qui consiste à décrire la
liste des instructions à executer séquentiellement, et la programmation objet, qui consiste à encapsuler les instructions dans
des objets. La programmation déclaratif consiste à décrire les éléments qui constitue ce que vous souhaitez obtenir.

Pour illustrer, voici comment dessiner un rectangle avec ces trois paradigmes, en pseudo-code.

Avec le paradygme impératif, le code est une suite d'instructions qui sont exécutées une par une. Le résultat est atteint après que la
dernière ligne a été exécutée.

```
move_to(10, 10)
draw_to(10, 100)
draw_to(100, 100)
draw_to(100, 10)
draw_to(10, 10)
```

En programmation objet, vous créez des objets, modifiez leurs états internes (attibuts ou variables membres) et leur demandez de rendre des 
services (fonctions membres). Comme pour le paradigme impératif, le code est exécuté séquentiellement, ligne par ligne. La différence est
que ce ne sont plus des instructions, mais des manipulations d'objets.

```
Rectangle r;
r.setPosition(10, 10)
r.setSize(90, 90)
r.draw()
```

En programmation déclaratif, il n'y a plus d'exécution séquentielle d'instructions. Le code décrit des composants qui ont un type et des propriétés.
L'ordre dans lequel vous écrivez les propriétés n'a pas d'importance. C'est comme si les lignes étaient exécutées toutes en même temps et le 
résultat est obtenu en une seule fois, après que le composant est créé et paramétré.

```
Rectangle {
    x: 10
    y: 10
    width: 90
    height: 90
};
```

Aucun paradigme n'est meilleur que les autres, mais certains sont plus adaptés à certains domaines ou problèmes spécifique.
Le déclaratif se prête bien à la description d'interface graphique, par exemple le QML et le HTML.

## Un premier exemple de code QML

Pour commencer, voyons un code de base en QML.

```js
import QtQuick

Rectangle {
    width: 500; height: 200
	color: "red"
}
```

Vous pouvez copier-coller ce code dans http://qmlweb.github.io pour tester en ligne ou dans une application QtQuick pour tester localement.

image

Sans surprise, le résultat obtenu est un rectangle (`Rectangle`) rouge (`red`), de 500 pixels de large (`width`) pour 200 pixels de haut (`height`).
Vous voyez immédiatement la simplicité de ce code QML, le code se comprend directement.

plus en detail les differentes partie du code

import, pour utiliser les composants de certains modules. plusieurs modules, qui proposent des composants, `import QtQuick`.

creation d'un composant :

```
TYPE {
    // liste des propriétés
}
```

Il faut un seul composant de base. Donc pas possible d'ecrire :
```js
import QtQuick

Rectangle {
    width: 500; height: 200
	color: "red"
}

Rectangle {
    width: 500; height: 200
	color: "Blue"
}
```

Pour chaque propriété, la syntaxe dans un bloc d'un composant :

```js
propriété: value
```

chaque composant a une liste de propriete et chaque propriete a un type de valeur. Par exemple `500` pour un nombre entier, `"red"` pour
une chaine de caractere (qui contient le nom d'une couleur préexistante, nous reviendrons dessus plus tard).

Faites des testes en changeant les dimensions, la couleur, quel code est valide ou pas.

## Les composants Rectangle et Item

Pour connaitre la liste des proprietes, cf la doc. Par exemple pour `Rectangle` : 
https://doc-snapshots.qt.io/qt6-dev/qml-qtquick-rectangle.html

Dans Qt Creator, egalement possible de placer le curseur sur le type du composant et taper `F1`.

image de la doc

Contient :

- titre "Rectangle" puis "QML type" pour ne pas confondre avec la doc C++
- une courte description
- l'import a utiliser
- l'heritage Item puis "List of all members, including inherited members", on va revenir dessus.
- la liste des propriétés
- le reste de la description détaillée

Globalement pas de difficiluté a lire la doc, mais une chose importante a noter. Dans le code precent, vous avez utiliser les propreites
`width`, `height`, `x` et `y`, mais celles-ci ne sont pas dans la documentation des proprietes de `Rectangle`. La seule presente est `color`.
Si vous cliquez sur `List of all members, including inherited members`, vous les trouverez. 

Vous retrouvez ici un concept que vous connaissez bien en C++ (et plus generalement en prog objet), c'est l'heritage. Comme indiqué a la ligne
`Inherits: Item`, cela signifie que le composant `Rectangle` dérive du composant `Item` et donc il herite de toutes les proprietes de `Item`.
Si vous cliquez sur `Item` pour acceder a sa doc https://doc.qt.io/qt-6/qml-qtquick-item.html, vous trouverez les proprietes manquantes dans
`Rectangle`, c'est a dire `width`, `height`, `x` et `y`.

Quand vous utiliserez un composant, il faudra bien regarder l'ensemble de ses proprietes dont il herite.

Note : quelques nouvelles infos dans la doc de Item.

- `Instantiates: QQuickItem` indique quel type C++ est instancié. Cela sera utile lorsque vous ecrire du code C++ qui devra communiquer avec le QML
- `Inherited By:` suivi d'une longue liste, c'est la liste des composants qui derivent de Item
- `Methods` comme pour les classes C++, qui ont des variables membres (attributs/propriete) et des fonctions membres, les composants QML peuvent
  avoir des methodes. Comme le code QML n'est pas composé de suite d'instructions, l'utilisation des methodes sera vu plus tard.




> Couleurs
