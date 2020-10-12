#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    HANDLE hConsole;
    int k;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    cout << "Le";
    k = 2;
    SetConsoleTextAttribute(hConsole, k);
    cout << " vert";
    k = 0xF;
    SetConsoleTextAttribute(hConsole, k);
    cout<<" pour les pommes et les prairies\n"<<"Le ";
    k = 0xE;
    SetConsoleTextAttribute(hConsole, k);
    cout<<"jaune";
     k = 0xF;
    SetConsoleTextAttribute(hConsole, k);
    cout<<" pour le soleil et les canaris\n"<<"Le ";
    k = 0xC;
    SetConsoleTextAttribute(hConsole, k);
    cout<<"rouge";
    k = 0xF;
    SetConsoleTextAttribute(hConsole, k);
    cout<<" pour les fraise et le feu \n"<<"Le ";
     k = 0x0;
    SetConsoleTextAttribute(hConsole, k);
    cout<<"noir";
    k = 0xF;
    SetConsoleTextAttribute(hConsole, k);
    cout<<" pour le nuit et les corbeaux\n"<<"Le ";
    k = 0x8;
    SetConsoleTextAttribute(hConsole, k);
    cout<<"gris";
    k = 0xF;
    SetConsoleTextAttribute(hConsole, k);
    cout<<" pour les anes et les nuages\n"<<"Le ";
    k = 0x9;
    SetConsoleTextAttribute(hConsole, k);
    cout<<"bleu";
    k = 0xF;
    SetConsoleTextAttribute(hConsole, k);
    cout<<" pour la mer et le ciel\n"<<"Et toutes les couleurs pour colorier le monde"<<"\n \n \n \t\t\tChantal Couliou";


}
