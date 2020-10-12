# Constructeurs par recopie

## Exercice 1

Soit le programme suivant :

```cpp
void fonction (Truc a) {}

int main() {
    Truc x;
    Truc y = x;
    fonction(y);
    cout << "Bonjour !" << endl;
}
```

Créer la classe ```Truc``` de manière à ce que le progamme ci-dessus fournisse le résultat suivant :

```
Création d'un truc
Copie d'un truc
Copie d'un truc
Destruction d'un truc
Bonjour !
Destruction d'un truc
Destruction d'un truc
```

## Exercice 2

Quels seront les résultats du programme suivant ? 

> A faire sur papier !

```cpp
#include <iostream>

using namespace std;

class Point {
    private:
        int x, y;
    public: 
        Point(int abs = 1, int ord = 0) {
            x = abs;
            y = ord;
            cout << "C : " << x << ", " << y << endl;
        };
        Point(Point &);
        ~Point();
};

Point::Point(Point & d) {
    cout << "R : " << d.x << ", " << d.y << endl;
    x = d.x;
    y = d.y;
}

Point::~Point() {
    cout << "D !"<< endl;
}

int main() {
    void fct (Point, Point *);
    cout << "Début main" << endl;
    Point a;
    Point c = a;
    Point *adr = new Point (3, 3);
    fct(a, adr);
    c = Point(5, 5);
    cout << "Fin main" << endl;
}

void fct (Point d, Point * add) {
    cout << "Entrée fct" << endl;
    delete add;
    cout << "Sortie fct" << endl;
}
```