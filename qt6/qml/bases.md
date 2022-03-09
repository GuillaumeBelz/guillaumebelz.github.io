
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

## Les composants et leurs propriétés








composants

propreites

hierarchie de composants

