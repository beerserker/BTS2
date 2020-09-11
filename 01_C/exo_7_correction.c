// Exercice 7 - Saisie d'un tableau de taille variable
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (void)
{ 
    char hasMore;
    char input[10];
    int *intArray = NULL, i = 0, *current;
    
    // Saisie des entiers
    do {
        // Gestion de la taille du tableau
        intArray = (int *) realloc (intArray, sizeof (int) * (i + 1));
        // En cas d'erreur de reallocation de mémoire
        if (intArray == NULL)
        {
            printf("Erreur d'allocation de mémoire");
            exit(-1);
        }
        // Saisie de la nouvelle valeur
        printf("\nSaisir l'élément N°%2d : ", i + 1);
        gets(input);
        sscanf(input, "%d", intArray + i);
        i++;

        printf("Saisir d'autres variables (O/N) ? ");
        gets(input);
        sscanf(input, "%c", &hasMore);
        hasMore = toupper(hasMore);
    } 
    while (hasMore != 'N');

    // Affichage du tableau
    printf("\nTableau saisi :\n");
    for (current = intArray; current < intArray + i; current++) {
        printf("%d ",*current);
    }
    printf("\nTaille mémoire allouée : %d octets\n", sizeof(int) * i);
    
    // Libération de la memoire allouée
    free(intArray);

    return 0;
}