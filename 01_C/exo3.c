#include <stdio.h>
#include <stdlib.h>
#define MAX 10

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
        printf("val : ");
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
    printf("\n1) ");
    i = 0;
    while (*(pair + i) != '\0')
    {
        printf(" %d ", *(pair + i));
        i++;
    }
    //affichage des nombres pair
    printf("\n2) ");
    i = 0;
    while (*(impair + i) != '\0')
    {
        printf(" %d ", *(impair + i));
        i++;
    }
    return 0;
}