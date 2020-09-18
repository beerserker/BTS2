#include <iostream>
#include "television.h"

using namespace std;

Television::Television() {
    status = false;
    volume = 0;
    channel = 1;
}

void Television::toggleOnOff() {
    status = !status;
}

void Television::changeVolume()
{
    if (status) {
        do {
            cout<< "Changer le volume (0-50) : ";
            cin >> volume;
        }
        while (volume < 0 || volume > 50);
    }
    else {
        cout << "La télévision est eteinte" << endl;
    }
}

void Television::changeChannel()
{
    if (status) {
        do {
            cout<< "Changer la chaine (1-100) : ";
            cin >> channel;
        }
        while (channel < 1 || channel > 100);
    }
    else {
        cout << "La télévision est eteinte" << endl;
    }
}

void Television::getFullStatus()
{
    if(status) {
        cout << "La télévision est allumée" << endl;
        cout << "Le volume est sur "<< volume << endl;
        cout << "la chaine est sur "<< channel << endl;
    }
    else {
        cout << "La télévision est eteinte" << endl;
    }
}