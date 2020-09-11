# Du C au C++

## Exercice #1

Migrer le programme suivant en C++ en utilisant les nouvelles possibilités du C++

```c
#include <stdio.h>
struct s_personne
{
    char nom [30];
    int age;
};
int main (void) { 
    struct s_personne p[3];
    int nbpers, i;
    nbpers = 0;
    //saisie des 3 personnes
    for (i = 0; i < 3; i++)
    { 
        printf("Saisissez le nom de la personne N° %d : ",i+1);
        fflush(stdin);
        gets(p[i].nom);
        printf("Saisissez l'age de la personne N° %d : ",i+1);
        fflush(stdin);
        scanf("%d",&p[i].age);
        nbpers++;
    }
    printf("\n%d personnes ont ete saisies\n", nbpers);
    getch();
    return 0;
}
```

## Exercice #2

Ecrire un programme qui calcule la racine carrée (cmath/sqrt) de nombre fourni par l'utilisateur. Il refusera les valeurs négatives et s'arrêtera si on lui fournit 0.

## Exercice #3

Calculer la somme des n premiers termes de la série harmonique. La valeur de n est donnée par l'utilisateur.

## Exercice #4

Dessinez un sapin de Noël formé d'étoiles :

```
Nombre d'étages : 5

    *
   ***
  *****
 *******
*********
    *
```

Le nombre d'étages est donné par l'utilisateur.

## Exercice #5

Afficher les tables de multiplications de 1 à 10 sous la forme suivante :

```
     |   1   2   3   4   5   6   7   8   9  10
----------------------------------------------
  1  |   1   2   3   4   5   6   7   8   9  10
  2  |   2   4   6   8  10  12  14  16  18  20
  3  |   3   6   9  12  15  18  21  24  27  30
  4  |   4   8  12  16  20  24  28  32  36  40
  5  |   5  10  15  20  25  30  35  40  45  50
  6  |   6  12  18  24  30  36  42  48  54  60
  7  |   7  14  21  28  35  42  49  56  63  70
  8  |   8  16  24  32  40  48  56  64  72  80
  9  |   9  18  27  36  45  54  63  72  81  90
 10  |  10  20  30  40  50  60  70  80  90 100
 ```

## Exercice #6

On désire écrire une fonction qui permette de faire la saisie d’un tableau qui lui est passé en argument.

Surdéfinissez cette fonction pour qu’elle puisse effectuer la saisie :
+ d’entiers.
+ de caractères.

## Exercice #7

```cpp
void fct (int);         // fonction A 
void fct (float); 		// fonction B
void fct (int,float); 	// fonction C
void fct (float,int); 	// fonction D

int main () {
    
    int n,p;
    float x,y;
    char c;
    double z;

    /*
    Les appels suivants des fonctions sont ils corrects ? 
    Si oui, quels sont les fonctions appelées et quelles sont éventuellement les conversions mises en place ?
    */

    fct (n);
    fct (x);
    fct (n,x);
    fct (x,n);
    fct (c);
    fct (n,p);
    fct (n,c);
    fct (n,z);
}
```

## Exercice #8

On désire écrire une fonction qui permet de retourner le nombre de secondes en additionnant les heures, minutes et secondes qu'on lui passe en paramètres. 
Seul le paramètre des heure est obligatoire.