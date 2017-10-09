
> Mise a jour : 9 octobre 2017
>
> Retourner au sommaire : [Sommaire](../../index.md)
>
> Chapitre précédent
>
> Chapitre suivant

# Le programme "hello world"

Dans le chapitre précédent, vous avez vu la structure de base d'un programme C++ et un aperçu du processus de compilation.
Cependant, le code présenté ne faisait rien, ce n'était pas très intéressant. Dans ce chapitre, vous allez voir 
comment afficher un message.

Pour illustrer cette fonctionnalité en C++, nous allons prendre le programme "hello world" comme exemple. 
Ce programme permet simplement d'afficher le message "hello, world!". Il est traditionnellement utilisé pour 
montrer la syntaxe de base d'un langage informatique, ce qui explique qu'il possède son propre nom. Vous pouvez 
voir sur Wikipédia ce programme dans différents langages : 
[Wikipédia](http://fr.wikipedia.org/wiki/Liste_de_programme_Hello_world).

Le programme `hello world` en C++ est assez proche du programme minimal présenté dans le chapitre précédent. Vous
pouvez copier-coller le code suivant dans Coliru et l'executer.

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, world!" << std::endl;
}
```

affiche :

```
Hello, world!
```

Par rapport au code minimal, vous pouvez voir que l'on a ajouté deux lignes. La première ligne, qui contient la directive 
`#include`, permet de spécifier un ensemble de fonctionnalités à utiliser par le programme. Le module `iostream` fournit
les fonctionnalités de base pour afficher un message et récupérer des informations saisies par l'utilisateur.

La quatrième ligne, commençant par `std::cout`, permet l'affichage proprement dit. Vous pouvez voir le message 
à afficher "hello, world!" en clair dans le code. Vous pouvez vous amuser à changer le texte et voir ce que cela donne. 
L'instruction `std::endl` permet d'indiquer la fin d'une ligne et donc de passer à la ligne suivante ("End Line", qui 
signifie "fin de ligne")

Ces deux lignes de code permettent d'utiliser le flux de sortie `std::cout` de la bibliothèque standard.

## La bibliothèque standard

Lorsque l'on parle du C++, il faut en fait distinguer deux choses : le langage C++ et la bibliothèque standard. 
Le langage C++ proprement-dit propose uniquement les fonctionnalités fondamentales indispensables pour écrire un 
programme. La conséquence est que de nombreuses fonctionnalités ne sont pas intégrées directement dans le langage 
(même l'affichage d'un message ne fait pas partie du langage).

Heureusement, lorsqu'une fonctionnalité n'existe pas dans le langage, cela ne veut pas dire que vous ne pouvez pas 
utiliser cette fonctionnalité. Il est possible d'écrire des bibliothèques, qui fournissent de nouvelles fonctionnalités 
utilisables en C++. Une bibliothèque est un ensemble de fonctionnalités qui peut être partagée.

**La bibliothèque standard fait partie intégrante du C++, il est indispensable d'apprendre à l'utiliser en même temps 
que le langage, l'un ne va pas sans l'autre.**

Pour utiliser une fonctionnalité de la bibliothèque standard, il faut dans un premier temps le spécifier au compilateur, 
en utilisant la directive de pré-processeur `#include`. Il existe plusieurs syntaxes pour la directive `#include`,
mais pour la bibliothèque standard, vous devez utiliser des chevrons simples :

```cpp
#include <nom_fichier>
```

> **Les directives de pré-processeur**
> 
> Le pré-processeur est un outil qui analyse le code avant le compilateur.
>
> Une directive de pré-processeur permet de paramétrer le comportement du pré-processeur lors de la compilation. Il
> existe différentes directives, vous en verrez plusieurs dans ce cours. Une directive s'écrit toujours avec un dièse suivi 
> de la directive et d'éventuels paramètres optionnels.
>
> Il n'est pas possible d'expliquer le fonctionnement de la directive ''#include'' sans expliquer avant le fonctionnement
> en détail du pré-processeur. Cela sera vu dans un chapitre dédié à la compilation.
>
> Elles sont parfois appellees "directive de compilation".

