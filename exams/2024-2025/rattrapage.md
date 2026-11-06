## **Algo Prog Théorie**

**Rattrapage/Validation**

07/03/2025 - 2 heures

Documents papiers autorisés

Vous veillerez à écrire du code le plus propre possible respectant les standards

et les bonnes pratiques vues en cours Notamment, vous ferez attention à nommer explicitement vos variables, vos fonctions ou vos méthodes, à utiliser à bon escient les références, à utiliser correctement le mot clé « const » dès que nécessaire, . . .

# **Gestion d’une Bibliothèque**

Vous devez concevoir un système de gestion de bibliothèque en utilisant les concepts

de la programmation orientée objet en C++. Le système doit permettre de gérer des livres et des emprunts.

**Question 1. Création de la classe Livre** (2 points)

(a) Définissez une classe Livre avec les attributs suivants : titre (chaîne de carac-

tères), auteur (chaîne de caractères), anneePublication (entier), et disponible (booléen).

(b) Ajoutez un constructeur pour initialiser ces attributs.

**Question 2. Méthodes d’accès (getters/setters)** (2 points)

(a) Justifiez pourquoi certains attributs de la classe Livre nécessitent uniquement

des getters, tandis que d’autres nécessitent à la fois un getter et un setter.

(b) Écrivez les méthodes d’accès nécessaires pour la classe Livre en fonction de cette

justification.

**Question 3. Fonction helper afficherLivre** (1 point)

Écrivez une fonction helper afficherLivre qui prend en paramètre un objet Livre et retourne une chaîne de caractères représentant les informations du livre sous la forme : "Titre - Auteur (Année) - disponible/non disponible".

**Question 4. Création de la classe Bibliotheque** (2 points)

(a) Définissez une classe Bibliotheque avec les attributs suivants nom (chaîne de

caractères) et livres (vecteur de Livre).

(b) Ajoutez un constructeur pour initialiser ces attributs. (c) Ajoutez une méthode ajouterLivre à la classe Bibliotheque qui prend en para-

mètre un objet Livre et l’ajoute à la bibliothèque.

**Question 5. Fonction helper afficherLivresDisponibles** (1 point)

Ajoutez une fonction helper afficherLivresDisponibles qui prend en paramètre un objet Bibliotheque et affiche tous les livres disponibles dans la bibliothèque.

**Question 6. Méthodes emprunterLivre et restituerLivre** (2 points)

(a) Écrivez une methode emprunterLivre qui prend en paramètre une chaîne de

caractères représentant le titre du livre à emprunter et met à jour l’attribut disponible du livre correspondant.

(b) Faites de même pour la méthode restituerLivre.

Les deux méthodes doivent retourner true si l’opération est possible (emprunt ou restitution) et false dans le cas contraire.

Algo Prog Théorie

Rattrapage/Validation

Page 2 / 2

**Question 7. Méthodes avec codes de retour détaillés** (3 points)

Lorsque les deux méthodes précédentes retournent false, on ne sait pas pourquoi l’opération a échoué. Par exemple, le livre n’existe pas, le livre est déjà emprunté, le livre est déjà restitué, etc.

Modifiez les méthodes emprunterLivre et restituerLivre pour qu’elles retournent un code de retour détaillé indiquant le résultat de l’opération : — "livre non existant" si le livre n’est pas dans la bibliothèque. — "livre déjà emprunté" si le livre existe mais qu’il a déjà été emprunté. — "livre déjà restitué" si le livre existe mais qu’il a déjà été restitué. — "opération réussie" si l’opération a réussi. Le code de retour peut être un entier ou une énumération, à vous de choisir la solution qui vous semble la plus adaptée.

**Question 8. Fonction helper trouverLivresParAuteur** (2 points)

Écrivez une fonction trouverLivresParAuteur qui prend en paramètres un objet Bi-bliotheque et une chaîne de caractères représentant le nom de l’auteur. La fonction doit retourner un vecteur d’objets Livre écrits par cet auteur.

**Question 9. Surcharge de l’opérateur ==** (3 points)

Surchargez l’opérateur == pour la classe Livre afin de comparer deux objets Livre. Si le titre, l’auteur et l’année de publication sont identiques, les deux objets Livre sont considérés comme égaux et la surcharge doit retourner true.

**Question 10. Fonction helper livreEstDansBibliotheque** (2 points)

Écrivez une fonction livreEstDansBibliotheque qui prend en paramètres un objet Bibliotheque et un objet Livre. La fonction doit retourner true si le Livre passé en paramètre est présent dans la bibliothèque.
