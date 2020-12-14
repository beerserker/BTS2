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

1) Créer une classe MyException composé d’un entier ```code``` et d’une méthode qui retourne : 
   + "indice trop petit" pour le code 1,
   + "indice trop grand" pour le code 2,
   + "erreur inconnue" sinon.
2) Dans le main, faire une saisie et déclencher une exception si la saisie n’est pas comprise entre 2 et 4.

## Exercice 4 sur papier

Qu'affiche le programme suivant ?

```cpp
#include <iostream>
using namespace std;

class Erreur1 : public exception {};
class Erreur2 : public exception {};
class Erreur3 : public exception {};

int calcul1(int x, int y) {
    if (x == y) {
        Erreur1 e;
        throw e;
    }
    else if (x == 0) {
        Erreur2 e;
        throw e;
    }
    else if (y == 0) {
        Erreur3 e;
        throw e;
    }
    return x + y;
}

int calcul2(int x, int y, int z) {
    try {
        return(calcul1(x, y));
    }
    catch(Erreur2 e) {
        return y + z;
    }
    catch(Erreur3 e) {
        return x + z;
    }
}

int main() {
    try {
        cout << calcul2(1, 3, 5) << endl;
        cout << calcul2(0, 3, 5) << endl;
        cout << calcul2(2, 0, 5) << endl;
        cout << calcul2(3, 3, 5) << endl;
    }
    catch(Erreur1 e) {
       cout<<"Erreur fatale"<< endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
```

## Exercice 5

1. Ecrire une classe Erreur qui dérive de la classe std::exception et qui possède 3 attributs :
```cpp
int niveau;     //niveau d'erreur 
string message;   // texte de l'exception 
int code;       // code
```
qu'on initialisera de la manière suivante :
```cpp
Erreur(1, "Exception dans mon programme", 100);
```

2. Surdéfinir la méthode what (même prototype que dans la classe exception ) pour qu'elle affiche "Exception Erreur " + message.

3. Dans un programme main lancer une exception de type Erreur.

4. Récupérer dans un bloc catch l'exception et afficher le niveau, le message et le code de l'erreur

5. Intégrer dans le programme un bloc catch qui récupère les exceptions de la classe exception et placer celui-ci avant le catch précédent.

6. Expliquer le comportement de l'affichage
