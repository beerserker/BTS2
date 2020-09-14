// Exercice 6 - Surdéfinition de fonction
#include <iostream>

using namespace std;

const int COUNT_INT = 5;
const int COUNT_CHAR = 5;

void remplir (int [], int); 
// surdefinition de la fonction remplir
void remplir (char [], int);

int main (void) { 
    int intArray[COUNT_INT];
    remplir(intArray, COUNT_INT);

    cout << endl;

    char charArray[COUNT_CHAR];
    remplir(charArray, COUNT_CHAR);

    return 0;
}

void remplir (int array[], int count) {
    // Remplissage
    for (int i = 0; i < count; i++) {
        cout << "Saisissez l'entier N° " << i + 1 << " : ";
        cin >> array[i];
    }
    // Affichage
    cout << "Saisie :";
    for (int i = 0; i < count; i++) {
        cout << " " << array[i];
    }
}


void remplir (char array[], int count) {
    // Remplissage
    for (int i = 0; i < count; i++) {
        cout << "Saisissez le caractère N° " << i + 1 << " : ";
        cin >> array[i];
    }
    // Affichage
    cout << "Saisie :";
    for (int i = 0; i < count; i++) {
        cout << " " << array[i];
    }
}