# Club de lecture du discord NaN

Bienvenue dans le dépôt du club de lecture du discord NaN !

## Structure du projet

Ce projet utilise CMake pour la compilation des exemples de code et des exercices.

### Prérequis

- CMake 3.16 ou supérieur
- Un compilateur C++17 compatible
- Qt6 (optionnel, pour les exemples utilisant Qt)

### Compilation

Pour compiler les exemples et exercices :

```bash
mkdir build
cd build
cmake ..
make
```

### Organisation

- `examples/` - Exemples de code des livres étudiés
- `exercices/` - Exercices pratiques
- `CMakeLists.txt` - Configuration CMake principale

## Contribuer

Pour ajouter de nouveaux exemples ou exercices, créez les fichiers dans les dossiers appropriés et mettez à jour les fichiers CMakeLists.txt correspondants.