// Exercice 2 - Racine carrée
#include <iostream>
#include <cmath>

using namespace std;

main()
{
    double i = 0;
    do {
        cout << "donnez un nombre positif : ";
        cin >> i;
        if (i < 0) {
            cout << "svp positif" << endl;
            continue;
        }
        if (i > 0) {
            cout << "sa racine carrée est : " << sqrt(i) << "\n";
        }
    } while (i);
}