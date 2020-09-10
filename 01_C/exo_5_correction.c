#include <stdio.h>
#include <stdlib.h>

struct Person
{
    char name[20] ;
    int age ;
};
int main() {
    struct Person person;

    // Saisie des valeurs
    printf("Saisir le nom : ");
    gets(person.name);
    printf("Saisir l'age : ");
    scanf("%d", &person.age);

    // Affichage des valeurs
    printf("\nNom : %s, Age : %d\n", person.name, person.age);

    // Affichage de la taille de la structure
    printf("\nLa taille de la structure : %d octets\n", sizeof(person));

    return 0;
}