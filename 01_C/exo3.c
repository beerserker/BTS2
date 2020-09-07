#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int affichage(int *, char *);
int main()
{
    int saisi[MAX];
    int pair[MAX];
    int impair[MAX];
    int j, k, i;

    //saisi des nombres
    for (i = 0; i < MAX; i++)
    {
        *(impair + i) = *(pair + i) = '\0';
    }

    for (i = 0; i < MAX; i++)
    {
        printf("valeur : ");
        scanf("%d", saisi + i);
    }
    //tri des nombres en fonction de le parité
    for (i = 0, j = 0, k = 0; i < MAX; i++)
    {
        if (*(saisi + i) % 2 == 0)
        {
            *(pair + j) = *(saisi + i);
            j++;
        }
        else
        {
            *(impair + k) = *(saisi + i);
            k++;
        }
    }
    //affichage des nombres pair
    affichage(pair, "\n valeurs paires :");
    //affichage des nombres pair
    affichage(impair, "\n valeurs impaires :");
    return 0;
}

int affichage(int *tab, char *message)
{
    int i = 0;
    printf(message);
    i = 0;
    while (*(tab + i) != '\0')
    {
        printf(" %d ", *(tab + i));
        i++;
    }
}