`iostream` signifie _Input/Output stream_, c'est-à-dire "flux d'entrée et sortie". "Entrée" et "Sortie" 
doivent être compris du point de vue du programme : "entrée" d'information depuis l'extérieur vers l'intérieur du programme 
(par exemple saisie d'un texte par l'utilisateur ou la lecture d'un fichier) et "sortie" d'information depuis le programme vers 
l'extérieur (par exemple afficher un message à l'écran ou enregistrer dans un fichier). La notion de flux est détaillé 
dans la suite de ce chapitre.

## L'espace de nom std

En C++, chaque chose doit avoir un nom unique, pour permettre au compilateur de les identifier correctement. Donner un nom 
n'est pas très compliqué, vous verrez par la suite les quelques règles à respecter. Lorsque l'on a un petit programme de 
quelques centaines ou milliers de ligne, cela pose pas trop de problème pour trouver des noms uniques. Mais dans le cas 
d'un programme de plus grande taille ou utilisant différentes bibliothèques, cela peut devenir très compliqué.

Pour éviter cette contrainte, le C++ permet de regrouper des fonctionnalites ensemble, dans un espace de noms (_namespace_). 
En créant un espace de noms, vous évitez les conflits entre les noms, ce qui peut simplifier vos codes. La bibliothèque 
standard utilise un espace de noms appelé `std`. Vous apprendrez par la suite à créer des espaces de noms, mais pour 
l'instant, voyons comment utiliser l'espace de noms de la bibliothèque standard.

Pour utiliser l'objet `cout` de la bibliothèque standard, il faut donc préciser que celui-ci provient de l'espace de 
noms `std`. Plusieurs syntaxes sont possibles, selon le contexte. Premièrement, vous pouvez spécifier l'espace de noms 
`std` à chaque fois que vous utilisez une fonctionnalité de la bibliothèque standard, en utilisant l'opérateur `::` 
(comme vous l'avez vu dans les codes précédents) :

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, world!" << std::endl;
}
```

Dans ce cas, il faut faire précéder chaque utilisation de `cout` et de `endl` par l'espace de noms `std`.

La deuxième solution est de déclarer que vous allez utiliser une fonctionnalité d'un espace de noms en utilisant le mot-clé 
`using`. Lorsque le compilateur rencontre ensuite `cout`, il saura qu'il faut utiliser l'objet `std::cout` :

```cpp
#include <iostream>
using std::cout;

int main() {
    cout << "Hello, world!" << std::endl;
}
```

Vous pouvez remarquer ici que seul l'objet `cout` est déclaré en utilisant `using`. `endl` n'étant pas déclaré de 
cette manière, il faut l'écrire en utilisant la première syntaxe.

Pour terminer, il est possible d'activer un espace de noms globalement, en utilisant l'instruction `using namespace` :

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, world!" << endl;
}
```

Vous remarquez ici qu'il n'est plus nécessaire d'écrire `std::` devant `cout` et `endl`.

Cette dernière syntaxe semble intéressante, puisque cela évite de réécrire plusieurs fois l'espace de noms `std`. 
Cependant, cela signifie que l'on perd l'intérêt des espaces de noms : si deux espaces de noms proposent le même 
identifiant, il y aura un conflit. Le message d'erreur généré 
par le compilateur ne sera pas forcement explicite, puisqu'il ne détectera pas le conflit d'espace de noms. Les erreurs 
générées seront du type "déclaration ambiguëe" ou "déclaration multiple".

Pour cette raison, il est généralement déconseillé d'utiliser de la syntaxe `using namespace`.

Il est possible de limiter la portée de l'instruction `using` en la déclarant à l'intérieur de la fonction :

```cpp
#include <iostream>

int main() {
    using std::cout;
    cout << "Hello, world!" << std::endl;
}
```

et :

```cpp
#include <iostream>

int main() {
    using namespace std;
    cout << "Hello, world!" << endl;
}
```

Dans ce cours, nous utiliserons systématiquement la première syntaxe, pour des raisons de compréhension. Dans vos 
codes, utilisez de préférence l'une des deux premières syntaxes.

## Les flux standards

Si vous avez regardé un peu la documentation de `std::cout`, vous avez peut-être remarqué qu'il existe d'autres
flux de sortie :

