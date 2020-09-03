# Révisions de C

##	Exercice #1

Ecrire, de deux façons différentes, un programme qui lit 10 nombres entiers dans un tableau avant d'en rechercher le plus grand et le plus petit :

1. en utilisant uniquement le "formalisme tableau"
2. en utilisant le "formalisme pointeur", à chaque fois que cela est possible

## Exercice #2

On veut connaître la parité d'un octet saisi par l'utilisateur et afficher le rang des " 1" rencontrés. 

Exemple :	
```
octet saisi :	1	0	1	1	1	0	1	0
       rang :	7	6	5	4	3	2	1	0

Rangs de valeur 1 : 7  5  4  3  1
Parité : impaire
```

Séparer le code en 3 fonctions :
+ Une de saisie des bits
+ Une d'affichage du rangs des 1 et qui en retourne le nombre
+ Une d'affichage de la parité de l'octet

> **Tips** : Pour afficher les accents dans la console : chcp 65001

## Exercice #3

Indenter, commenter, factoriser, revoir les nommages et améliorer les entrées/sorties pour rendre le code suivant compréhensible.

```c
#include <stdio.h>
#include <stdlib.h>
#define M 10

int main() {
int a[M];
int b[M];
int c[M];
int i,j,k;

for(i=0;i<M;i++)
*(c+i) = *(b+i) ='\0';

for(i=0;i<M;i++)
{
printf("val : ");
scanf("%d",a+i);
}
for(i=0,j=0,k=0;i<M;i++)
{
if(*(a+i)%2==0)
{
*(b+j)=*(a+i);
j++;
}
else
{
*(c+k)=*(a+i);
k++;
}
}
printf("\n1) ");
i=0;
while(*(b+i)!='\0')
{
printf(" %d ",*(b+i));
i++;
}
printf("\n2) ");
i=0;
while(*(c+i)!='\0')
{
printf(" %d ",*(c+i));
i++;
}
return 0;
}
```

## Exercice #4

En utilisant la notion de pointeur, écrire un programme qui demande de saisir une chaîne de caractères et qui affiche le nombre de mots de la chaine (!= ' ').

## Exercice #5

En utilisant la structure suivante :
```c
struct Person
{
       char name[20] ;
       int age ;
};
```
écrire un programme qui :
1. permet de saisir au clavier les informations et les stocke dans une de structure du type Person 
2. affiche à l'écran l'ensemble des informations de la structure.
3. affiche la taille de la structure

## Exercice #6

Ecrire un programme qui 
1. permettent de stocker les noms et prénoms d'un élève et ses cinq dernières notes dans une structure.
   + Initialiser avec : "HADDOCK", "Archibald" et 10, 12, 8, 10, 16 pour les notes
2. affiche les données et la moyenne des notes
3. duplique les données de la structure dans une deuxième structure et change la dernière note de cette dernière à 15.
4. Affiche les données des deux structures et la moyenne des notes

## Exercice #7

Ecrire un programme qui permet de saisir un tableau d'entiers sans connaître sa taille à l'avance. Après la saisie, le tableau sera affiché avec un pointeur, ainsi que la taille mémoire allouée  et la mémoire sera libérée.
