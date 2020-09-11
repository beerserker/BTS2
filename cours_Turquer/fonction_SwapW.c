#include <stdio.h>
#include <stdlib.h>

unsigned short Swapw(unsigned short);
unsigned short Swapw1(unsigned short);
unsigned short Swapw2(unsigned short);
union Mot {
    unsigned short smot;
    unsigned char tab[2];
};

int main()
{
    unsigned short mot;
    scanf("%x", &mot);
    printf("\nle mot est %04x avant le changement", mot);
    mot = Swapw(mot);
    printf("\nle mot est %04x apres le changement", mot);
    mot = Swapw1(mot);
    printf("\nle mot est %04x apres le changement", mot);
    mot = Swapw2(mot);
    printf("\nle mot est %04x apres le changement", mot);
    return 0;
}

unsigned short Swapw(unsigned short mot)
{
    char octet1 = 0, octet2 = 0;
    char *ptr;
    ptr = (char *)&mot;
    octet2 = *ptr;
    ptr++;
    octet1 = *ptr;
    ptr--;
    *ptr = octet1;
    ptr++;
    *ptr = octet2;
    return mot;
}

unsigned short Swapw1(unsigned short mot)
{
    unsigned char octet1 = 0, octet2 = 0;
    octet2 = mot >> 8;
    octet1 = mot;
    mot = octet1;
    mot = mot << 8;
    mot = mot & (0xFF00);
    mot = mot + octet2;
    return mot;
}

unsigned short Swapw2(unsigned short mot)
{
    union Mot tmp = {mot};
    char temp;
    temp = tmp.tab[0];
    tmp.tab[0] = tmp.tab[1];
    tmp.tab[1] = temp;

    mot = tmp.smot;
    return mot;
}
