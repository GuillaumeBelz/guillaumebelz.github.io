# Installer un compilateur C++

> [Revenir à la page d'installation de Qt 6](README.md)

Qt est un framework C++ : il faut une chaîne de compilation adaptée à la plateforme et à la version de Qt installée. Une
chaîne comprend notamment un compilateur, un éditeur de liens et un débogueur. Qt Creator peut détecter plusieurs
configurations, appelées [kits](config.md), mais un compilateur seul ne suffit pas : Qt et le compilateur doivent être
compatibles entre eux.

Consultez toujours les [configurations prises en charge](https://doc.qt.io/qt-6/supported-platforms.html) avant de choisir.
Les versions disponibles dans l'installateur dépendent également de l'OS, de l'architecture et de la licence.

## Windows

Deux choix courants sont disponibles :

- **MSVC** : installez Visual Studio ou les Build Tools de Visual Studio avec la charge de travail **Desktop development
  with C++**. Choisissez une version de MSVC prise en charge par le paquet Qt sélectionné.
- **MinGW** : utilisez le compilateur fourni dans la section **Developer and Designer Tools** de Qt Online Installer.
  Sélectionnez le kit MinGW correspondant exactement à votre installation Qt.

Visual Studio Code n'est pas Visual Studio et ne fournit pas, à lui seul, le compilateur MSVC. Les bibliothèques Qt compilées
avec MSVC ne peuvent pas être liées à une application compilée avec MinGW.

## Linux

Installez un compilateur C++ (GCC ou Clang), CMake, Ninja et les outils de développement nécessaires aux modules souhaités.
Les noms de paquets varient selon la distribution ; suivez les prérequis officiels pour votre version de Qt et les modules
que vous comptez utiliser.

## macOS

Installez Xcode depuis l'App Store ou les outils en ligne de commande d'Apple. Qt utilise Clang et les SDK Apple fournis
avec cette chaîne. Pour développer ou distribuer des applications iOS, un Mac et Xcode sont nécessaires.

## Android

Le développement Android utilise une chaîne de compilation croisée. Installez les outils Android (SDK, NDK, JDK et outils
de ligne de commande) correspondant à la version de Qt. Qt Online Installer peut proposer une configuration recommandée ;
Android Studio est également utile pour gérer le SDK. Configurez ensuite les chemins et appareils dans les préférences
**Devices > Android** de Qt Creator. La documentation Qt fournit la [matrice de versions et les instructions à jour](https://doc.qt.io/qt-6/android-getting-started.html).

## Vérifier la détection

Après l'installation, ouvrez **Preferences/Options > Kits** dans Qt Creator. Chaque kit doit référencer une version de Qt,
un compilateur et un débogueur compatibles. Un kit signalé invalide ne peut pas servir à construire le projet. Si Qt
Creator n'en crée aucun automatiquement, vérifiez les versions installées et les chemins configurés dans **Qt Versions**
et **Compilers**.
