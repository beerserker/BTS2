//Exercice #2-Révisions de C-
#include <stdio.h>
#include <stdlib.h>
int saisi();
int affichage(int *);
int pari(int);
int main()
{
    int tab[7];
    int rank[7] = {7, 6, 5, 4, 3, 2, 1, 0};
    int i, y;
    int pair = 0;

    //saisie des bits
    saisi();
    //'affichage du rangs des 1 et qui en retourne le nombre
    pair = affichage(tab);
    //'affichage de la parité de l'octet
    pairi(pair);
    return 0;
}

int saisi()
{
    for (i = 7; i >= 0; i--)
    {

        printf("%d :", i);
        scanf("%d", &tab[i]);
    }
}

int affichage(int *tab)
{
    printf("rang des valeur 1 : ");

    for (i = 0; i < 8; i++)
    {

        if (*(tab + i) == 1)
        {
            printf(" %d", rank[i]);
            pair = pair + 1;
        }
    }
    return pair;
}

int pairi(int pair)
{
    printf("\n Parité : ");
    i = pair % 2;
    if (i == 0)
    {
        printf("paire");
    }
    else
    {
        printf("impaire");
    }
}
