
# Introduction au QML et à QtQuick (en cours de rédaction)

> [Revenir à la page principale du tutoriel](../README.md)

Quand on présente un framework comme Qt, la logique voudrait qu'on présente dans un premier temps les fonctionnalités les
plus basiques, puisqu'on ajoute progressivement des couches de complexité par dessus. Par exemple en présentant les modules
dans l'ordre `QtCore` (le module de base) puis `QtGui` (le module graphique de base, qui utilise `QtCore`) et enfin
`QtQuick` (le module graphique qui utilise `QtGui` et `QtCore`).

Cependant, dans ce tutoriel, je vais choisir une approche différente : je vais commencer par la création d'interface graphique
avec `QtQuick`. La raison est que cela permet d'avoir un support visuel simple et ludique pour aborder plusieurs concepts
importants de Qt. Et même si vous n'êtes pas intéressé par la création d'applications graphique, je pense que cela reste une
compétence indispensable a avoir pour l'importe quel développeur C++, au minimum pour créer une fenêtre avec 2-3 boutons.

## Les bases du QML

### Vue d'ensemble du QML et de QtQuick

Le QML et `QtQuick` sont indisociables, mais pour autant, ce sont bien deux choses différentes. `QtQuick` est le module de
Qt qui fournit les fonctionnalités pour créer une interface graphique. Le QML est un langage basé sur le JavaScript et qui
permet d'utiliser `QtQuick`.

### Paradigme déclaratif

Le QML est un langage déclaratif. Vous connaissez déjà les paradigmes de programmation impératif, qui consiste à décrire la
liste des instructions à executer séquentiellement, et la programmation objet, qui consiste à encapsuler les instructions dans
des objets. La programmation déclaratif consiste à décrire les éléments qui constitue ce que vous souhaitez obtenir.

Pour illustrer, voici comment dessiner un rectangle avec ces trois paradigmes, en pseudo-code.

En impératif :

```
move_to(10, 10)
draw_to(10, 100)
draw_to(100, 100)
draw_to(100, 10)
draw_to(10, 10)
```

En objet :

```
Rectangle r;
r.setPosition(10, 10)
r.setSize(90, 90)
r.draw()
```

Et en déclaratif :

```
Rectangle {
    x: 10
    y: 10
    width: 90
    height: 90
};
```

Aucun paradigme n'est meilleur que les autres, mais certains sont plus adaptés à certains domaines ou problèmes spécifique.
Le déclaratif se prète bien à la description d'interface graphique, par exemple le QML et le HTML.

### Les composants et leurs propriétés

L'exemple précédent en déclaratif est en fait du QML.



composants

propreites

hierarchie de composants








> Composants
 
Dialogues

Layouts, anchors

aspect, material

(animation, views, states)

internationalisation

(3d)

(charts)

touch screen, events

drag and drop