- ''cout'' et ''wcout'' pour les messages standard ;
- ''cerr'' et ''wcerr'' pour les messages d'erreur ;
- ''clog'' et ''wclog'' pour les messages de log.

Par défaut, ces flux s'affichent tous dans le terminal, vous pouvez utiliser n'importe lequel. Le programme suivant :

```cpp
#include <iostream>

int main() {
    std::cout << "le flux cout" << std::endl;
    std::wcout << "le flux wcout" << std::endl;
    std::cerr << "le flux cerr" << std::endl;
    std::wcerr << "le flux wcerr" << std::endl;
    std::clog << "le flux clog" << std::endl;
    std::wclog << "le flux wclog" << std::endl;
}
```

affiche :

```
le flux cout
le flux wcout
le flux cerr
le flux wcerr
le flux clog
le flux wclog
```

Il est possible de faire en sorte de récupérer spécifiquement un flux, par exemple pour l'enregistrer dans un fichier. Certains 
éditeur de code récupèrent par exemple les messages affichés à l'aide de ''std::cerr'' pour afficher les messages d'erreur.

Même si utiliser n'importe quel flux ne change rien à votre programme (si les flux ne sont pas spécifiquement récupérés), il 
est préférable de respecter le rôle de chaque flux et d'utiliser ''std::cerr'' pour les messages d'erreur, ''std::clog'' pour 
les messages d'information et ''std::cout'' pour les messages standards.

> **Internationalisation**
> 
> Le ''w'' signifie que le flux prend en charge les caractères étendus ("w" pour //wide//), c'est-à-dire les caractères 
> avec accent ou provenant d'un alphabet différent de l'anglais. La gestion de l’internationalisation est un peu complexe 
> en C++, en particulier à cause de la multiplicité des normes de codage et la prise en charge très variable selon le système 
> d'exploitation. Cela fera l'objet d'un chapitre dédié.
> 
> Si vous faites le test avec Clang dans Coliru, cela affichera les accents correctement, mais ça ne sera pas toujours 
> le cas (en particulier sous Windows).
> 
> ```cpp
> #include <iostream>
> 
> int main() {
>    std::cout << "àâäéèêëîïôöùû" << std::endl;
> }
> ```

Comment fonctionne un flux ? Imaginer un employé de bureau qui reçoit des dossiers. Il a une grande pile de dossiers, il 
prend le plus ancien, le traite, puis passe au suivant. Peu importe si les dossiers arrivent un par un ou en paquet, il les 
prend toujours un par un.

Les flux standards fonctionnent sur le même principe : ils reçoivent des données (les caractères à afficher), ils prennent 
le premier arrivé, l'affiche puis passent au suivant. L'opérateur permettant d'envoyer des données à un flux est l'opérateur ''<<'' :

```cpp
#include <iostream>

int main() {
    std::cout << "hello";
}
```

Ce code ne doit pas être compris comme signifiant "afficher 'hello'", mais comme "envoyer les caractères 'h', 'e', 'l', 'l' 
et 'o' dans le flux standard 'std::cout'".

Il est possible d'envoyer plusieurs valeurs en série de données dans un flux, en les séparant par plusieurs opérateurs ''<<'' :

```cpp
#include <iostream>

int main() {
    std::cout << "hello" << "world";
}
```

Ce code signifie "envoyer 'hello' et 'world' dans 'std::cout'", ce qui peut être développé en "envoyer les caractères
'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd' dans 'std::cout'". (Remarquez l'absence d'espace entre "hello" et "world").

Il revient au même d'envoyer les données sur plusieurs lignes :

```cpp
#include <iostream>

int main() {
    std::cout << "Hello";
    std::cout << "world";
}
```

Voire même d'envoyer les caractères un par un :

```cpp
#include <iostream>

int main() {
    std::cout << 'h';
    std::cout << 'e';
    std::cout << 'l';
    std::cout << 'l';
    std::cout << 'o';
    std::cout << 'w';
    std::cout << 'o';
    std::cout << 'r';
    std::cout << 'l';
    std::cout << 'd';
}
```

Tous les codes précédent affichent :

```
helloworld
```

