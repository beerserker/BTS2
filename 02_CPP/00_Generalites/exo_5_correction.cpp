// Exercice 5 - Tables de multiplication
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, j;

    // En-têtes
    cout << "     |";
    for (j = 1; j <= 10; j++) {
        cout << setw(4) << j;
    }
    cout << "\n------";
    for (j = 1; j <= 10; j++) {
        cout << "----";
    }

    // Lignes
    for (i = 1; i <= 10; i++) {
        cout << '\n' << setw(3) << i << "  |";
        for (j = 1; j <= 10; j++) {
            cout << setw(4) << i * j;
        }
    }
}