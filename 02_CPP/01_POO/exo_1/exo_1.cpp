#include <iostream>
#include <iomanip>

using namespace std;

class Article
{
    private :
        char designation[30];
        char reference[8];
        float px_unitaire;
    public : 
        void saisir();
        void afficher();
};


void Article::saisir() {
    cout << "Saisie du nom : ";
    cin >> designation;
    cout << "Saisie de la référence : ";
    cin >> reference;
    cout << "Saisie du prix unitaire : ";
    cin >> px_unitaire;
}
void Article::afficher() {
    cout << "Désignation : " << designation << endl;
    cout << "Référence : " << reference << endl;
    cout << "Prix unitaire : " << setprecision(3) << px_unitaire << endl;
}

int main ()
{
    Article art;
    art.saisir();
    art.afficher();
    
    return 0;
}