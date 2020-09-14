// Exercice 4 - Sapin de Noël
#include <iostream>

using namespace std;

main() {
    int l;
    
    do {
        cout << "nombre d'étages : ";
        cin >> l;
    } while (l < 1);
    
    cout << '\n';
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l - i + 1; j++) {
            cout << ' ';
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << '*';
        }
        cout << '\n';
    }
    cout << string(l + 1, ' ') << '*';
}