// Exercice 3 - Suite harmonique
#include <iostream>

using namespace std;

main() {
    int max, i = 1;
    float r;
    do {
        cout << "combien de termes ? ";
        cin >> max;
    } 
    while (max < 1);
    do {
        r += (float) 1 / i++;
    } 
    while (i <= max);
    cout << "le résultat est : " << r;
}