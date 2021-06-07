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

nombreux chapitres pas sur la synaxe, mais l'ecosysteme (IDE = eclispe, outils de build = cmake, test = gtest, debug = dnas eclipse, bonne pratique = outil de formatage dans eclispe + nommages + code clear, conception = regles 3/5/0, doc = cppreference, etc)

Je ne suis pas un grand fan d'eclipse pour le C++ dans l'idee (je ne l'ai pas testé depuis tres tres longtemps). Par contre, je prefere tres largement qu'un auteur se positionne clairement pour un outil, qu'il connait et utilise tous les jours (peu importe que cet outil ne soit pas mon préféré), plutot que de rester generaliste et vague (et donc inutile) sous pretexte de "laisser le choix au lecteur de choisir les outils qu'il prefere".

explications et etapes tres détaillees. tres nombreux exos, fournis dans un repos GitHub https://github.com/TrainingByPackt/Advanced-CPlusPlus

presentation du processus de compilation. Illuster avec Compiler Explorer = (pour moi) présenter ce genre de concept (demangling par exemple) en illustrant avec des captures d'ecran de Compiler Explorer, ca me laisse penser que les auteurs sont de vrais devs C++, qui presentent cet outil parce que c'est comme ca qu'ils travaillent et qu'ils ont un vraie connaissance pratique du C++. C'est le genre d'outils qu'on s'attend a ce qu'un vrai dev connaissance, du fait de sa popularité dans les confs, et qui est un outil pratique auquel on a recours assez facilement dans du dev de tous les jours, quand on se pose des questions sur des details syntaxiques du langage.

presentation des types : explique pourquoi c'est important (permet d'eviter ou detecter certins types d'erreurs)

presente plusieurs syntaxe pour initialiser (sans valeur, avec = ou avec {}) mais pas la syntaxe avec (). Ca me conforte dans l'idée qu'ils connaissent réellement le C++ et qu'ils omettent volontairement cette syntaxe possible a cause du https://en.wikipedia.org/wiki/Most_vexing_parse. C'est la différence avec un cours écrit pas un non dev (prof par exemple, ou un dev qui utilise pleins de langage et ne maitrse pas le C++), qui va souvent faire un catalogue de syntaxes possibles, sans avoir le recul (et le tri) que fait un vrai dev C++. Dit autrement, un vrai dev C++ ne cherchera pas a presenter toutes les syntaxes possibles, mais uniquement celles qui ont un sens dans un vrai code pro.

Code moderne (C++17).

Autre exemple de bonne approche pedago. Au lieu d'entree directement dans la syntaxe des exceptions, explique : 1. pourquoi des exceptions. 2. qu'est-ce que cela change pour le workflow. 3. comment throw et catch. 4. comment gerer avec le RAII. 5. STL (exceptions et RAII). 6. question plus generale : qui est responsable (ownership). 7. move semantic, smart ptr (custom et STL). 8. impact sur les parametres de fonction.

Name lookup, ADL, etc.

Organisation de projets, pimpl

Quelques details pedago criticable :

- Des pointeurs assez tot, sans entrer dans les details (ce n'est pas un cours pour debuter le C++)

- "The first and least preferred initialization mechanism..." : si c'est moins preférée, pourquoi la présenter ? Et en premier ? 

C'est une critique pedago habituelle d'apprendre en premier des syntaxes qui ne sont pas utilisé en vrai dans le monde pro. Mais c'est surtout quand on a le temps de s'habituer a ces syntaxes, parce que cela necessite un desapprentissage et on sait que les gens ont utilise ce qu'ils ont l'habitude. Quand la "mauvaise" syntaxe est apprise en meme temps que la "bonne" et que cette derniere est celle que va utiliser en pratique celui qui apprend, ca ne sera pas forcément un probleme.

D'autant plus qu'ici, l'initialisation des attribus lors de la déclaration de la classes est présentée juste apres et il est bien précisé que c'est la methode recommandée.







2 livres, qui ont changé mon pt de vue sur ce type d'editeur. Bien meileur que mes apriosi (basés sur mes anciennes reviews d'editeur). Conclusion : lisez des livres écrit par des devs et pas par des profs qui ne pratiquent. Les profs n'écrivent pas des livres mieux pedagogiquement, par contre ils sont souvent moins bon techniquement.


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

