#include <iostream>
#include <windows.h>
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

void affichage(int etage, int max, int color) //affichage des differentes lignes
{
    HANDLE hConsole;
    int k = 2;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

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
      
        if(color==3)
        {
             k = 6;
            SetConsoleTextAttribute(hConsole, k);
            color++;
        }
         else if (color == 5)
        {
            k = 4;
            SetConsoleTextAttribute(hConsole, k);
            color=0;
        }
        else if (color == -1)
        {
         k = 5;
            SetConsoleTextAttribute(hConsole, k);
            color=0;
        }
        
        
        else
        {
            k = 1;
            SetConsoleTextAttribute(hConsole, k);
            color++;
        }
       
        cout << "*";
    }
    cout << endl;
}
void sapin(int max) //affichage du sapin complet
{
    HANDLE hConsole;
    int k;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    for (int i = 0; i < max; i++)
    {
        affichage(i + 1, max, 0);
    }

    affichage(1, max, -1);
}