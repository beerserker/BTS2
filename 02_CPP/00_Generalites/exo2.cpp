#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number = 1;

    while (number != 0)
    {
        do
        {
            cout << "entrer un nombre positif\n--faire 0 pour sortir--" << endl;
            cin >> number;
        } while (number < 0);
        if (number != 0)
        {
            float root = sqrt(number);
            cout << "la racine de " << number << " est " << root << endl;
        }
    }
}