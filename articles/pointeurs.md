
# Comprendre les pointeurs en C et C++

discussion recente. Gros probleme de comprehension et d'explication sur les pointeurs en general.

Le but va être d'expliquer la complexité de l'utilisation des pointeurs, en essayant de rester pédagogique. Je ne vais pas trop me focaliser
sur les syntaxes en soi, je vais considerer que tu l'as deja vu dans un (mauvais) cours.

Note : les codes d'exemple seront volontairement pas respecteux des bonnes pratiques du C ou du C++, parce que les bonnes pratiques sont differentes entre
ces langages. Le but est juste de donner des codes d'exemple qui seront valides en C et en C++, pour illustrer les notions abordées. **Mais ces codes ne
sont pas a reproduire tel quel dans un vrai code C ou C++.**

## Quelques définitions de base

C'est la partie ennuyse, mais necessaire. Le but ne va pas être de presenter des definitions formelles, mais de presenter les concepts simples 
et concretement, facilemtn retenable.

- portee (en: *scope*) : quand une variable est utilisable dans le code, c'est a dire a partir de quel moment où tu peux commencer a l'utiliser
et le moment où tu ne peux plus ?
- lifetime : quand est objet est utilisable en mémoire, c'est a dire a partir de quel moment où tu peux commencer a l'utiliser et le moment où
tu ne peux plus ?
- ownership : qui est responsable de la destruction d'un objet en mémoire ?

Tu n'as peut etre pas vu ces concepts dans ton cours. Ces concepts sont de plus en plus formalisés dans les langages modernes.
Mais en fait, il faut savoir que meme dans les anciens langages, ces concepts sont valides. C'est juste qu'ils ne sont pas explictent.

Mais les connaitre et les rendre explicite va justement aider a ecrire du code moins invalide.

## Un premier exemple concret avec une variable de type entier

Regardons comment appliquer ces concepts sur un code simple.

```cpp
int main() {
    int i = 0;
    printf("%i", i);
}
```

### La portée

Tu connais peut etre deja ce concept, sans savoir que cela d'appelle "la portee".

Tu as peut etre appris dans un cours C ou C++ qu'une variable peut etre utilisée a partir du moment ou elle est déclarée et s'arrete a la fin du bloc
où elle est déclarée.

Tu peux vérifier cela dans un code, par exemple :

```cpp
int main() {
    {
        printf("%i", i); // ligne 1
        int i = 0;
        printf("%i", i);
    } // ligne 2
    printf("%i", i); // ligne 3
}
```

Si tu compiles ce code, tu vas avoir 2 erreurs de compilation :

- a la ligne 1, la variable `i` n'est pas encore déclarée. Le compilateur ne sait pas à ce moment de l'execution du code qu'il existe une\
variable `i`. Il va l'apprendre a la ligne suivante.
- à la ligne 2, la variable `i` n'existe plus. Le bloc de code qui contient la variable `i` se termine a la ligne 2 et il n'est plus possible
d'utiliser la variable `i` apres cette ligne.

### La duree de vie

La duree de vie est peut etre aussi un concept que tu connais, mais que tu ne sais pas que cela s'appelle comme ca.

Pour savoir quelle est la durée de vie d'un objet, il faut se demander quand cet objet existe en mémoire et quand il arrete d'exister.
Si tu reflechis a cette question, tu ne vois peut être pas la difference avec la portee. Et dans ce code de base, on peut effectivement 
considere que c'est pareil : l'objet existe en memoire lorsque la variable est declaree et arrete d'exister en memoire a la fin de la portee.

Note : en vrai, ce n'est pas exactement comment cela se passe. Mais cette approximation est suffisante pour illustrer ce que je souhaite expliquer dans
ce tuto.

### La propriété

La question derrière le concept de propriete est de savoir qui est responsable de liberer la memoire lorsque celle ci n'est plus utilisee. Si la
memoire n'est pas liberee, elle devient inutilisable petit a petit, jusqu'a ce que ton ordinateur n'a plus de memoire libre et le programme plante.
Il est donc indispensable de liberer la memoire non utilisee.

Dans le code d'illustration, la reponse est : personne en fait. Ou tout au moins, c'est quelque chose qui se fait automatiquement, sans avoir
besoin d'y penser. Tu as declare une variable i, tu as un objet de type entier en memoire et tu n'as pas a te preoccuper de la gestion de la memoire.

C'est ce que les normes C et C++ appelent la durée de stockage automatique (en : *automatic storage duration*). C'est ce que tu utilises par defaut,
sans probablement le savoir, quand tu declares des variables comme `i` dans tes codes. On appelle cela aussi des "variables locales".

Note : si tu utilises les mots-clés `static` ou `extern`, ce n'est plus des variables locales. Ce type de variable ne sera pas détaillé dans ce tutoriel.
L'allocation dynamique de la mémoire (avec `malloc`, `new` ou autre) sera vu dans la suite de ce tutoriel.

### Conclusion sur les variables locales

La grande force de ce type de variables, ce sont les garanties qu'elles apportent sur la qualité du code ! C'est la situation idéal, parce que simple
et sure :

- tu n'as pas à te préoccuper de la mémoire, elle est gérée automatiquement.
- si tu fais une erreur, tu seras obligatoirement prévenu par le compilateur.

Par exemple, si tu utilises une variable hors de sa portée, le code est invalide, le compilateur t'indiquera l'erreur et tu seras obligé de corriger
l'erreur pour réussir à compiler.

Dit autrement : **il n'est pas possible d'écrire un code invalide !**

## Les pointeurs

concept d'indirection. Un objet qui permet d'acceder indirectement a un autre objet. Par exemple pointeur, references, iterateurs, etc.

image concept d'indirection

code exemple 

```cpp
int main() {
    int i = 0;
    int* p = &i;
    printf("%i", *p);
}
```

image p et i

### Pointeur invalide

= utiliser un pointeur qui ne reference pas un objet valide en memoire

exemple de pointeur sur un objet hors de sa portee

```cpp
int main() {
    int* p;
    {
        int i = 0;
        p = &i;
        printf("%i", *p); // ligne 1
    }
    printf("%i", *p); // ligne 2
}
```

Dans ce cas, code invalide, comportement indeterminé. Gros probleme : pas d'erreur de compilation, parfois tres difficile a trouver. J'ai deja passe2
des jours sur ce genre d'erreur. Et certains logiciels tres utilise ont eu (et ont encore) des bugs pendant des annees due a ce type de probleme.

comme le compialteur ne detecte pas d'erreur, il est de ta responsabilite que ton code soit valide.

Comment detecter a l'execution qu'un pointeur invalide ?

Par exemple :

```cpp
void foo(int* p) {
    // quel code ecrire ici pour detecter si p est valide ou pas ?

    printf("%i", *p);
}

int main() {
    int* p;
    foo(p); // ligne 1
    {
        int i = 0;
        p = &i;
        foo(p); // ligne 2
    }
    foo(p); // ligne 3
}
```

Quel code ecrire dans la fonction `foo` pour detecter que l'appel de la ligne 2 est valide et que les appels des lignes 2 et 3 sont invalides ?

La reponse extremenet simple : ce n'est pas possible. Aucun code ne permet de faire cela.

### Pointeur nul







