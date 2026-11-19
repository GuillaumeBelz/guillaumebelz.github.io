# Technology Radar vol. 35 : au-delà du modèle, l’ingénierie de l’IA

- **Créé le :** 16 novembre 2026
- **Rédaction :** avec l’aide de l’IA
- [Retour au README du dépôt](../README.md)

Le Technology Radar de Thoughtworks est une photographie, deux fois par an, des outils, techniques, plateformes, langages et frameworks que ses équipes ont rencontrés sur leurs projets. Le [volume 35](https://www.thoughtworks.com/content/dam/thoughtworks/documents/radar/2026/11/tr_technology_radar_vol_35_en.pdf), publié en novembre 2026, met les agents d’intelligence artificielle (IA) au premier plan. Mais ses quatre thèmes racontent une évolution plus large : la difficulté n’est plus seulement d’obtenir une réponse d’un modèle, c’est de construire l’environnement technique et organisationnel nécessaire pour en tirer un résultat fiable.

Cet article propose une lecture orientée développement logiciel du rapport, sans prétendre en résumer chacun des blips. Le [site officiel du Radar](https://www.thoughtworks.com/radar) présente l’édition interactive, les quadrants et l’ensemble des recommandations.

## Comment lire le Radar ?

Chaque élément du Radar — un *blip* — est placé dans un quadrant (techniques, plateformes, outils, langages et frameworks) et dans un anneau qui traduit le conseil de Thoughtworks :

- **Adopt** : envisager sérieusement son utilisation ;
- **Trial** : essayer sur des projets, avec moins de recul que pour les éléments d’Adopt ;
- **Assess** : examiner et évaluer, sans nécessairement lancer un essai ;
- **Caution** : considérer des solutions de remplacement ou éviter l’approche.

Ces anneaux expriment un avis issu de l’expérience des équipes Thoughtworks. Ils ne constituent ni une certification ni une garantie de résultat pour tous les contextes. Un élément placé dans *Adopt* reste à évaluer selon les contraintes du projet ; *Caution* signale une expérience négative ou un risque à prendre en compte, pas une interdiction universelle.

## 1. L’ingénierie du harness passe à l’échelle

Un *harness* d’agent est l’environnement qui encadre son travail : instructions, outils, mémoire et contexte, règles d’accès, orchestration, mécanismes de contrôle et retours d’évaluation. L’expression *harness engineering* désigne le travail de conception et de maintenance de cet ensemble.

Le Radar observe que ces éléments deviennent une discipline cohérente plutôt qu’une accumulation de fichiers de configuration. L’écosystème comprend notamment des plugins partageables, des marchés de plugins et des outils pour les installer et les versionner. Il met aussi en avant l’évaluation de la qualité du harness, les boucles de retour et l’idée d’un harness capable de s’améliorer.

Ce changement a une conséquence pratique : les instructions et les garde-fous sont du logiciel à maintenir. Une règle de sécurité ou de qualité n’est utile que si elle fonctionne réellement. Les équipes doivent donc pouvoir l’évaluer, détecter ses régressions et savoir qui en est responsable.

Deux signaux illustrent les tensions qui accompagnent cette évolution. La divulgation progressive du contexte — fournir d’abord les informations essentielles, puis charger des détails à la demande — apparaît dans l’anneau *Adopt*. À l’inverse, le gonflement des instructions d’agent est placé en *Caution* : multiplier les consignes peut les rendre contradictoires, obsolètes et difficiles à suivre.

## 2. Le meilleur choix n’est pas toujours le modèle de pointe

Le deuxième thème invite à sortir du réflexe consistant à utiliser systématiquement le modèle propriétaire le plus puissant. Le Radar relève la progression des modèles à poids ouverts (*open-weight models*) et des modèles locaux pour le développement logiciel. Les poids sont disponibles publiquement, mais les conditions d’usage, de modification et de redistribution restent propres à chaque modèle : « à poids ouverts » ne signifie pas automatiquement « libre de toute contrainte ».

Ces modèles peuvent offrir des avantages de coût, de confidentialité et de maîtrise de l’hébergement, voire réduire la dépendance à un fournisseur. Ils introduisent aussi des responsabilités : il faut fournir ou opérer l’infrastructure, suivre les performances et comparer les coûts réels. L’édition place les modèles à poids ouverts dans *Trial* et les modèles locaux de génération de code dans *Assess* ; elle ne recommande donc pas de remplacer aveuglément un modèle par un autre.

Le choix peut dépendre de la tâche : un modèle coûteux et très capable n’est pas forcément nécessaire pour chaque opération, tandis qu’un modèle plus petit peut être insuffisant pour un raisonnement complexe. Le Radar met en garde contre l’usage systématique des modèles de pointe et fait du routage — sélectionner un modèle adapté à chaque demande — un sujet d’ingénierie à part entière.

## 3. Faire travailler plus d’agents déplace le goulot d’étranglement

Le volume 35 décrit plusieurs façons d’augmenter le travail confié aux agents : lancer plusieurs sessions en parallèle, utiliser des sous-agents pour des tâches ciblées ou exécuter des travaux plus longs en arrière-plan, parfois sans supervision immédiate.

Le bénéfice est évident : plusieurs tâches peuvent avancer en même temps. Mais la capacité humaine, elle, ne se multiplie pas au même rythme. Lire les changements, répondre aux demandes d’approbation, comprendre les échecs et intégrer les branches sollicite l’attention des développeurs. En aval, les changements générés peuvent également arriver plus vite que la revue ou le processus de livraison ne peut les absorber.

Le Radar avertit du risque de *human-in-the-loop theater* — une présence humaine qui se réduit à approuver des actions ou des changements qu’elle n’a pas réellement le temps d’évaluer. Il recommande plutôt d’ajuster le niveau de revue au risque : réserver une vérification humaine approfondie aux changements à fort impact ou difficiles à annuler, et s’appuyer sur des contrôles automatisés éprouvés pour les cas plus simples.

La leçon n’est donc pas « lancer plus d’agents », mais mesurer où le flux de travail se bloque. Avant d’ajouter des sessions parallèles, il faut vérifier que l’équipe peut encore examiner les résultats, que les tests apportent des signaux fiables et que les changements peuvent être livrés.

## 4. L’IA devient aussi un problème d’infrastructure

Le thème « Construire l’usine d’IA » porte l’attention au-delà des applications et des assistants de développement. À mesure que les usages augmentent, le coût de l’IA dépend non seulement du prix facturé par modèle, mais aussi du choix du modèle, du routage des requêtes, du regroupement des calculs, des transferts de données et de l’efficacité de la plateforme sous-jacente.

Le Radar décrit des plateformes industrielles qui organisent ces ressources à grande échelle. Kubernetes, une plateforme d’orchestration de conteneurs, prend une place importante dans cette infrastructure. Des outils comme KServe et KAITO concernent le déploiement des modèles et la gestion des ressources de calcul ; d’autres, comme LiteLLM, facilitent l’aiguillage entre modèles et fournisseurs. Le stockage et les réseaux à haut débit font également partie de l’équation.

Pour une équipe produit, cette tendance ne signifie pas qu’il faut construire sa propre plateforme d’IA. Elle rappelle plutôt que les coûts et les contraintes opérationnelles peuvent se trouver sous la couche visible de l’application. Les décisions d’architecture devront tenir compte de la consommation, de la résidence des données, de la disponibilité et de l’exploitation, pas seulement de la qualité d’une réponse isolée.

## Du pilote à l’adoption à l’échelle : cinq défis transversaux

Dans son article publié le 4 novembre 2026, Chris Ford, architecte en chef chez Thoughtworks, propose une lecture complémentaire du volume 35. Il décrit les difficultés qui apparaissent quand l’IA agentique passe d’expériences locales à un mode de fonctionnement durable dans plusieurs équipes. Ces points éclairent les quatre thèmes du Radar, mais ne constituent pas des thèmes ou des recommandations supplémentaires du rapport.

1. **Partager le contexte et les attentes.** À l’échelle d’une organisation, le problème n’est pas seulement la quantité de contexte fournie au modèle : les équipes doivent aussi partager les conventions, les critères de réussite et la définition du travail terminé. Un contexte commun et évalué évite que chaque équipe réinvente ses propres règles.
2. **Maîtriser le coût par résultat.** L’économie des jetons (*tokenomics*) ne se résume pas à réduire le prix d’une requête. Le coût doit être rapporté à une tâche achevée et à sa qualité. Le routage vers différents modèles, les budgets et l’attribution des dépenses par équipe ou par flux de travail deviennent des leviers de pilotage.
3. **Préserver une revue réellement humaine.** Le volume de changements peut dépasser la capacité des personnes à les comprendre. Revoir l’intention et la spécification avant le code, limiter le nombre de travaux simultanés par personne et mesurer les délais ainsi que les reprises aide à éviter une validation humaine devenue formelle.
4. **Faire évoluer la sécurité avec l’usage.** Les agents étendent la chaîne d’approvisionnement à leurs paquets, outils, accès aux secrets et actions sur l’intégration continue. L’isolation, des permissions minimales et une analyse de risques qui inclut l’agent et ses outils sont nécessaires dès le début, puis à mesure que le volume augmente.
5. **Traiter le harness comme un produit de plateforme.** Les équipes dépendent de plus en plus du contexte, des accès, de l’évaluation, de l’observabilité et du contrôle des coûts qui entourent les modèles. Les gérer comme une plateforme partagée suppose un responsable identifié, un parcours standard, une feuille de route, un objectif de niveau de service et des règles d’évolution et de retrait.

Cette lecture transversale rappelle qu’un pilote peut fonctionner grâce aux connaissances tacites d’une petite équipe. Pour passer à l’échelle, ces connaissances doivent devenir des mécanismes partagés, mesurables et maintenus.

## Ce que ces tendances changent pour les équipes

Les quatre thèmes convergent : la valeur ne vient pas uniquement du modèle. Elle dépend aussi de la façon dont le contexte est préparé, dont les accès sont limités, dont les erreurs sont repérées et dont le travail est intégré au flux de livraison.

Quelques points de départ raisonnables :

1. **Choisir une tâche circonscrite** et évaluer son résultat avant d’élargir l’autonomie ou le nombre d’agents.
2. **Encadrer l’agent** avec des permissions adaptées et un contexte utile, plutôt qu’avec un long ensemble de consignes redondantes.
3. **Vérifier les garde-fous** avec des tests et des évaluations régulières ; leur présence dans un dépôt ne prouve pas leur efficacité.
4. **Préserver une revue humaine utile** en l’adaptant au risque et à la capacité réelle de l’équipe.
5. **Mesurer les résultats**, la qualité et les délais de livraison plutôt que le volume de code généré.
6. **Comparer les modèles sur la tâche réelle**, en tenant compte des coûts, de la confidentialité et de l’exploitation.

Le Radar n’est pas une feuille de route à recopier. C’est un ensemble de signaux à confronter à son propre contexte. Son message le plus important pour les équipes de développement est peut-être celui-ci : industrialiser l’usage d’agents demande autant de rigueur dans l’environnement, l’évaluation et la livraison que dans le choix du modèle.

## Sources

- [Technology Radar, volume 35 — Thoughtworks (PDF anglais)](https://www.thoughtworks.com/content/dam/thoughtworks/documents/radar/2026/11/tr_technology_radar_vol_35_en.pdf), novembre 2026.
- [Technology Radar — présentation et version interactive](https://www.thoughtworks.com/radar), consulté le 15 novembre 2026.
- [Macro trends in the tech industry | November 2026 — Chris Ford, Thoughtworks](https://www.thoughtworks.com/en-us/insights/blog/technology-strategy/macro-trends-tech-industry-november-2026), publié le 4 novembre 2026 ; consulté le 16 novembre 2026.

Le statut et les références du volume ont été vérifiés le 15 novembre 2026 ; l’article de Chris Ford a été consulté le 16 novembre 2026.

## Historique des mises à jour

- 2026-11-15 — Création de l’article, avec une synthèse des quatre thèmes du volume 35 et leurs implications pour les équipes de développement.
