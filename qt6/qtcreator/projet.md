# Créer un projet avec Qt Creator

> [Revenir à la page précédente](README.md)

Ce guide crée un petit projet Qt Quick et vérifie que Qt Creator et le kit fonctionnent. Les noms de modèles changent selon
la version de Qt Creator ; choisissez un modèle Qt Quick/C++ utilisant **CMake** et le kit desktop installé. Pour un test
Widgets, sélectionnez plutôt un modèle Qt Widgets.

1. Dans **File > New Project**, sélectionnez un modèle Qt Quick. Donnez au projet un nom simple et choisissez un répertoire
   de travail distinct du répertoire d'installation de Qt.
2. Gardez CMake comme système de construction. Qt 6 utilise et recommande CMake pour les nouveaux projets ; `qmake` reste
   pris en charge pour les projets existants.
3. Sélectionnez un kit valide. Pour un premier essai, un seul kit desktop est suffisant.
4. Terminez l'assistant, puis examinez le `CMakeLists.txt`, le point d'entrée C++ et les fichiers QML créés.
5. Construisez puis exécutez le projet. Modifiez le texte ou le titre de la fenêtre dans le QML et relancez pour vérifier
   que les changements sont visibles.

Un fichier `CMakeLists.txt` minimal pour une application Qt Quick peut ressembler à ceci (les modèles générés peuvent
organiser le code différemment) :

```cmake
cmake_minimum_required(VERSION 3.21)

project(HelloQt LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick)
qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(HelloQt
    main.cpp
)

qt_add_qml_module(HelloQt
    URI HelloQt
    VERSION 1.0
    QML_FILES
        Main.qml
)

target_link_libraries(HelloQt PRIVATE Qt6::Quick)
```

Le minimum CMake et le `REQUIRES` dépendent des commandes utilisées et de la version Qt ciblée. Le code ci-dessus est un
exemple d'organisation, pas un remplacement des modèles de projet maintenus par Qt Creator. Voir le guide officiel
[Building a QML Application with CMake](https://doc.qt.io/qt-6/cmake-build-qml-application.html).
