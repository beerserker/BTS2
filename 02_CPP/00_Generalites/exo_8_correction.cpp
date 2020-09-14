// Exercice 8 - Valeurs par défaut
#include <iostream>

using namespace std;

// Prototype avec les valeurs par défaut
int nombreDeSecondes(int heures, int minutes = 0, int secondes = 0);

int main() {
    cout << nombreDeSecondes(1, 10, 25) << endl;
    cout << nombreDeSecondes(1, 10) << endl;
    cout << nombreDeSecondes(1) << endl;
    return 0;
}
// Définition de la fonction, SANS les valeurs par défaut
int nombreDeSecondes(int heures, int minutes, int secondes) {
    return heures * 3600 + minutes * 60 + secondes;
}