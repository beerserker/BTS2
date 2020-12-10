# Héritage

## Exercice 1

### Partie 1

Ecrire une classe Batiment avec les attributs suivants :
```cpp
string adresse;
```

La classe Batiment doit disposer des constructeurs suivants:

```cpp
Batiment();
Batiment (adresse);
```
La classe Bâtiment doit contenir des accesseurs pour les attributs (méthodes pour récupérer leur valeur).

### Partie 2

Ecrire une classe Maison héritant de Batiment avec les attributs suivants:
```cpp
int NbPieces; // Le nombre de pièces de la maison
```
La classe Maison doit disposer des constructeurs suivants:
```cpp
Maison();
Maison(adresse, nbPieces);
```
La classe Maison doit contenir des accesseurs pour les attributs.

### Partie 3

Ecrire aussi un programme afin de tester ces deux classes.

## Exercice 2

### Présentation

On veut gérer les étudiants d’une école à l’aide d’une classe ```Etudiant``` définie par les attributs suivants :

+ ```nom``` : nom d’un étudiant
+ ```prénom``` : prénom d’un étudiant
+ ```notes``` : tableau contenant les notes d’un étudiant, sachant qu’un étudiant a au total 4 notes.

et les méthodes suivantes :

+ ```void saisie ()```, permettant la saisie d’un étudiant
+ ```void affichage ()```, permettant l’affichage d’un étudiant
+ ```float moyenne ()```, retourne comme résultat la moyenne des notes d’un étudiant.

On veut également représenter, à l’aide d’une nouvelle classe Etudiant2A, certains étudiants qui possèdent un attribut supplémentaire : 

+ ```note_stage```, qui représente la note de leur stage.

Les méthodes à associer à cette classe sont les suivantes :

+ ```void saisie ()```, permettant la saisie d’un étudiant en 2 ème année
+ ```void affichage ()```, permettant l’affichage d’un étudiant 2 ème année
+ ```float moyenne ()```, retourne la moyenne finale (la moyenne des notes et la note de stage ont le même poids).

### Tâches

1. Donner la représentation UML des deux classes
2. Ecrire la classe Etudiant en C++.
3. Ecrire la classe Etudiant2A en C++.
4. Ecrire un programme de test.

## Exercice 3

Soit les classes suivantes :

```cpp
class A1 {
    public:
        int x;
};
class B1 : public A1 {
};
```

### Exercice 3.1

Compléter ces classes pour que le programme suivant :
```cpp
int main() {
    B1 *p = new B1;
    delete p;
    return 0;
}
```
affiche :
```
constructeur A1
constructeur B1
destructeur B1
destructeur A1
```

### Exercice 3.2

Compléter ces classes pour que le programme suivant :
```cpp
int main() {
    B1 *p = new B1;
    delete p;
    return 0;
}
```
affiche :
```
constructeur A1
constructeur A1
constructeur B1
destructeur A1
destructeur B1
destructeur A1
```

### Exercice 3.3

Compléter ces classes pour que le programme suivant :
```cpp
int main() {
    B1 *p = new B1;
    delete p;
    return 0;
}
```
affiche :
```
constructeur A1
constructeur A1
constructeur B1
destructeur B1
destructeur A1
destructeur A1
```

### Exercice 3.4

Compléter ces classes pour que le programme suivant :
```cpp
int main() {
    B1 *p = new B1(4);
    cout<< p->A1::x << endl;
    delete p;
    return 0;
}
```
affiche :
```
constructeur A1 avec x = 8
constructeur B1 avec x = 4
8
destructeur B1
destructeur A1
```

## Exercice 4

Soit une classe qui représente un point dans un plan.

```cpp
class Point2d {
    int x, y;
    public:
        Point2d(int px, int py) {
            x = px, y = py;
        }
        Point2d(Point2d & p) {
            x = p.x, y = p.y;
        }
        void affiche() {
            cout << "x = " << x << " y = " << y;
        }
};
```

1. Ecrire une classe ```Point3d``` dérivée de la classe qui rajoute une cordonnée ```z``` au point. Cette classe possède une fonction membre ```affiche()``` qui affiche :
```
z = (valeur de z)
```
2. Ecrire un programme (main) qui crée un objet avec les coordonnées ```x = 1, y = 2, z = 3```. Le programme affiche :
```
x = 1 y = 2 z = 3
```
3. Modifier la méthode ```affiche()``` de la classe ```Point3d``` pour qu'elle affiche en appelant la méthode affiche de la classe Point2d
```
x = 1 y = 2 z = 3
```
4. Supprimer/commenter la méthode affiche() de Point2d et faire le nécessaire pour utiliser une seule méthode affiche() dans Point3d pour afficher :
```
x = 1 y = 2 z = 3
```

## Exercice 5

```cpp
#include <iostream>
#include <string>

using namespace std;

struct Chambre {
    float surface;
    int fenetres;
    public :
        Chambre(float cSurface = 9.0, int cFenetres = 0) {
            surface = cSurface, fenetres = cFenetres;
        };
        string toString() {
            char sSurface[5];
            sprintf(sSurface, "%.1f", surface);
            return "[" + (string)sSurface + " m2, " + to_string(fenetres) + (fenetres > 1 ? " fenetres" : " fenetre") + "]";
        };
};

class Batiment {
    protected:
        string adresse;
    public:
        Batiment( string adr) : adresse(adr) {};
        string getAdr() {
            return adresse;
        };
};

class Maison : public Batiment
{
    Chambre * chambres;
    int nbChambres;
    public:
        Maison(int nCh, string adr, Chambre * mChambres) : Batiment(adr) {
            chambres = new Chambre[nbChambres = nCh];
            for(int i = 0; i < nbChambres; i++) {
                chambres[i] = mChambres[i];
            }
        }
        ~Maison() {
            delete [] chambres;
        }
        int getNbChambres() {
            return nbChambres;
        }
        string afficheChambres() {
            string result = "";
            for(int i = 0; i < nbChambres; i++) {
                if (i != 0) {
                    result += ", ";
                }
                result += chambres[i].toString();
            }
            return result;
        }
};

int main()
{
    Chambre chambres[] = {Chambre(12.5, 1), Chambre(14, 2), Chambre(9, 1)};
    Maison *m1 = new Maison(3, "LAVAL", chambres);
    cout << "Maison 1 a " << m1->getAdr() << ", chambres " <<  m1->getNbChambres() << " : " << m1->afficheChambres() << endl;
    Maison m2 = *m1;
    delete m1;
    cout << "Maison 2 a " << m2.getAdr() << ", chambres " <<  m2.getNbChambres() << " : "   << m2.afficheChambres() << endl;
}
```

1. Le programme devrait afficher, mais bugue...
```
Maison 1 a LAVAL, chambres 3 : [12.5 m2, 1 fenetre], [14.0 m2, 2 fenetres], [9.0 m2, 1 fenetre]
Maison 2 a LAVAL, chambres 3 : [12.5 m2, 1 fenetre], [14.0 m2, 2 fenetres], [9.0 m2, 1 fenetre]
```
Identifier l'anomalie, puis compléter le programme sans modifier le ```main()``` pour corriger l'anomalie, proposer deux solutions.

2. Modifier le programme dans le cas d'un héritage protected :
```cpp
class Maison : protected Batiment
```