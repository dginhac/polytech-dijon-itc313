# **Contrôle Continu C/C++**

Durée : 1h30 – Documents autorisés

## **Exercice 1 : Compréhension de code**

Soit le code suivant qui présente l’implémentation et l’utilisation d’une fonction mystère :

```cpp
1
     #include <iostream>
2
     double mystery_function(double x, double y) {
3
           if ((x<0) || (y<0)) {
4
                std::cout << "x and y must be >= 0" << std::endl;
5
                return -1;
6
           }
7
           double x0 = 0;  double x1 = x;  double x2;
8
           while (x1-x0>y) {
                x2=(x1+x0)/2;
9
10
                if (x2*x2>x)
11
                     x1=x2;
12
                else
13
                     x0=x2;
14
           }
15
           return x1;
16
     }
17
     int main() {
18
           double y = mystery_function(2,0.00001);
19
           std::cout << "Result is: " << y << std::endl;
20
           return 0;
21
     }
```

Le but de l’exercice est d’analyser le code et d’expliquer quelle est la fonction mathématique approximée par cette fonction mystère.

1. Quel est le rôle des tests effectués en ligne 3 ? En fonction des signes des valeurs

passées en argument, que retourne la fonction mystère ? Pourquoi faut-il écrire le « return -1 » de la ligne 5 ?

2. Expliquer ce qui se passe entre les lignes 8 et 14. Donner les premières valeurs de x0, x1

et x2 dans le cas de l’appel de la fonction mystère avec x=3 et y=0.1

3. A quoi sert le 2ème paramètre de la fonction mystère ? 4. Pourquoi faut-il impérativement s’assurer que les 2 paramètres de la fonction mystère

soient bien positifs ?

5. Quelle est la fonction mathématique approximée par la fonction mystère ? Quelle est

donc la valeur approchée du nombre y affiché en ligne 19, après l’appel de la fonction mystère à la ligne 18.

6. Quel est l’inconvénient majeur de cette méthode ?

## **Exercice 2 : Création d’une classe CompteBancaire**

Le sujet de l’exercice concerne la gestion « très basique » de comptes bancaires. Un CompteBancaire est défini par les 3 caractéristiques suivantes : identifiant du compte délivré par la banque, nom du propriétaire du compte, solde disponible sur le compte. Ex : « Dominique Ginhac » possède le CompteBancaire 101 avec un solde de 534.56 euros.

1. Ecrire le code de la classe CompteBancaire avec son constructeur en respectant la

contrainte suivante : un compte ne peut pas être créé avec un solde négatif.

2. Ecrire le code de la méthode permettant d’obtenir le solde du compte. 3. Ajouter une méthode permettant d’effectuer le paiement d’une somme positive du

compte en supposant que le solde soit suffisant (pas de compte à découvert). Cette méthode se terminera par l’affichage à l’écran du message suivant : « Compte ID - Paiement : X euros - Nouveau solde : Y euros » si tout s’est bien passé. Dans le cas contraire, afficher un message d’erreur expliquant la raison du refus.

4. Ajouter une méthode permettant de déposer une somme positive sur le compte. Cette

méthode se terminera par l’affichage à l’écran du message suivant : « Compte ID – Dépôt : X euros - Nouveau solde : Y euros ». Dans le cas contraire, afficher le message d’erreur : « Compte ID : Erreur (montant non valide). ».

5. Ajouter une méthode permettant de retirer une somme positive du compte en supposant

que le solde soit suffisant (Pas de compte à découvert). Vous devrez vérifier que le montant passé en argument de la méthode soit bien une combinaison de billets de 10, 20 et 50 euros (par exemple 90 € = 50 + 20 + 20. Par contre, 75 € n’est pas conforme). Cette méthode se terminera par l’affichage à l’écran du message suivant : « Compte ID - Retrait : X euros - Nouveau solde : Y euros » si tout s’est bien passé. Dans le cas contraire, afficher un message d’erreur expliquant la raison du refus.

6. Ajouter une méthode permettant de faire un virement de compte à compte. Pour cela,

réutiliser les méthodes de dépôt et de paiement.
