
# Le C++17 est arrivé !

Bon, ok, il est arrivé depuis longtemps. Disant que cet article arrive enfain ! Pour ceux qui l'attendait ! Euh... 
Quelqu'un l'attendait ?

Historiquement, le C++ alternait les mises à jour majeures (C++98 et C++11) et mineures (C++03 et C++14). 
Mais le délai entre les deux versions majeures, dû à la complexité pour que les membres du comité se mettent
d'accord sur les fonctionnalités a integerer ou non dans le C++11, a été critiqué.

Le comité a donc choisit de modifier son fonctionnement en profondeur, de facon a simplifier et accélerer les
mises à jour du C++ sans faire de compromis sur la qualité. Cela à conduit à la création des différents sous-groupes
de travail (les WG - "working group" - et SG - "study goup"), chargés de rédiger les propositions de mises a jour, et 
des TS "technical specification", des mises à jour intermediaires sur un sujet spécifique. Les TS permettent d'avoir
une fonctionnalité prête à être intégrée à la mise a jour suivante du C++, ce qui facilite l'ajout de cette fonctionnalité
dans les compilateurs, d'avoir plus de retours sur cette fonctionnalité et de facilité son adoption.

Suivant le fonctionnement historique des mises a jour mineures et majeures et du fait que beaucoup de TS etaient
en bonne progression avant la sortie du C++17, beaucoup d'utilisateurs (et de membres du comité) s'attendaient
a ce que le C++17 soit une version majeure, qui contient plusieurs TS très attendues. Malheureusement, certaines
de ces fonctionnalités attendues n'etaient pas encore finalisées ou assez testées. Le comité a donc du prendre une
décision : retarder la date de sortie de mise a jour du C++ ou ne pas integrer ces fonctionnalités dans le C++17.

Quelque soit le choix que le comité aurait fait, il aurait été critiqué. Il a donc décidé de ne pas sacrifier la
qualité, ni de retarder les mises a jour : les mises a jour auront donc lieu tous les 3 ans, avec les fonctionnalités
disponnibles a moment de la validation. Les fonctionnalités qui ne sont pas pretes devront attendre la mise a jour
suivante. La question de savoir si le C++17 devait être consideré comme une version majeure ou mineure a eté vite
réglee : le principe de versions majeures et mineures est abandonnée, tout simplement.

Nombreuses fonctionnalités qui n'ont pas été adoptée dans le C++17 sont maintenant intégré dans le C++20 !

Ce tutoriel se decompose en 2 parties : les changements dans le langage et ceux dans la bibliothèque standard.

Note : de nouveaux termes en anglais ont été ajouté dans le C++17. Il n'existe pas forcément de traductions
largement acceptées par la communauté francphone. Les termes anglais sont donc utilisés preferentiellement et les
propositions de traductions francaises, si elles existent, sont indiquees.

