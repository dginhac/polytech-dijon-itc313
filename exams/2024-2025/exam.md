# Examen final Programmation C++ - Année 2024/2025

Durée : 1h30 - Documents papiers autorisés

> Attention : Vous veillerez à écrire du code le plus propre possible respectant les règles présentées en cours. Notamment, vous ferez attention à nommer explicitement vos variables, vos fonctions ou vos méthodes, à utiliser à bon escient les références, à utiliser correctement le mot clé « const » dès que nécessaire, …

## Exercice 1 : Création et manipulation d’une classe Photo (10 points)

On souhaite créer une classe `Photo` pour modéliser une photo numérique avec ses informations essentielles (nom, résolution, date de prise de vue, géolocalisation).

**Q1** Créer une structure `GPS` qui représente la latitude et la longitude d’un lieu. La latitude et la longitude sont représentées par une valeur numérique et une direction (N, S, E, O). Par ex, Dijon a pour latitude (47.316667,N) et longitude (5.016667,E). Ecrire la structure avec son constructeur. On supposera que les valeurs passées (nombres réels et directions) sont conformes et on ne fera pas de vérification. Comme il s’agit d’une structure, on n’a pas besoin d’écrire des getters/setters car les attributs sont publics.

**Q2** En réutilisant la classe Date créée en cours, écrire la classe Photo comportant un nom (string, par ex « photo1.jpg »), une résolution X (int, par ex 1920), une résolution Y (int, par ex 1080), une date de prise de vue (Date, par ex 01/22), une géolocalisation (GPS, par ex 47.316667, ‘N’, 5.016667, ‘E’). Fournir le code de son constructeur qui permet de définir un objet de la manière suivante :

`Photo p1("photo1.jpg", 1920, 1080, Date(01, 22), GPS(`47.316667,’N’,5.016667,’E’)`);`

**Q3** Ajouter une méthode `void redimensionner(int nouvelleX, int nouvelleY)` qui permet de modifier la résolution de la photo.

**Q4** Écrire une fonction non membre `bool plus_grand(const Photo& photo, int minX, int minY)` qui vérifie si la résolution de la photo est supérieure aux dimensions spécifiées. Une photo est jugée plus grande si ces deux dimensions sont toutes les deux plus grandes que la résolution passée en paramètre

**Q5** Écrire une méthode publique `double distance(const Photo& autre)` qui calcule et retourne la

distance en kilomètres entre la photo courante et une autre en utilisant leurs coordonnées GPS. Pour cela, vous utiliserez la formule suivante :

distance = R \* arccos(sin(lat1) \* sin(lat2) + cos(lat1) \* cos(lat2) \* cos(long2 - long1))

avec R= 6371 km (rayon de la terre), avec (lat1, long1) et (lat2, long2) les coordonnées GPS des 2 points. Attention, ces coordonnées doivent être transformées en radians au préalable. Utilisez les fonctions `std::sin`, `std::cos` et `std::acos` disponibles dans `cmath` pour réaliser les calculs de trigonométrie.

## Exercice 2 : Gestion d’un album Photo (10 points)

On souhaite gérer un album photo. Un Album contient un titre (string) et une collection de photos sous la forme d’un vecteur d’objets Photo. Par exemple, l’album « Mes vacances 2024 » contient un vecteur de 1337 photos.

**Q1** Créer la classe `Album` avec son constructeur.

**Q2** Ajouter les deux méthodes publiques `void ajouter_photo(const Photo& photo)` qui ajoute une photo à l’album et `bool supprimer_photo(const std::string& nom_photo)` qui supprime une photo par son nom. La méthode retourne true si la photo a été supprimée avec succès. Retourne false si la photo n’existe pas.

**Q3** Ajouter une fonction non membre `Album extraire_photos (const Album& album, int x, int`

- `y)` qui extrait et crée un album contenant toutes les photos de résolution supérieure à x,y.

**Q4** Surcharger l’opérateur + pour permettre la fusion de deux albums, le nouvel album étant nommé avec la concaténation des noms des 2 albums et les photos des deux albums doivent être combinées dans le nouvel album.

**Q5** Écrire la méthode void tri_par_date() qui trie les photos d’un album par ordre chronologique en utilisant la méthode std ::sort. Comme présentée en cours, la classe Date est fournie avec la surcharge de l’opérateur \< permettant de comparer 2 dates.
