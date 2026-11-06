# Examen Prog C++

Durée : 1h30 Documents autorisés

## Partie 1 : Classe (12 points)

Soit une classe Compte qui représente un compte bancaire. Cette classe Compte comprend une variable membre représentant le solde du compte sous la forme d’un réel et 4 fonctions membres permettant de réaliser les opérations courantes de gestion du compte (consulter le solde, créditer le compte, débiter le compte et effectuer un virement vers un autre compte).

Question 1 (1 pt) : Écrire le code du constructeur de la classe permettant de créer un objet Compte avec un montant initial nul ou positif.

Question 2 (1 pt) : Écrire le code de la fonction solde() permettant d’obtenir le solde.

Question 3 (2 pts) : Écrire le code de la fonction « crediter » qui ajoute un montant positif au solde du compte. Cette fonction renvoie true si l’opération s’est faite correctement et false dans le cas contraire.

Question 4 (2 pts) : Écrire le code de la fonction « debiter » qui enlève un montant positif au compte. Cette fonction renvoie true si l’opération s’est faite correctement et false dans le cas contraire. Attention, un solde négatif sur un compte est interdit.

Question 5 (2 pts) : Écrire le code de la fonction « virement » qui permet de transférer un montant positif du compte courant vers un compte distant. Cette fonction renvoie true si l’opération s’est faite correctement et false dans le cas contraire.

Question 6 (2 pts) : On souhaite créer une classe Epargne qui hérite de Compte. Cette classe Epargne possède une variable membre de type entier correspondant au taux d’épargne. Par exemple, avec un taux égal à 2, un dépôt de 1000 € sur un compte Epargne est bonifié de 1000 \* 2 % = 20 € et c’est donc 1020 € qui sont déposés sur le compte. Écrire la déclaration de la classe Epargne et le code du constructeur.

Question 7 (2 pts) : Écrire le code de la fonction « crediter » de la classe Epargne en prenant en compte le taux d’épargne et en réutilisant les fonctions de la classe Compte.

## Partie2 : STL (8 points)

Question 8 (1 pts) : On se propose de créer un vecteur d’entiers et de l’initialiser avec 30 nombres aléatoires compris dans l’intervalle \[-10, 10\]. Pour cela, on utilisera la fonction rand() qui génère un nombre entier aléatoire entre 0 et RAND_MAX. Écrire le code permettant de créer et remplir le vecteur. Question 9 (2 pts) : Écrire le code permettant d’afficher les éléments du vecteur en surchargeant l’opérateur \<\<

Question 10 (2 pts) : En utilisant la STL, écrire le code permettant de trier par ordre croissant le vecteur. Faire de même, pour l’ordre décroissant.

Question 11 (3 pts) : Écrire le code permettant de calculer l’histogramme des valeurs du vecteur, c’est-à-dire le nombre de fois où chaque valeur est représentée dans le vecteur. L’histogramme pourra être stocké dans une variable histo de type std ::array de taille 21 correspondant aux 21 valeurs possibles du vecteur (de -10 à +10). Par exemple, si la valeur -9 est représentée 4 fois, histo\[1\] sera égal à 4.

## Partie BONUS (2 points):

Question 12 (2 pts) : Expliquer ce que fait la fonction mystery.

```cpp
bool mystery(std::string data) {
    auto it1 = data.begin();
    auto it2 = data.rbegin();
    std::cout << data  << std::endl;
    while (it1 < data.begin()+data.length()/2) {
        std::cout << *it1 << " " << *it2 << std::endl;
        if (*it1 != *it2) {
            return false;
        }
        it1++;
        it2++;
    }
    return true;
}
```

En particulier, que se passe t’il lorsqu’on l’appelle avec les données suivantes :

```cpp
std::string data1 = "azerty";
std::string data2 = "level";
std::string data3 = "42";
std::string data4 = "65 = 56";
```
