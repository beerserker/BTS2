#include <stdio.h>
#include <stdlib.h>

struct eleve
{
    char nom[20];
    char prenom[20];
    int note[5];
};


int main()
{
    struct eleve name;
    struct eleve name2;
    float moyenne=0;
    int i;
    //saisi des valeures
    for (i = 0; i < 21; i++)
    {
        name.nom[i] = '\0';
        name.prenom[i] = '\0';
    }
    printf("\nentrez le nom de l'esclave :");
    gets(name.nom);
    printf("\nentrez le prenom de l'esclave :");
    gets(name.prenom);

    printf("\n5 derniere notes :");
    for (i = 0; i < 5; i++)
    {
        printf("\n%d :", i + 1);
        scanf("%d", &name.note[i]);
    }

    //affichage des valeurs
    printf("\nl'eleve %s %s a eu les notes suivantes : ", name.nom, name.prenom);
    for (i = 0; i < 5; i++)
    {
        printf("%d ", name.note[i]);
    }
    //moyenne
    for(i=0;i<5;i++)
    {
        moyenne=name.note[i]+moyenne;
    }
   moyenne=moyenne/(i+1);
   printf("\net sa moyenne :%f",moyenne);
    //transphere vers la seconde structure
    name2=name;
    name2.note[4]=15;
    //affichage +moyenne
    printf("\nl'eleve %s %s a eu les notes suivantes : ", name.nom, name.prenom);
    for (i = 0; i < 5; i++)
    {
        printf("%d ", name.note[i]);
    }
    printf("\nl'eleve %s %s a eu les notes suivantes : ", name2.nom, name2.prenom);
    for (i = 0; i < 5; i++)
    {
        printf("%d ", name2.note[i]);
    }
    //moyenne
    moyenne=0;
    for(i=0;i<5;i++)
    {
        moyenne=name2.note[i]+moyenne;
    }
   moyenne=moyenne/(i+1);
   printf("\net sa moyenne : %f",moyenne);
    
}
