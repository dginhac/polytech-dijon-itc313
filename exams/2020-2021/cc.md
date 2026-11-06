# Controle Continu Programmation C++

Durée : 1h20 Documents papiers autorisés

# Du code pas du tout complexe

Soit un nombre complexe z défini par z = a+bi, a et b étant réels. On se propose de concevoir la classe Complex suivante :

```cpp
class Complex {
public:
    Complex(double a, double b);
private:
    double _a;
    double _b;
};
```

**Q1** : Ecrire le code du constructeur `Complex(double a, double b);`

**Q2** : En supposant que la classe Complex soit celle décrite ci-dessus, trouver et expliquer les erreurs dans le programme principal suivant :

```cpp
int main() {
    complex c1(1,2)
    Complex c2(5);
    Complex c3;
    double var1 = c1._a;
    double var2 = c2.b;
    std::cout << var1 << " " << var2 << std::endl;
    std::cout << c2 << std::endl;
    return 0;
}
```

**Q3** : Pour pouvoir déclarer des variables Complex sans passer aucun paramètre (Ex : Complex c ;) en plus des variables de type Complex c(x,y), quel est le code à rajouter dans la classe Complex ?

**Q4** : Ecrire le code des getters. Quel est leur rôle ?

**Q5** : Soit la fonction module qui calcule le module d’un nombre complexe :

```cpp
double Complex::module() const {
    return sqrt (a()*a() + b()*b());
}
```

En supposant que a() et b() sont les getters de la classe Complex, expliquer ce que signifie `double Complex::module() const`

**Q6** : Ecrire le code de la fonction toString qui renvoie une chaine de caractères représentant le nombre complexe sous la forme a + ib si a ≠ 0 et b ≠ 0, ib si a=0 et a si b=0.

**Q7** : Ecrire le code de la fonction membre add qui additionne l’objet complexe courant avec un autre nombre complexe et qui retourne un nouveau nombre complexe : `c3 = c2.add(c1)`

**Q8** : Re-écrire la fonction d’addition de 2 nombres complexes en surchargeant l’opérateur + pour pouvoir utiliser l’instruction `c3 = c2+c1;` Justifier si vous utilisez une fonction membre ou pas.

**Q9** : Soit les fonctions suivantes :

```cpp
bool Complex::function1(const Complex c) const {
    return ((a() == c.a()) && b() == c.b());
}
bool function2(const Complex c1, const Complex c2) {
    return ((c1.a() == c2.a()) && c1.b() == c2.b());
}
```

En supposant que a() et b() sont les getters de la classe Complex, que font les deux fonctions function1 et function2 ? Quels sont les résultats retournés ? Quelles sont les différences entre ces fonctions ?

**Q10** : Ecrire le code de l’opération de multiplication de 2 nombres complexes sous la forme d’une fonction ou sous la forme d’une surcharge d’opérateur.

**Question bonus** : En supposant qu’on souhaite se restreindre aux nombres complexes a + ib avec a>=0 et b>=0, comment doit-on modifier le constructeur ?
