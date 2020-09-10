#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int i = 0;
    int stop = 0;
    p = calloc(1, sizeof(int));
    do
    {
        p = realloc(p, sizeof(int));
        if (p == NULL)
        {
            exit;
        }
        printf("saisir un entier :");
        scanf("%d", (p + i));
        printf("fin de saisi ?\n1:OUI\n2:NON\n");
        fflush(stdin);
        scanf("%d", &stop);

        i++;
    } while (stop != 1);

    stop = i;

    for (i = 0; i < stop; i++)
    {
        printf("%d", *(p + i));
    }
}
