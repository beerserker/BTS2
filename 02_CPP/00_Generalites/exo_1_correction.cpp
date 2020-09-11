// Exercice 1 - Migrer un programme en C++
#include <iostream> // Pour cin et cout

using namespace std; // Espace de nom standard

struct s_personne {
    char nom [30];
    int age;
};

int main (void) {
    s_personne p[3];
    int nbpers = 0;
    
    //saisie des 3 personnes
    for (int i = 0; i < 3; i++, nbpers++)
    {
        cout << "Saisissez le nom de la personne N° " << i+1 << " : ";
        cin >> p[i].nom;
        cout << "Saisissez l'age de la personne N° " << i+1 << " : ";
        cin >> p[i].age ;
    }
    cout << endl << nbpers << " personnes ont ete saisies" << endl;
    return 0;
}