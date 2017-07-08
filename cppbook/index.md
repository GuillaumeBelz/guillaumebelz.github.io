
=# Débuter en C++ moderne - Tome 1=

** Cours de C++ moderne **

** Création d'applications en C++ moderne par la pratique **

# Avant-propos

  * [Introduction]()
  * [Comment suivre ce cours]()
  * [Comment réaliser les exercices de ce cours]()
  * [Demander de l'aide et aider les autres]()
  * [normes et compilateurs]()
  * [autres langages]()

# Premiers pas

## Langage

  * [Programme minimal]()
  * [Hello world]()
  * [chaines]()
  * [qualité logiciel]()
  * [erreurs]()

## Compléments

  * [histoire]()
  * [doc]()

# Bases du calcul numérique

## Langage

  * [Calculs arithmétiques]()
  * [Logique et calcul booléen]()
  * [Nombres réels]()
  * [string]()

## Compléments

  * [boole et morgan]()
  * [complex]()
  * [virgule fixe]()
  * [ratio]()

# Conserver les valeurs en mémoire

## Langage

  * [rvalue et lvalue]()
  * [enum class]()
  * [inférence de type]()
  * [types en détail]()
  * [informations sur les types]()
  * [définir ses types]()

  * aller plus loin : discussion intialiser ou non par defaut ses variables (membre ou non)

## Compléments

  * [Nombres aléatoires]() 

# Collections et algorithmes

## Langage

  * [collection]() 
  * [map]()
  * [collection2]() 
  * [comparer]()
  * [rechercher]()
  * [itérateurs]()
  * [autres collections]()

## Compléments

  * [bitset]()

# Chaînes avancées et expressions régulières

## Compléments

  * [string étendu]()
  * [expressions régulières]()
  * [expressions régulières 2]()
  * [expressions régulières 3]()
  * [validation motifs]()

# Créer des fonctions

## Langage

  * [fonctions]()
  * [paramètres arguments]()
  * [references]()
  * [surcharge fonctions]()
  * [prédicats]()
  * [fonctions génériques]()

## Compléments


  * [callable]()
  * [perfect forwarding]()
  * [rvalue, lvalue et leur amis]()
  * [pile]()
  * constexpr
  * [aliasing]()

# Créer des algorithmes

## Langage

  * [structure de contrôle]()
  * [boucles]()
  * [recursivite]()

## Compléments

  * [Pair et tuple]()
  * [variadic]()
  * [static](), mémoire static, string table
  * [init C++17]()
  * break, continue, goto


# Entrées et sorties

<note warning>Les chapitres suivants sont encore en cours de rédaction, voire à l'état d'ébauche. N’hésitez pas a faire des remarques ou poser des questions sur le forum de [http://zestedesavoir.com/forums/|Zeste de Savoir]() ou de [http://openclassrooms.com/forum/sujet/nouveau-cours-c-moderne|OpenClassroom]().</note>

## Langage

  * [io]()
  * [ligne de commande]()
  * [cin]()
  * [fichier]()

## Compléments

  * cout en detail
  * variables d'environnement 
  * signals, abort, exit
  * gestion des buffers avec les streams, concepts de latence, debit, cache.


# Conception logicielle et fonctions

  * [conception]()

## Langage

  * [compilation séparée]() https://akrzemi1.wordpress.com/2016/11/28/the-one-definition-rule/
  * pré-condition et post-condition
  * interface publique. "Easy to use correctly, hard to use incorrectly" - Scott Meyers. Design interface : s'adapter aux conventions qui existent. Etre consistant  * strong interface, comment le typage fort peut renforcer l'utilisation correcte d'une api
  * [gérer les erreurs]()
  * [tests unitaires]()

  * macro, pré-processeur, directive de compilation
  * [performances]()

https://www.famkruithof.net/uuid/uuidgen

# Les bibliothèques logicielles réutilisables

  * [conception bibliothèque]()
  * documentation, commentaire, codes d'exemple
  * physical design
  * namespace, dépendances. l'espace de noms global et anonyme
  * modules, conception en couches, utilisation de n-1 et n+1
  * abi et C

  * variables globales, étude de std::cout


# Les outils de développement

  * [IDE]()
  * [build system]()
  * [compilateur]()
  * [débogueur]()
  * [validation statique]()
  * [validation style]() 
  * [documentation]()
  * [gestion versions]()
  * [tests]()
  * [déployer]()
  * [bug tracker]()

https://arne-mertz.de/2017/04/continuous-integration-travis-ci/
https://github.com/lefticus/cppbestpractices/blob/master/02-Use_the_Tools_Available.md

# Les classes à sémantique de valeur # 

  * [poo]()

## Langage

  * [classe]()
  * [constructeurs]()
  * [opérateurs]()
  * [conversions]() http://cpptruths.blogspot.de/2015/11/covariance-and-contravariance-in-c.html
  * * allocation et liberation de ressources, raii, association et composition

## Compléments

  * [swap]()
  * [SOLID]()
  * [design pattern]()
  * [object function]()
  * chaining methods

## Pratiquer

  * [sémantique conteneur]()
  * [string_view]()
  * [user iterator]()
  * [wrapper]()
  * traits : adapter les type_traits pour fonctionner avec vos classes

# Les classes à sémantique d'entité # 

## Langage

  * [sémantique d'entité]()
  * [héritage]()
  * [polymorphisme et pointeurs]()
  * [fonction virtuel]()
  * [invariant de classe]()

## Compléments

  * [Pile et Tas](), création et destruction
  * théorie des graphes, arbres
  * héritage multiple
  * pourquoi les manipuler via indirections ? aliasing, smart ptr

  * points de variation : comment faire varier le comportement d'un programme ? (directive de compilation, template police/traits, héritage, DP stratégie) Quand utiliser quelle technique ? Impact sur la qualité du code (maintenabilité, évolutivité, etc)
  * durée de vie et propriétaire des objets

calculateur de systeme de vote de condorcet

## Pratiquer

  * jeu d'échec
  * évaluation de script (if, for, etc)
  * article citation format (type medline)
  * http://progdupeu.pl/forums/sujet/205/banque-dexercices
  * factory. Créer une fonction factory avec switch, avec create, avec allocator
  * système de gestion d'événements

# Bibliothèques externes

  * [libs]()
  * internationalisation : ICU
  * interface utilisateur : Qt, SFML
  * réseau : boost.asio, POCO, QtNetwork
  * XML : QtXml
  * base de données : QtSql
  * web : wt
  * script : boost.python, QtScript
  * https://cpp.libhunt.com/
  * http://fffaraz.github.io/awesome-cpp/
  * http://en.cppreference.com/w/cpp/links/libs

=# Le C++03=

  * [old C++]()
  * [string style C]()
  * [tableaux style C]()
  * [pointeurs style C](), surcharge opérateurs d'accès -> * &, etc + surcharge opérateur new et delete, pointeur de fonction

## Pratiquer (A trier)

  * [parser]() 
  * [eval]()
  * [intervalle]()
  * [zip unzip]()
  * [chiffres]()
  * [modèle texte]()
  * XML
  * [tableur]()
  * [bitmap]()
  * [sample]() 
  * [poker]()
  * [sous chaines]()
  * [zebra puzzle]() 
  * [scrabble]()
  * [regex parser]()
  * imagerie : génération d'arbres avec L-System
  * implémenter des générateurs aléatoires cryptographiques
  * créer un systeme d'allocation memoire (tas). Allocator, utilisation des espaces libres, défragmentation
  * buffer avec vector
  * http://martinfowler.com/bliki/CQRS.html
  * https://en.wikipedia.org/wiki/Fizz_buzz

Notes:

  * conversion implicite et explicite
  * indirections, adaptateurs, raw ptr/ref
  * "Make interfaces easy to use correctly and hard to use incorrectly" - Scott Meyers

https://sciencetonnante.wordpress.com/2015/10/16/la-machine-a-inventer-des-mots-video/
https://github.com/fffaraz/awesome-cpp
https://github.com/rigtorp/awesome-modern-cpp
https://www.reddit.com/r/dailyprogrammer/
http://morpheo.inrialpes.fr/people/Boyer/index.php?id=m1-mosig
http://www.iquilezles.org/www/index.htm

# Exos

  * https://openclassrooms.com/forum/sujet/exo-debutant-poo-gestion-sure-des-codes-derreur
  * https://openclassrooms.com/forum/sujet/optimisation-de-code-10
