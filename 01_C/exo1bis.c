#include <stdio.h>

int main()

{
    int tab[10];
    int i, y;
    int mini = 0;
    int maxi = 0;
    //saisi des nombres
    for (i = 0; i < 10; i++)
    {
        printf("saisissez le nombre ");
        scanf("%d", (tab + i));
    }
    mini = *tab;
    maxi = *tab;
    //selection des minimum et maximum
    for (i = 0; i < 10; i++)
    {
        if (*(tab + i) > maxi)
        {
            maxi = *(tab + i);
        }
        if (*(tab + i) < mini)
        {
            mini = *(tab + i);
        }
    }
    printf("le nombre le plus grand est %d et le nombre le plus petit est %d", maxi, mini);
}
