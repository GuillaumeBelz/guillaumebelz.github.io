# Configurer Qt Creator et ses kits

> [Revenir à la page d'installation de Qt 6](README.md)

Qt Creator est un IDE indépendant des versions du framework Qt : il peut gérer plusieurs versions de Qt et plusieurs
chaînes de compilation. Les captures d'écran de ce tutoriel peuvent différer selon la version de Qt Creator et la langue
de l'interface.

## Qu'est-ce qu'un kit ?

Un kit associe une cible (par exemple un ordinateur de bureau ou un appareil Android), un compilateur, un débogueur, une
version de Qt et des paramètres de construction/exécution. Les éléments doivent être compatibles entre eux. L'installateur
configure généralement les kits disponibles, mais les outils installés séparément peuvent nécessiter une configuration
manuelle.

## Vérifier la configuration

Dans **Preferences** (macOS) ou **Tools > Options** (Windows/Linux), ouvrez **Kits**. Vérifiez :

1. Dans **Qt Versions**, que Qt Creator trouve le fichier de configuration CMake associé à la version de Qt.
2. Dans **Compilers**, que le compilateur choisi est détecté.
3. Dans **Debuggers**, que le débogueur compatible est trouvé ou configuré.
4. Dans **Kits**, que la combinaison ne présente aucune erreur.

Les libellés exacts et l'emplacement des préférences peuvent changer selon la version. Évitez de mélanger un compilateur
MSVC et des bibliothèques Qt MinGW, ou inversement. Pour Android et iOS, vérifiez également les paramètres de l'appareil
et les outils de la chaîne de compilation croisée.

## Sélectionner un kit et construire

Lorsqu'un projet est ouvert, sélectionnez dans **Projects > Build & Run** le kit et le profil souhaités. Les configurations
**Debug** et **Release** utilisent des options de construction différentes ; elles ne sont pas interchangeables pour le
débogage ou la distribution.

Pour un projet Qt 6 avec CMake, assurez-vous que Qt Creator utilise le bon préfixe de Qt. La sortie de configuration CMake
et la fenêtre **Issues** donnent les détails d'un composant introuvable. Pour davantage d'informations, consultez la
[documentation Qt Creator sur les kits](https://doc.qt.io/qtcreator/creator-targets.html) et sur [CMake](https://doc.qt.io/qtcreator/creator-build-settings-cmake.html).
