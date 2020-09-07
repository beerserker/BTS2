#include <stdio.h>
#include <stdlib.h>
#define null'\0'
#define space ' '
int word(char, int, char[], int);
int main()
{
    char string[100];
    int i;
    int NbOfWord = 0;
    //initialise le tableau
    for (i = 0; i < 101; i++)
    {
        *(string + i) = '\0';
    }
    i = 0;
    //lit la chaine de caracteres
    printf("entrer un maximum de 100 caracteres :\n");
    gets(string);
    //compte le nombre de mot
    i = 0;
    while ((i < 100) && (*(string + i) != '\0'))
    {
        NbOfWord = word(space, NbOfWord, string, i);
        NbOfWord = word(null, NbOfWord, string, i);
        i++;
    }
    printf("le nombre de mots est : %d", NbOfWord);
}

/**
 * @param carac caractere considérer comme separateur de mots
 * @param NbOfWord nombre de mots
 * @param string[] chaine de caractere contenant les mots a etudier
 * @param i incrementeur du tableau contenant la chaine
*/
int word(char carac, int NbOfWord, char string[100], int i)
{
    if (((*(string + i) != ' ')) && (*(string + i + 1) == carac))
    {
        NbOfWord++;
    }
    return NbOfWord;
}