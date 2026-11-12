# Déployer une application Qt

> [Revenir à la page d'installation de Qt 6](README.md)

Un programme qui fonctionne depuis Qt Creator peut dépendre de bibliothèques Qt, de plugins de plateforme, de greffons
de modules, de ressources QML ou d'autres bibliothèques. Il faut assembler ces dépendances avec l'application et tester
le résultat dans un environnement propre. Ne copiez pas manuellement des DLL ou bibliothèques au hasard depuis le système.

Pour les projets CMake desktop, utilisez les commandes de déploiement Qt associées à la cible :
[`qt_generate_deploy_app_script`](https://doc.qt.io/qt-6/qt-generate-deploy-app-script.html) pour une application
Widgets, et [`qt_generate_deploy_qml_app_script`](https://doc.qt.io/qt-6/qt-generate-deploy-qml-app-script.html)
pour Qt Quick. Elles peuvent collecter les bibliothèques, plugins et imports QML nécessaires lors de l'installation CMake.
Les détails diffèrent selon l'OS et le type de paquet.

Pour un premier essai, la documentation décrit aussi les outils spécifiques aux plateformes, notamment
[`windeployqt`](https://doc.qt.io/qt-6/windows-deployment.html) sous Windows et
[`macdeployqt`](https://doc.qt.io/qt-6/macos-deployment.html) sous macOS. Vérifiez la documentation de chaque module :
certains composants ou plateformes requièrent des étapes particulières.

Construisez en **Release**, installez dans un dossier de livraison distinct, puis lancez l'application sur un système qui
n'a ni Qt ni Qt Creator installés. Vérifiez les plugins, les imports QML, les ressources, les architectures et les
prérequis système. Avant toute distribution, vérifiez les obligations de la licence Qt et des dépendances tierces.
La [documentation officielle du déploiement CMake](https://doc.qt.io/qt-6/cmake-deployment.html) est la référence pour
la version utilisée.
