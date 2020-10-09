# Exceptions

## Exercice 1

Soit le programme :

```cpp
#include <iostream>
using namespace std;
int main() {
    int a = 1, b = 0;
    a = a / b;
    cout << "a / b = " << a << endl;
    return 0;
}
```

Ce programme provoque un "plantage" car il effectue une division par 0. Le c++ ne gère pas l'exception de division par 0.
1) Encadrer l'expression posant problème dans un bloc try
2) Dans ce bloc try, déclencher une exception avec l'instruction throw
3) Insérer un bloc gestionnaire d'exception catch qui récupère l'exception et qui affiche "Erreur : division par zéro !"

## Exercice 2

Soit le programme suivant:

```cpp
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Entrer un nombre : ";
    cin >> n;
    switch (n)
    {
        case 1:
            cout << "le nombre saisi est 1" << endl;
            break;
        case 2:
            cout << "le nombre saisi est 2" << endl;
            break;
        default:
            cout << "le nombre saisi n'est ni 1 ni 2" << endl;
            break;
    }
    return 0;
}
```

Réécrire le programme pour qu'il utilise 3 gestionnaires d'exceptions pour afficher le même résultat.

## Exercice 3

1) Créer une classe myException composé d’un entier ```code``` et d’une méthode qui retourne : 
   + "indice trop petit" pour le code 1,
   + "indice trop grand" pour le code 2,
   + "erreur inconnue" sinon.
2) Dans le main, faire une saisie et déclencher une exception si la saisie n’est pas comprise entre 2 et 4.