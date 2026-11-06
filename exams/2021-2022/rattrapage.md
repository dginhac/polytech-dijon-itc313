# Rattrapage Programmation C++ - Année 2021/2022

Durée : 1h20 - Documents papiers autorisés

> Exercice 1 :

On se propose de créer une classe *Voiture* permettant de stocker les informations de base d’une voiture, c’est-à-dire la marque (par ex. « Tesla »), le modèle (par ex. « Model 3 ») et le prix en euros (par ex. 43800€).

**Q1** Ecrire la déclaration de la classe *Voiture*, le code du constructeur et des getters/setters permettant d’écrire les instructions suivantes, en sachant que seul le prix peut changer après construction de l’objet.

```cpp
Voiture ma_tesla("Tesla", "Model 3", 43800);
```

**Q2** Ecrire la surcharge de l’opérateur \<\< pour afficher les informations d’une voiture.

```cpp
std::cout << ma_tesla;       // Affiche Tesla Model 3 (43800 €)
```

**Q3** Écrire le code du programme principal permettant de un tableau d’objets Voiture en utilisant un std ::vector et ajouter quelques objets dans le tableau.

**Q4** Écrire le code de la fonction nommée *soldes* permettant de modifier le prix de tous les objets du tableau de voitures.

```cpp
soldes(voitures, 0.1);       // Applique 10% de remise sur tous les prix des
                             // objets stockés dans le tableau voitures
```

**Q5** Écrire le code de la fonction permettant de trier les voitures par prix croissant ou décroissant.

```cpp
tri(voitures,0);      // Tri par ordre decroissant
tri(voitures);        // Tri par ordre croissant (tri par défaut)
                      // Équivalent à tri(voitures, 1)
```

> Exercice 2 :

Soit une classe Temps capable de stocker une information de temps sous le format h:min:sec, chacun étant défini comme un entier.

**Q1** Ecrire la déclaration de la classe.

**Q2** Ecrire le/les constructeur(s) de cette classe permettant de créer les objets suivants

```cpp
Temps t1;

                        // t1 = 0:0:0
Temps t2(23,59,59);
                        // t2 = 23:59:59
```

**Q3** Ecrire le code de la méthode permettant de créer une nouvelle variable par addition de 2 temps.

```cpp
Temps t2(1,20,43); Temps t3(2,50,37);
Temps t4 = addition(t2,t3) // 1:20:43 + 2:50:37 = 4:11:20
```

**Q4** Remplacer la méthode addition par la surcharge de l’opérateur + afin de simplifier l’écriture de code.

```cpp
Temps t4 = t2 + t3 // 1:20:43 + 2:50:37 = 4:11:20
```

Justifier quel type de fonction (méthode, helper ou friend) vous utilisez pour faire la surcharge de +.

**Q5** On se propose de créer une classe Minuteur qui hérite de Temps. Ecrire la déclaration et la définition de la classe Minuteur permettant de valider les instructions suivantes :

```cpp
Minuteur m1(0,10,0, False);  // Minuteur de 10min pas démarré (False)
```

**Q6 Bonus** Le fonctionnement d’un minuteur étant relativement simple, quelles sont les variables et les méthodes qui doivent être ajoutées à la classe Minuteur pour que celle-ci soit fonctionnelle. Aucun code des fonctions n’est demandé, seules les déclarations des fonctions seront à fournir.
