// Exercice 2 - Formalisme "pointeur"
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
    int tab[MAX];
    int min,max,i;

    // Saisie des valeurs
    for (i = 0; i < MAX; i++) {
        printf("\nentrer une valeur:");
        scanf("%d", tab + i);
    }

    // Parcours du tableau
    for (i = 0, min = max = *tab; i < MAX; i++) {
        
        // Recherche de la plus petite valeur
        if (*(tab + i) < min) {
            min = *(tab+i);
        }

        // Recherche de la plus grande valeur
        if (*(tab + i) > max) {
            max = *(tab+i);
        }
    }
    printf("\nmin = %d, max= %d", min, max);
    
    return 0;
}