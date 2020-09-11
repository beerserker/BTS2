// Exercice 4 - Compteur de mot dans une chaîne de caractères
#include <stdio.h>
#include <ctype.h>

int main()
{
    char string[101];
    char *p;
    int wordsCount = 0;
    int isWord = 0;
    
    // Saisie des données
    printf("Entrez une ligne de texte (max.100 caractères) :\n");
    gets(string);

    // Comptage des mots
    for (p = string; *p != '\0'; p++) {
        if (*p == ' ') {
            isWord = 0;
        }
        else if (!isWord) {
            isWord = 1;
            wordsCount++;
        }
    }

    // Affichage du résultat
    printf("La chaîne \"%s\" \nest formée de %d mot%c.\n", string, wordsCount, (wordsCount == 1) ? ' ' : 's');

    return 0;
}