
# C++ TL;DR news 

Voici une petite revue d'articles récents, choisis et classés aléatoirement.

## [Top-7 Performance Traps for Every Developer](https://www.cppstories.com/2021/perf-traps/)

Beaucoup de développeurs utilisent le C++ parce que "c'est plus performant". C'est une erreur assez classique. Le C++ permet
d'optimiser, encore faut-il savoir le faire correctement. Cet article résume les 7 principales erreurs que font les
développeurs quand ils veulent optimiser un programme :

1. faire des prédictions sur les performances
2. faire des changements qui n'ont pas d'impact
3. ne pas connaître ses données
4. ne pas connaître son environement technique
5. suivre aveuglément la notation big-O
6. trop optimiser son code
7. écrire de mauvais benchmarks

Comme on le dit souvent : testez votre code, faites du profiling !

L'auteur a également écrit un livre de 175 pages sur l'optimisation du code : "Performance Analysis and Tuning on Modern CPUs", Denis Bakhvalov. 
Ce livre est gratuit et le lien vers le PDF est donné dans l'article.

## [C++20 Concepts - a Quick Introduction](https://www.cppstories.com/2021/concepts-intro/)

Les concepts sont une nouveauté en C++ introduite dans le C++20. Cet outil va permet de repenser complètement la façon d'écrire des templates,
ce qui va avoir un impact majeur sur les codes C++. Cet article est une courte introduction aux concepts, pour bien débuter avec cet outil.

Les concepts sont un moyens de mettre des contraintes sur des paramètres template. Par exemple pouvoir exprimer qu'une paramètre template
doit être un nombre entier ou doit contenir une fonction spécifique. Il est déjà possible de faire de telles choses en C++, par exemple 
avec le SFINAE ou `enable_if`, mais les concepts permettent de simplifier tout cela.

Il existe plusieurs syntaxe pour définir un concept. Par exemple pour contraindre un type d'être un entier, il est possible d'écrire le concept suivant :

```cpp
template <class T>
concept integral = std::is_integral_v<T>;
```

Pour utiliser ce concept, il suffit alors d'utiliser cette contrainte dans un template :

```cpp
template <typename T>
requires integral<T>
void DoSomething(T param) { }
```

Ou la version simplifiée :

```cpp
void DoSomething(integral auto param) { }
```

Il existe également plusieurs concepts prédéfinis dans l'en-tête `<concepts>` : `same_as`, `derived_from`, `convertible_to`, etc.

L'article détaille d'autres syntaxes alternatives. Globalement, ce ne sont pas des synataxes difficiles à retenir, il suffira de se faire un
pense-bête au début, le temps de s'en souvenir. Et de copier-coller-adapter les codes de cet article !

## [Templates - First Steps](http://www.modernescpp.com/index.php/template-get-insight)

Cet article est une introduction très courte sur les templates. L'article est basé sur plusieurs questions simples qu'un 
débutant peut se poser.

**1. Quand utiliser les templates ?**

Pour implémenter une idée générale, qui n'est pas spécifique d'un type particulier. Par exemple "max".

**2. Comment écrire un template ?**

Pour transformer une fonction non template (par exemple qui utilise le type `int`) en template, ajoutez `template <typename T>` et 
remplacez `int` par `T`.

```cpp
template <typename T>              
T max(T lhs, T rhs) {              
    return (lhs > rhs)? lhs : rhs;
}
```

**3. Que se passe-t-il quand un template est instancié ?**

Le compilateur va générer une instance de la fonction template pour chaque type utilisé.

```
max(10, 5);      // genère la fonction max<int>
max(10.5, 5.5);  // genère la fonction max<double>
```

**4. Que se passe-t-il lorsqu'un template est instancié plusieurs fois avec le même type ?**

Une seule instance est creee pour chaque type. L'instanciation est paresseuse : le code est généré uniquement s'il est utlisé (il est
donc possible d'écrire un code template invalide, tant que celui-ci n'est pas instancié).
