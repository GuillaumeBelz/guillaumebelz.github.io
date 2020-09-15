
# Sémantiques

Qu'est-ce qu'une classe ?

## Un jeu d'enfant

> image cube avec des chiffres + chiffres magnetiques sur tableau blanc. Chiffres sur une feuille de papier ?

qu'est ce que c'est ?

D'un certain point de vue, on peut dire qu'il s'agit de nombres. La valeur 4 represente la meme chose, que ce soit 
sur un cube que sur un magnet. Ces 2 objets representent meme concept abstrait : un nombre. Et on comprend ce que cela 
represente, on peut montrer cette valeur avec les doigts de la main et tout le monde comprendra. Si on copie
l'un des objets, cela representera toujours la meme valeur. Si on compare 2 objets, on va pouvoir dire si leurs valeurs
sont egales ou non.

Mais on peut prendre aussi le point de vue des objets. Et dans ce cas, on va considerer qu'il y a bien 2 objets distincts,
qu'on va pouvoir manipuler separement. Si on duplique un des objets, on aura 3 objets distincts. Le nouvel objet n'est
le meme objet que les 2 precedents. Et si on veut comparer deux objets, ils seront forcement differents. Meme s'ils sont
exactement identiques sur leur aspect physique, ils ne seront jamais a la meme position dans l'espace.

## donner un sens aux choses

Considerons l'image suivante :

> image caractere chinois. 

Il est probable que vous avez compris qu'il s'agit d'un caractère, probablement d'un alphabet d'origine asiatique. 
Vous savez qu'il represente quelque chose dans une langue, qu'on peut prendre un crayon pour le dessiner, qu'on va 
pouvoir le trouver dans un dictionnaire de cette langue.

Si on vous donner ensuite l'information suivante : "c'est un nombre", alors vous saurez beaucoup de choses sur ce
caractere. Plus de choses que simplement l'information qu'on vous a donné. Vous saurez que cela peut etre compté
sur les doits (mais vous ne savez pas combien de mains il vous faudra), qu'il y un nombre avant, un nombre apres,
que vous pouvez réaliser des opérations, l'utiliser pour representer une quantité, etc.
De meme, si on vous dit "c'est un mot" ou "c'est un animal", etc. Ce que vous saurez sur ce que represente ce
caractere est beaucoup plus important que l'information que l'on vous donne.

Definir l'ensemble des proprietes d'un objet et des regles pour le manipuler, c'est donner un sens aux choses. Leur
donner une semantique. Les mettre dans des petites cases. Faire cela n'est pas reducteur, au contraire. Cela permet
de connaitre beaucoup de choses sur un concept. (Le probleme des petites cases vient quand on met les choses dans
la mauvaise petite case ou qu'on oublie que les choses peut etre ranger dans plusieurs petites cases en meme temps).

## Alors, valeur ou entité ?

Au final, est-ce que les cubes et magnets sont des entités ou des valeurs ? Comment savoir si un objet ou un concept
est l'un ou l'autre ?

La reponse est simple : comme vous voulez !
Un objet n'est pas une entité ou une valuer. Il est ce que vous voulez, en fonction de ce que vous avez besoin de faire
avec. Si vous devez ranger les jouets, les objets seront des entités, que vous devrez manipuler un par un. Au contraire,
si vous utiliser les magnets pour apprendre a un enfant a faire une addition, alors ils representeront une valeur.

Adopter un point de vue particulier sur un objet permet de savoir ce qu'il represente et comment on peut l'utiliser. 
Peut-on le copier ? Comparer des objets ? Les manipuler individuellement ?

## Un peu de C++

- Definition et propriete des valeurs (regular type)

- Definition et proprietes des entites

- qu'est-ce qui oblige a donner une semantique particuliere en C++ ? Melange de semantiques ? (Oui, possible, en fonction si 
c'est coherent). Semantiques non stricte/pas correctement definie ? (Oui, mais on perd l'interet des semantiques)

## D'autres exemples de semantiques

- semantique d'indirection

Les refs comme indirection "universelle" ?

```
void foo_ref(A const& ref) { ... }
A a;
foo_ref(a);

void foo_ptr(A* ptr) {
    if (ptr) foo_ref(*ptr);
    else ...
}
A* ptr = ...
foo_ptr(ptr);

std::unique_ptr<A> uptr = ...
foo_ptr(uptr.get());

void foo_uptr(std::unique_ptr<A>&& uptr) {
    foo_ptr(uptr.get());
}
foo_uptr(std::move(uptr));

[](std::unique_ptr<A>&& uptr){ foo_ptr(uptr.get()); }(std::move(uptr));
```

- semantique de collection

Plus generalement, les concepts du C++20 sont des outils syntaxiques pour definir des semantiques.
Idem pour meta-classes (Sutter).

## Autre exemple 

https://zestedesavoir.com/forums/sujet/3703/la-programmation-en-c-moderne/?page=30#p215872

## Valeurs polymorophique...

http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0201r3.pdf

## Résumé

- donner une semantique permet de savoir ce que quelque chose represente et comment le manipuler
- donner une semantique est un choix, en fonction de ce que vous souhaitez faire
- un objet avec une semantique d'entite est un objet qui sera considéré comme manipulable individuellement
- un objet avec une semantique de valeur est une representation d'un concept abstrait, independant de l'objet lui meme.
est l'un ou l'autre ?
