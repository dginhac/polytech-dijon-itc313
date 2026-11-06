# Rattrapage Prog C++

Durée : 1h30 Documents papiers autorisés

## Les bases de la POO

Soit une classe Produit qui représente un produit à acheter.

La classe Produit comprend 3 variables membres : le nom du produit sous la forme d’une chaine de caractères, le prix du produit sous la forme d’un réel et le nombre d’exemplaires disponibles sous la forme d’un entier (par exemple : Console PS5 - prix 499.00 euros, 5 exemplaires en stock).

La classe Produit comprend également plusieurs fonctions membres permettant de réaliser les opérations courantes de gestion de stock et de vente d’un magasin.

Question 1 (2 pts) : Écrire la déclaration de la classe avec ses variables membres.

Question 2 (2 pts) : Écrire le code du constructeur de la classe permettant de créer un objet Produit.

Question 3 (2 pts) : Écrire le code des deux fonctions getters retournant le nom d’un produit et son prix.

Question 4 (2 pts) : Ajouter une fonction membre permettant de calculer la disponibilité du produit et qui renvoie True si le stock du produit est supérieur à 0 et False si égal à 0.

Question 5 (2 pts) : Ajouter une fonction membre permettant de modifier le prix d’un produit. Attention, on ne peut pas avoir de prix négatif ou nul. La fonction renvoie un booléen égal à True en cas de succès.

Question 5 (6 pts) : Écrire le code de la fonction membre permettant de modifier le stock d’un produit. Le paramètre de la fonction est un nombre positif (pour incrémenter le stock) ou négatif (pour décrémenter le stock) avec 1 comme valeur par défaut. Attention, on ne peut pas avoir de stock négatif. La fonction renvoie un booléen égal à True en cas de succès.

Question 7 (6 pts) : Surcharger l’opérateur \<\< pour afficher les informations d’un produit.

Question 8 (2 pts) : On souhaite créer une classe Solde qui hérite de Produit. Cette nouvelle classe possède une variable membre de type réel correspondant au pourcentage de remise. Écrire la déclaration de la classe Solde.

Question 9 (2 pts) : Écrire le code du constructeur de la classe Solde.

Question 10 (2 pts) : Écrire la fonction membre de Solde qui calcule le prix soldé d’un produit.
