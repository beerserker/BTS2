#include <iostream>
#include <string>
#include <string.h>
#include <iomanip>
#include<ios> 
#include<limits> 

using namespace std;

class Etudiant {
    protected :
        string nom;
        string prenom;
        float notes[4];
    public : 
        void saisie() {
            char input[100];
            
            cout << "Nom : ";
            gets(input); // Pour accepter les espaces
            nom = input;
            
            cout << "Prenom : ";
            gets(input); // Pour accepter les espaces
            prenom = input;
            
            cout << "Notes : " << endl;
            for(int i = 0; i < 4; i++) {
                cout << "[" << i << "] : ";
                cin >> notes[i];
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Pour nettoyer le buffer de cin
        }
        void affichage() {
            cout << prenom << " " << nom << nouppercase << " [";
            cout << notes[0] << ", " << notes[1] << ", " << notes[2] << ", " << notes[3];
            cout << "] -> " << setprecision(4) << moyenne() << endl; 
        }
        float moyenne() {
            return (notes[0] + notes[1] + notes[2] + notes[3]) / 4.0;
        }
};

class Etudiant2A : public Etudiant {
    private :
        float note_stage;
    public : 
        void saisie() {
            Etudiant::saisie();
            cout << "Note de stage : ";
            cin >> note_stage;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Pour nettoyer le buffer de cin
        }
        void affichage() {
            cout << prenom << " " << nom << nouppercase << " [";
            cout << notes[0] << ", " << notes[1] << ", " << notes[2] << ", " << notes[3] << ", " << note_stage ;
            cout << "] -> " << setprecision(4) << moyenne() << endl; 
        }
        float moyenne() {
            return (notes[0] + notes[1] + notes[2] + notes[3] + note_stage) / 5.0;
        }
};

int main() {
    /*
    Etudiant a;
    a.saisie();
    a.affichage();
    */
    Etudiant2A b;
    b.saisie();
    b.affichage();
    
    return 0;
}