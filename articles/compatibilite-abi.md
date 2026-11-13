# Compatibilité ABI : pourquoi s’en soucier quand on crée une bibliothèque ?

- **Créé le :** 12 novembre 2026
- **Dernière mise à jour :** 12 novembre 2026
- **Rédaction :** avec l’aide de l’IA

Une bibliothèque peut conserver la même interface dans ses fichiers d’en-tête et pourtant cesser de fonctionner avec les programmes déjà compilés qui l’utilisent. Pour comprendre pourquoi, il faut distinguer l’interface de programmation de l’interface binaire.

## API et ABI : deux niveaux d’interface

L’**API** (*Application Programming Interface*, ou interface de programmation) est l’interface visible par le développeur dans le code source : fonctions, classes, types et règles d’utilisation.

L’**ABI** (*Application Binary Interface*, ou interface binaire) définit les conventions qui permettent aux éléments compilés séparément de communiquer. En C++, cela comprend notamment la représentation et la disposition des objets en mémoire, les noms de symboles exportés, les conventions d’appel et les tables de fonctions virtuelles.

Une modification de l’API peut obliger à changer le code source puis à le recompiler. Une rupture d’ABI peut empêcher un programme déjà compilé de se lier à la nouvelle bibliothèque, de la charger ou de fonctionner correctement. Par exemple, retirer un symbole exporté ou modifier la disposition mémoire d’un type public peut rendre incompatibles les binaires existants.

Lorsqu’une application utilise une bibliothèque partagée, préserver son ABI permet aux utilisateurs de mettre à jour cette dépendance pour bénéficier d’un correctif de sécurité par exemple, sans attendre la publication d’une nouvelle version de l’application qui intègre ce correctif.

## Ce que cela implique pour une bibliothèque

Lorsqu’une bibliothèque partagée est utilisée par plusieurs applications, ses utilisateurs peuvent ne pas avoir le code source, l’environnement ou le budget nécessaires pour tout recompiler à chaque mise à jour. La compatibilité ABI permet au fournisseur de corriger ou d’améliorer l’implémentation tout en laissant fonctionner les exécutables déjà construits, dans les limites de la politique annoncée.

Cette promesse a un coût de conception : les détails exposés dans les types publics et les symboles exportés deviennent des contraintes pour les versions suivantes. Une modification apparemment locale — par exemple changer la disposition d’une classe publique — peut casser des clients compilés avec l’ancienne disposition. Il est donc utile de décider tôt :

- quelles parties de l’interface sont publiques et stables ;
- quelles ruptures sont acceptables et à quelles versions elles peuvent arriver ;
- quels compilateurs, plateformes, options et types de bibliothèques sont couverts ;
- comment vérifier les changements d’ABI et annoncer une incompatibilité.

Pour réduire les contraintes, une bibliothèque peut limiter les détails de représentation exposés, par exemple en utilisant des types opaques ou une implémentation privée derrière son interface publique. Ce choix ne remplace pas une politique de compatibilité ni des tests sur les binaires réellement pris en charge.

### Tester la compatibilité ABI

Un test de compatibilité ABI compare l’interface binaire publiée par une ancienne version de la bibliothèque avec celle de la nouvelle. Il faut comparer les versions construites pour la même plateforme, la même architecture, la même chaîne d’outils et la même configuration que celles couvertes par la promesse de compatibilité. On peut automatiser cette comparaison dans l’intégration continue et examiner chaque changement signalé avant de publier.

[libabigail](https://sourceware.org/libabigail/) est un ensemble d’outils d’analyse d’ABI. Son outil `abidiff` compare deux bibliothèques partagées au format ELF (*Executable and Linkable Format*), utilisé notamment sous Linux, et produit un rapport des différences.

La comparaison automatique doit être complétée par un test concret : lancer, sans le recompiler, un programme construit avec l’ancienne bibliothèque contre la nouvelle. Ce test vérifie le scénario d’un utilisateur qui met à jour une bibliothèque partagée en conservant son application. Il faut le répéter pour les environnements annoncés comme pris en charge. Ces vérifications détectent des problèmes ABI, mais ne remplacent pas les tests fonctionnels ni les contrôles de sécurité.

## L’exemple de Qt

Qt documente séparément la compatibilité source et la compatibilité binaire. Sa politique vise à maintenir, entre versions d’une même version majeure, la compatibilité binaire **vers l’avant pour les applications déjà compilées** : une application construite avec Qt 6.0 devrait pouvoir fonctionner avec une version ultérieure de Qt 6, mais l’inverse n’est pas garanti. La promesse s’applique aux versions de Qt compilées dynamiquement, et seulement avec le même environnement système, la même chaîne d’outils et la même configuration ; les préversions et certaines API expérimentales en sont exclues. Les conditions détaillées figurent dans la documentation des [versions et garanties de compatibilité de Qt](https://doc.qt.io/qt-6/qt-releases.html#compatibility-promises).

La [documentation de sécurité de Qt](https://doc.qt.io/qt-6/security.html) décrit aussi le traitement des vulnérabilités et les mises à jour de sécurité. Qt indique que ses versions correctives peuvent inclure des corrections de bogues, y compris des problèmes de sécurité, comme l’explique sa [politique de versions](https://doc.qt.io/qt-6/qt-releases.html#versioning). Une compatibilité binaire prévisible facilite donc le déploiement d’une version corrigée pour les clients qui dépendent de cette promesse.

## Conséquences pour la sécurité

Une rupture d’ABI n’est pas, à elle seule, une vulnérabilité. En revanche, un décalage entre le contrat binaire attendu par un programme et celui fourni par une bibliothèque peut provoquer des erreurs de chargement ou de liaison, des plantages et, selon la nature du décalage, des erreurs de mémoire susceptibles d’avoir des conséquences de sécurité.

Il existe aussi un risque opérationnel : si une mise à jour contenant un correctif est difficile à adopter parce qu’elle casse les binaires des utilisateurs, certaines équipes peuvent la retarder ou rester sur une version non maintenue. L’[OWASP Top 10 sur les composants vulnérables et obsolètes](https://top10.owasp.org/2021/A06_2021-Vulnerable_and_Outdated_Components/) recommande de mettre à jour les dépendances dans des délais adaptés au risque et rappelle que les bibliothèques mises à jour doivent être testées en compatibilité.

La compatibilité ne doit donc pas servir de prétexte à conserver indéfiniment une implémentation vulnérable. Une politique de versions claire, des tests ABI, un inventaire des dépendances et un processus de mises à jour de sécurité permettent de concilier stabilité des clients et corrections rapides. La compatibilité binaire réduit les frictions de mise à jour ; elle ne garantit ni l’absence de vulnérabilités ni le maintien éternel d’une version.

## Historique des mises à jour

- 2026-11-12 — Création de l’article.
