#include <stdio.h>
#include <stdlib.h>

struct Person
{
       char name[20] ;
       int age ;
};

int main()
{

struct Person nom;
int i;
int taille;
//saisie des valeurs

gets(nom.name);
scanf("%d",&nom.age);
//affichage des valeurs
for(i=0;i<21;i++)
{
    nom.name[i]='\0';
}
printf("nom: %s et age : %d",nom.name,nom.age);
//calcul de taille  
taille=20*8+32;
printf("la taille de la strucute en bits est : %d",taille);






















}
