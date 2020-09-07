// Exercice 3 - Trier 10 valeurs par parité
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void displayValues (int*, char, char*);

int main() {
    int values[MAX];
    int odd[MAX];
    int even[MAX];
    int i, j, k;

    // Valorisation par défaut des tableaux
    for(i = 0; i < MAX; i++) {
        *(even + i) = *(odd + i) ='\0';
    }

    // Saisie des valeurs
    for(i = 0 ; i < MAX; i++) {
        printf("Entrer une valeur (%d) : ", MAX - i);
        scanf("%d", values + i);
    }

    // Tri des valeurs par parité
    for(i = 0, j = 0 , k = 0; i < MAX; i++) {
        // Valeur paire
        if(*(values + i) % 2 == 0) {
            *(even + j) = *(values + i);
            j++;
        }
        // Valeur impaire
        else {
            *(odd + k) = *(values + i);
            k++;
        }
    }

    // Affichage des valeurs impaires
    displayValues(odd, '\0', "\nValeurs impaires : ");
    
    // Affichage des valeurs paires
    displayValues(even, '\0', "\nValeurs paires : ");

    return 0;
}

/**
 * Affiche les valeurs d'un tableau d'entiers et s'arrête à la première occurence du caractère stop
 * @param values   Le tableau d'entiers à afficher
 * @param stop     Le caractère qui stoppe l'affichage
 * @param message  Le message d'annonce
 * @return Nothing
 */
void displayValues (int* values, char stop, char* message) {
    int i = 0;
    printf(message);
    while (*(values + i) != stop) {
        printf(" %d ", *(values + i));
        i++;
    }
}