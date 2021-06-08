*[Retourner à la page d'accueil](README.md)*

## Critiques de livres

J'ai déjà publié de nombreuses critiques de livres, mais cela fait plusieurs années que je ne me suis pas mis à jour sur les livres destinés aux débutants, pour savoir quels cours C++ leur conseiller.

Pour le moment, il s'agit du livre "C++ Primer, 5ème édition" de Lippman, Lajoie et Moo (à ne pas confondre avec "C++ Primer Plus"), mais ce livre date de 2012 et commence à se faire vieux. Le but est donc de voir ce que valent les publications récentes, en particulier sur le C++20.

Bien sûr, mes critiques se basent sur des critères et un point de vue personnel sur ce que j'attends d'un livre C++ pour
les débutants. Pour les explications sur comment je juge les livres que je lis : ~~[Mes critères de lecture](critiques-criteres.md)~~.

La majorité des livres sont en anglais.

Pour résumer, dans l'ordre de ce que je recomande parmis les livres dont j'ai écrit une review :

- Advanced C++: très bien, écris par des personnes qui connaissent réellement le C++, aborde aussi l'écosystème C++, beaucoup d'exercices. Peut être lu apres un livre de base.
- Expert C++: intéressant, mais pas sur du public visé, approche ascendante (bas niveau vers haut niveau), quand on a de bonnes bases en C++ et qu'on veut approfondir le bas niveau.


## Advanced C++: Master the technique of confidently writing robust C++ code

**TL;DR : beaucoup de choses intéressante dans ce livre et beaucoup d'exercices proposés. Je le recommande, par exemple comme second livre après un cours débutant.**

De nombreux chapitres ne concernent pas directement la syntaxe du C++, mais tout l'écosystème autour du C++ :
- éditeur (avec Eclispe)
- outils de build (cmake)
- outils de tests (gtest)
- debug (dans Eclipse)
- les bonnes pratiques (outil de formatage dans Eclispe, nommage des variables et fonctions, lisibilité du code, conception avec les règles des 3/5/0)
- la documentation (cppreference.com)

Je ne suis pas un grand fan d'Eclipse pour le C++, je ne l'ai pas testé depuis très très longtemps. Par contre, je préfère très largement qu'un auteur se positionne clairement pour un outil, qu'il connaît et utilise tous les jours (peu importe que cet outil ne soit pas mon préféré), plutôt que de rester généraliste et vague (et donc inutile), sous pretexte de "laisser le choix aux lecteurs de choisir les outils qu'ils préfèrent".

Les explications et étapes pour reproduire les exemples sont très détaillées. Il y a de très nombreux exercices, qui sont fournis dans un dépôt sur GitHub : https://github.com/TrainingByPackt/Advanced-CPlusPlus.

Le code est moderne (C++17), je n'ai pas vu de problème dans les codes présentés.

Quelques exemples de notions abordées dans de livre :

Une présentation du processus de compilation, qui est illustrée avec des captures d'écran de Compiler Explorer. C'est, pour moi, un exemple qui montre que les auteurs sont très probablement des vrais développeurs, qui utilisent professionnellement le C++ : ils présentent cet outil parce que c'est comme ça qu'ils travaillent et qu'ils ont un vraie connaissance pratique du C++. C'est le genre d'outils qu'on s'attend à ce qu'un vrai développeur connaissance, du fait de sa popularité dans les conférences C++, et qui est un outil pratique auquel on a recours assez facilement dans du développement de tous les jours, quand on se pose des questions sur des détails syntaxiques du langage.

Une présentation des types, pourquoi c'est important pour permet d'éviter ou détecter certains types d'erreurs.

Les auteurs présentent plusieurs syntaxe pour initialiser : sans valeur, avec `=` ou avec `{}` mais pas la syntaxe avec `()`. Cela me conforte dans l'idée qu'ils connaissent réellement le C++ et qu'ils omettent volontairement cette syntaxe possible à cause du https://en.wikipedia.org/wiki/Most_vexing_parse. C'est la différence avec un cours écrit par une personne qui n'est pas développeur (un enseignant par exemple, ou un développeur qui utilise pleins de langage et ne maîtrise pas le C++), qui va souvent faire un catalogue de syntaxes possibles, sans avoir le recul (et faire le tri) que fait un vrai développeur C++. Dit autrement, un vrai dev C++ ne cherchera pas à présenter toutes les syntaxes possibles, mais uniquement celles qui ont un sens dans un vrai code professionnel.

Un autre exemple de bonne approche pédagogique, au lieu d'expliquer directement la syntaxe des exceptions, les auteurs abordent progressivement les choses :

1. pourquoi les exceptions.
2. qu'est-ce que cela change pour le workflow.
3. comment utiliser `throw` et `catch`.
4. comment gérer la mémoire avec le RAII.
5. les exceptions et les classes RAII dans la STL.
6. question plus generale : qui est responsable (ownership).
7. la move semantic et les pointeurs intelligents (écrire ses propres classes de pointeurs et utiliser ceux de la STL).
8. impact sur le passage de paramètres de fonction.

Pleins de sujets abordés : le name lookup (ADL), l'organisation d'un projet et Pimpl, les threads, la gestion de fichiers, les tests, les performances.

Quelques détails pédagogiques qui me semblent critiquable, mais qui ne sont pas majeurs :

- les pointeurs nus sont présentés assez tôt, sans entrer dans les détails. Ce qui n'est pas catastrophique, vu que ce n'est pas un cours pour débutants.

- "The first and least preferred initialization mechanism..." : si c'est moins préférée, pourquoi la présenter ? Et en premier ? 

C'est une critique pédagogique habituelle d'enseigner en premier des syntaxes qui ne sont pas utilisées en vrai dans le monde professionnel. Mais c'est surtout quand le lecteur va avoir le temps de s'habituer à ces syntaxes, parce que cela nécessite un désapprentissage. Et on sait que les gens vont utiliser ce dont ils ont l'habitude. Quand la "mauvaise" syntaxe est apprise en même temps que la "bonne" et que cette dernière est celle que va utiliser en pratique celui qui apprend, ca ne sera pas forcément un problème.

D'autant plus qu'ici, l'initialisation des attributs lors de la déclaration de la classes est présentée juste après et il est bien précisé que c'est la méthode recommandée.

Ce livre et le livre suivant ("Expert C++) ont changé mon point de vue sur ce type d'éditeur. J'avais un a priori assez négatif, basé sur mes anciennes reviews. Mais j'ai été surpris de la qualité de ces livres. Ma conclusion : lisez des livres écrits par des développeurs et pas par des enseignants qui ne pratiquent pas. Les enseignants n'écrivent pas des livres significativement mieux pédagogiquement, par contre ils sont souvent moins bon techniquement.


## Expert C++: Become a proficient programmer by learning coding best practices with C++17 and C++20's latest features

Globalement, je dirais que c'est un livre avec une approche ascendante (du bas niveau - processus de compilation, optimisations, call stack, etc - vers le haut). Par exemple, quand il parle de la POO dans le chapitre 3, il s'intéresse à l'organisation des données en mémoire, pas aux questions de sémantiques de la POO.

Et il considère qu'il faut déjà connaître le C++ a priori. Les syntaxes sont utilisées sans être présentées (par exemple les classes).

En termes de structure du livre et de pédagogie, il me semble qu'il est pas complexe à lire, bien organisé, beaucoup d'illustrations, avec une progression logique. C'est pas une structure que l'on rencontre et conseille en général dans les cours débutants, mais pour le propos de ce livre, elle me semble cohérente. 

La question est peut être quel est le public visé ? Difficile à dire. Très clairement, ce n'est pas un livre que je conseille aux débutants (pour eux, mon conseil est C++ Primer ou Tour of C++, suivi de Professional C++), mais peut être comme 3ème livre, pour ceux qui veulent approfondir le bas niveau. Mais ceux qui sont intéressé par ça peuvent aussi regarder des livres comme "Performance Analysis and Tuning on Modern CPUs" de Denis Bakhvalov, plus technique mais aussi plus avancé. Je dirais que l'avantage de ce livre est de regrouper pleins de petites informations que l'on trouve habituellement dans des livres différents. L'inconvenient est que vouloir couvrir pleins de thématiques fait que celle-ci sont survolés de très loin.



## Futures lectures ?


**Pour les débutants**

Pour les débutants, je conseille :

- "C++ Primer", de Lippman, Lajoie et Moo, ou "Programming: Principles and Practice Using C++", de Stroustrup.
- puis "Professional C++", de Gregoire.

**Liste des livres prévus**

Les grands classiques (que j'ai déjà lus en général, mais qui ont une nouvelle édition, ou simplement pour partager mon avis) :

- la trilogie de Stroustrup : "Le langage C++", "Tour of C++" et "Programming: Principles and Practice Using C++". Chacun de ces
livres est destiné à un public différent.
- "C++ Primer", de Lippman
- "Effective Modern C++", de Meyers
- les livres de Josuttis : "C++ Templates", "C++17 - The Complete Guide" et "C++ Standard Library"
- "C++ Concurrency in Action", de Williams
- "Professional C++", de Gregoire

Pour les grands grands classiques très très anciens, je verrai si j'écris une critique. Ces livres sont intéressants à lire,
mais pour les développeurs C++ avancés, pour avoir une meilleure compréhension de l'histoire des pratiques et conceptions en C++,
qui ont amenés à ce que le C++ est aujourd'hui.

- "Elements of programming", de Stepanov
- "Multi-paradigm design in C++", de Coplien
- "Advanced C++, programming styles and idioms", de Coplien
- "Accelerated C++", de Koening et Moo
- plus généralement, la série des "C++ in depth"
- également la série des "Effective C++", de Meyers
- et la série des "Exceptional C++", de Sutter

Les nouveaux livres qui me semblent avoir un bon potentiel.

- "Discovering Modern C++", de Gottschling
- "Exploiting Modern C++", de Butler (qui doit sortir cet été)
- "Functional Programming in C++", de Cukic
- "C++17 In Detail", de Filipek
- "Large scale C++", de Lakos

Les livres que je ne connais pas du tout.

- "C and C++ Under the Hood", de J. Dos Reis
- les livres des éditions Packt
  - Advanced C++ Programming Cookbook
  - C++ System Programming Cookbook
  - Modern C++ Programming Cookbook
  - The C++ Workshop
- les livres des éditions Apress
- "C++ Crash Course", de Lospinoso

Les livres que je ne lirai pas, à priori.

- Les livres des éditions ENI. J'ai déjà fait une critique de 2 livres sur le C++ chez cet éditeur... c'était tellement mauvais que
je n'ai pas fini la lecture.

Ensuite, les livres autres que sur le C++, en fonction de mes envies (surtout sur Qt et les jeux).

- "Game Engine Architecture", de Gregory
- "Game Programming Patterns", de Nystrom
- les livres de Eric Lengyel

