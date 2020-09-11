#include <iostream>
using namespace std;

void affichage(int, int);
void sapin(int);
int main()
{
    int max;

    cout << "nombre d'etage de pur bonheur :";
    cin >> max;
    sapin(max);
}

void affichage(int etage, int max) //affichage des differentes lignes
{
    int carak;
    int etoile;

    carak = (max * 2) - 1; 
    etoile = (etage * 2) - 1;
    int espace;
    int i;
    espace = (carak - etoile) / 2;
    for (i = 0; i < espace; i++) //affochage des espaces
    {
        cout << " ";
    }
    for (i = 0; i < etoile; i++) //affichage des etoiles
    {
        cout << "*";
    }
    cout << endl;
}
void sapin(int max) //affichage du sapin complet
{
    for (int i = 0; i < max; i++)
    {
        affichage(i + 1, max);
    }
    affichage(1, max);
}
