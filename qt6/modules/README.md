# Découvrir les modules Qt

> [Revenir au tutoriel Qt 6](../README.md)

Qt est composé de modules installables séparément. N'ajoutez que ceux que l'application utilise et vérifiez leur
disponibilité dans la version, la plateforme, le compilateur et la licence ciblés.

## Modules fréquemment utilisés

- **Qt Core** : objets, événements, chaînes, conteneurs, fichiers, processus, concurrence et autres fonctions de base.
- **Qt GUI** : fenêtres, événements d'entrée, images, polices et primitives graphiques.
- **Qt Widgets** : interfaces C++ composées de widgets classiques.
- **Qt QML / Qt Quick** : moteur QML, éléments visuels et contrôles Qt Quick.
- **Qt Network** : sockets et accès réseau.
- **Qt SQL** : accès aux bases de données via des pilotes.
- **Qt Test** : tests unitaires et outils d'automatisation pour les API Qt.
- **Qt Multimedia** : audio, vidéo et caméra selon la plateforme.

D'autres modules couvrent notamment les ports série, PDF, WebEngine, Quick 3D, WebSockets et la visualisation. Leur
installation et leur prise en charge varient. La [liste officielle des modules](https://doc.qt.io/qt-6/qtmodules.html)
indique le statut, les liens de documentation et les éventuelles restrictions.

Dans un projet CMake, indiquez les composants nécessaires dans `find_package` puis liez les cibles correspondantes.
Par exemple, pour le réseau : `find_package(Qt6 REQUIRED COMPONENTS Network)` puis
`target_link_libraries(MyApp PRIVATE Qt6::Network)`. N'ajoutez pas de bibliothèque par simple supposition : vérifiez
la cible CMake indiquée dans la documentation du module.
