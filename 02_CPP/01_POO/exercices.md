# Introduction à la POO en C++

## Exercice 1

Migrer le progamme en C suivant en C++ en utilisant les concepts de programmation orientée objet.

Commencer par un diagramme de classe.

```cpp
#include <stdio.h>
struct article
{
    char designation[30];
    char reference[8];
    float px_unitaire;
};
int main (void)
{
    struct article art;
    
    //SAISIE
    // de la désignation
    printf("Saisie du nom : ");
    gets(art.designation);
    // de la référence
    printf("Saisie de la référence : ");
    scanf("%s", art.reference);
    // du prix
    printf("Saisie du prix unitaire : ");
    scanf("%f", &art.px_unitaire);
    
    // AFFICHAGE
    printf("Désignation : %s \n",art.designation);
    printf("Référence : %s \n",art.reference);
    printf("Prix unitaire : %.2f \n",art.px_unitaire);

    return 0;
}
```

## Exercice 2

On souhaite générer une classe représentant un compteur. Celui-ci est composé d'une valeur entière positive ou nulle, nulle à l'origine. Il ne peut varier que par pas de 1 (incrémentation ou décrémentation). Décrémenter un compteur nul est sans effet.
1) Commencer par un diagramme de classe
2) Ecrire la classe Compteur dans deux fichiers, un pour la déclaration (Counter.h) et un pour la définition (Counter.cpp)
3) Ecrire un programme de test

> Créer les fichiers dans un même répertoire, puis les compiler avec la commande ```g++ *.cpp -o exo_2.exe```

## Exercice 3

On veut écrire une classe Television comprenant les données membres suivantes :
+ status ("On"/"Off")
+ volume (0 <-> 50)
+ channel (1 <-> 100)

Le but est d’encapsuler dans une classe des méthodes permettant de manipuler un objet Television.

A la création, l’objet Television est éteint avec le volume à 0 et sur la chaine 1.

1) Définir les méthodes que vous voulez implémenter dans votre classe (mettez vous en situation
d’utilisateur de la classe, les méthodes doivent être pratiques et avoir un nom explicite).
2) Représenter la classe en UML.
3) Ecrire le code de ces méthodes. La déclaration et la définition de la classe ( fonctions membres )
seront dans des fichiers séparés (Television.h et Television.cpp).

## Exercice 4

Ecrire une classe Fraction. 

+ Cette classe contient un numérateur et un dénominateur dont les valeurs par défaut sont égale à 1. 
+ On pourra instancier un objet Fraction en spécifiant numérateur et dénominateur ou en ne spécifiant que le numérateur. 
+ On pourra afficher la Fraction sous la forme numérateur/dénominateur. 
+ On mettra en place les accesseurs nécessaires.
+ On pourra additionner deux objets Fraction et obtenir le résultat sous la forme d'un troisième objet Fraction.

1) Représenter la classe en UML.
2) Ecrire le code de la classe dans des fichiers séparés et un programme de démonstration.

## Exercice 5

Modifier le programme suivant pour qu'il affiche  :
```
nom : noname
nom : paul
nom : eric
nom : fred
nom : xavier
nombre de Sailors : 5
```

```cpp
#include <iostream>
#include <string.h>

using namespace std;

class Sailor {
    private :
        char *name;
        static int sailorsCount;
    public :
        Sailor(char *);
        Sailor();
        ~Sailor();
        int getSailorsCount();
        void setName(char *);
        void display();
};

Sailor::Sailor(char* argName) {
}

Sailor::Sailor() {
}

Sailor::~Sailor() {
}

void Sailor::display() {
}

void Sailor::setName(char * argName) {
}

int Sailor::getSailorsCount() {
}

int main() {
    Sailor sailor1;
    Sailor sailor2("paul");
    Sailor bateau1[3];

    sailor1.display();
    sailor2.display();

    bateau1[0].setNom("eric");
    bateau1[1].setNom("fred");
    bateau1[2].setNom("xavier");

    for (int i = 0; i < 3; i++) {
        bateau1[i].display();
    }

    cout<< "nombre de sailors :" << sailor1.getSailorsCount();
    
    return 0;
}
```

