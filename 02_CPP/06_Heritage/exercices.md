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