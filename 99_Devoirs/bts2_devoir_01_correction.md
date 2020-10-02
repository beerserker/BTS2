# Corrigés du devoir - Du C au C++ - 21/09/2020

# Exercice 1

Modifier le programme en C suivant de façon qu'il soit correct en C++.

```c
#include <stdio.h>
int main() {
    int n;
    float x;
    printf("donnez un entier et un flottant\n");
    scanf("%d %e", &n, &x);
    printf("le produit de %d par %e\n est : %e", n, x, n*x);
    return 0;
}
```

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    float x;
    cout << "donnez un entier et un flottant" << endl;
    cin >> n >> x;
    cout << "le produit de " << n << " par " << x << endl << "est : " << n*x;
    return 0;
}
```

# Exercice 2

En utilisant la structure suivante :
```cpp
struct fraction {
    int numerateur;
    int denominateur;
}
```
écrire une fonction ```initialiser``` qui, à partir de valeurs passées en paramètres, crée et renvoie une structure initialisée. ```denominateur``` doit être initialisé à 1 si aucune valeur n'est fournie pour ce membre. Ecrire un programme de démonstration.

```cpp
#include <iostream>

using namespace std;

struct fraction {
    int numerateur;
    int denominateur;
};

fraction initialiser(int, int = 1);

int main () {
    fraction a = initialiser(5, 2);
    cout << a.numerateur << "/" << a.denominateur << endl;
    fraction b = initialiser(3);
    cout << b.numerateur << "/" << b.denominateur << endl; 
}

fraction initialiser(int n, int d) {
    fraction a;
    a.numerateur = n;
    a.denominateur = d;
    return a;
}
```

# Exercice 3

Ecrire une fonction qui échange les valeurs de deux entiers passés par référence, ses surdéfinitions de manière à ce qu'elle accepte des nombres réels et des caractères et un programme de démonstration.

```cpp
#include <iostream>

using namespace std;

void swap(int &, int &);
void swap(float &, float &);
void swap(char &, char &);

int main () {
    int a = 5, b = 3;
    cout << a << ", " << b << endl;
    swap(a, b);
    cout << a << ", " << b << endl;
    
    float c = 2.14, d = 8.981;
    cout << c << ", " << d << endl;
    swap(c, d);
    cout << c << ", " << d << endl;
    
    char e = 'e', f = 'f';
    cout << e << ", " << f << endl;
    swap(e, f);
    cout << e << ", " << f << endl;
}
void swap(int & x, int & y) {
    int z = x;
    x = y;
    y = z;
}
void swap(float & x, float & y) {
    float z = x;
    x = y;
    y = z;
}
void swap(char & x, char & y) {
    char z = x;
    x = y;
    y = z;
}
```

# Exercice 4

Ecrire plus simplement en C++ en utilisant les spécificités du langage le programme en C suivant :

```c
double * tab;
int nbVal;
int i;
printf("Combien de valeurs ?");
scanf("%d", &nbVal);
tab = malloc(sizeof(double) * nbVal);
for(i = 0; i < nbVal; i++) {
    tab[i] = i;
    printf("%d\n", i);
}
free(tab);
```

```cpp
double * tab;
int nbVal;
cout << "Combien de valeurs ?";
cin >> nbVal;
tab = new double [nbVal];
for(int i = 0; i < nbVal; i++) {
    tab[i] = i;
    cout << i << endl;
}
delete [] tab;
```