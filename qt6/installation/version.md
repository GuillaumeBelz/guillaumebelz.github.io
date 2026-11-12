# Comprendre les versions et le support de Qt

> [Revenir à la page d'installation de Qt 6](README.md)
>
> [Revenir au README du site](../../README.md)
>
> Situation au 11 novembre 2026 : Qt 6.12 est la version LTS courante.

- **Création :** 26 juillet 2017
- **Dernière mise à jour :** 11 novembre 2026

Qt utilise des numéros de version `majeure.mineure.correctif`, par exemple `6.12.0`. Les versions correctives apportent
principalement des corrections. Une version mineure peut ajouter des API et des modules ; vérifiez ses notes de version
et sa matrice de plateformes avant de l'adopter.

Qt 6.12 est une version à support à long terme (LTS). Selon la politique actuelle de Qt, les versions LTS sont publiées
selon un cycle régulier et bénéficient d'une période de maintenance prolongée. La durée réelle, les correctifs et les
droits d'accès dépendent de la version et de la licence : la mention « LTS » ne garantit pas que tous les paquets soient
disponibles gratuitement. Consultez la [politique officielle LTS](https://www.qt.io/development/qt-framework/qt-lts)
et les [périodes de maintenance](https://www.qt.io/development/qt-framework/maintenance-periods).

Une mise à jour Qt 6.x peut conserver une compatibilité source importante, mais il faut toujours recompiler l'application
avec les bibliothèques et outils correspondants. Ne supposez pas qu'un binaire est interchangeable entre compilateurs,
architectures, plateformes ou distributions de Qt. Les exigences de support varient également par module.

Pour un projet, documentez la version minimale requise et les modules utilisés, utilisez un kit valide et testez toute
mise à niveau sur une branche dédiée. Les [notes de version Qt](https://doc.qt.io/qt-6/whatsnewqt6.html) détaillent les
changements et suppressions d'API.

Article rédigé avec l’aide de l’IA.

## Historique des mises à jour

- 2017-07-26 — Création de la page.
- 2026-11-11 — Actualisation pour Qt 6 et correction du lien vers les nouveautés par version.
