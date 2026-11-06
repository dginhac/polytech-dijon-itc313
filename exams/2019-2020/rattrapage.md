# **Rattrapage C/C++**

Durée : 1h00 – Documents autorisés

1/ Créer une classe de base nommée Vehicule. Un Vehicule possède trois variables membres protégées :

- m_nom de type std::string représentant le nom du véhicule
- m_millesime de type int représentant l’année de commercialisation du véhicule
- m_prix de type double représentant le prix d’achat du véhicule

et les méthodes publiques suivantes :

- Vehicule (std::string nom, int millesime, prix) est le constructeur
- void affiche() permet d’afficher les variables membres
- double calcule_prix() permet de calculer et retourner le prix courant d’un Vehicule à l’aide d’une décote annuelle de 10% selon la formule suivante : decote = 0.1 prix courant = (1.0 - ( (2020 – m_millesime) \* decote ) \* m_prix

2 / Ecrire aussi une classe Voiture dérivée publiquement de la classe Véhicule. Cette classe comprend également la variable membre m_kilometrage de type int Ecrire le constructeur Voiture et la méthode affiche. Vous devez impérativement réutiliser le code déjà écrit pour la classe véhicule. Reécrire le code de la méthode calcule_prix à l’aide de la formule suivante :

decote = 10% par an si kilométrage inférieur à 15000 km/an, 15% par an si inférieur à 20000

km/an, 20 % si inférieur à 25000 km/an, 25 % si supérieur à 25000 km/an

prix courant = (1.0 - ( (2020 – m_millesime) \* decote ) \* m_prix

3/ Ecrire le programme principal qui effectue les actions suivantes :

- création d’un objet de type Véhicule et appel des méthodes affiche et calcul_prix
- création d’un objet de type Voiture et appel des méthodes affiche et calcul_prix

et qui affiche le résultat suivant :

```
#################################
Vehicule: Véhicule generique
Annee : 2014
Prix d'achat : 25000 €
Prix courant : 10000 €
#################################
Vehicule: Audi TT
Annee : 2018
Prix d'achat : 40000 €
kilometrage : 22000 km
Prix courant : 32000 €
#################################
```
