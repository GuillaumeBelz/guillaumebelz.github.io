# Principes d'expérience utilisateur

> [Revenir à la page précédente](README.md)

L'expérience utilisateur (UX) concerne l'ensemble de l'expérience d'une personne avec un produit, pas seulement son
apparence. Même sans spécialiste UX ou graphiste dans l'équipe, quelques principes aident à concevoir une interface
compréhensible et prévisible.

## Partir des tâches

- Identifiez les utilisateurs, leur contexte et les tâches qu'ils veulent accomplir.
- Donnez la priorité aux actions principales et utilisez des libellés explicites.
- Affichez les états importants : chargement, absence de résultat, succès et erreur.
- Préservez les données saisies lorsqu'une erreur peut être corrigée.

## Cohérence et accessibilité

Réutilisez les contrôles standard de Qt Quick Controls et suivez les conventions de la plateforme cible. Assurez une
navigation au clavier, un focus visible, des tailles de texte lisibles et des descriptions accessibles pour les éléments
non textuels. Ne communiquez pas une information uniquement par la couleur.

Adaptez l'interface aux tailles d'écran, à l'orientation, aux traductions et aux textes plus longs. Testez les parcours
avec des personnes réelles dès que possible ; une maquette visuelle seule ne valide pas l'utilisabilité.

## Ressources

- [Qt Quick Controls](https://doc.qt.io/qt-6/qtquickcontrols-index.html)
- [Accessibilité dans Qt](https://doc.qt.io/qt-6/accessible.html)
- [Material Design](https://m3.material.io/) et [Apple Human Interface Guidelines](https://developer.apple.com/design/human-interface-guidelines/)
- Livre : *The Design of Everyday Things*, Don Norman
