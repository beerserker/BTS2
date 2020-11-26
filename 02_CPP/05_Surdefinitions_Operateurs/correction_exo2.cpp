#include <iostream>

using namespace std;

class Tableau {
    private :
        // Tableau tab de nbElements entiers
        int *tab, nbElements;
    public :
        // Constructeur
        Tableau(int n) {
            nbElements = n;
            tab = new int[nbElements];
        }
        // Constructeur
        Tableau(Tableau &);
        // Destructeur
        ~Tableau() {
            delete [] tab;
        }
        // Remplit le tableau avec une valeur
        void remplir(int valeur);
        // Remplit le tableau avec une valeur à un indice donné
        void remplir(int valeur, int indice);
        // Affiche le tableau
        void afficher();
        // Surdéfinition de l'opérateur =
        Tableau & operator = (Tableau);
        // Surdéfinition de l'opérateur []
        int & operator[] (int i);
};
Tableau::Tableau(Tableau & t) {
    nbElements = t.nbElements;
    tab = new int [nbElements];
    for (int i = 0; i < nbElements; i++) {
        tab[i] = t.tab[i];
    }
} 
void Tableau::remplir(int valeur) {
    for (int i = 0; i < nbElements; i++) {
        tab[i] = valeur;
    }
}
void Tableau::remplir(int valeur, int indice) {
    if (indice >= 0 && indice < nbElements) {
        tab[indice] = valeur;
    }
}
void Tableau::afficher() {
    cout << "[";
    for (int i = 0; i < nbElements; i++) {
        cout << (i == 0 ? "" : ", ") << tab[i];
    }
    cout << "]" << endl;
}
Tableau & Tableau::operator = (Tableau t) {
    nbElements = t.nbElements;
    delete [] tab;
    tab = new int [nbElements];
    for (int i = 0; i < nbElements; i++) {
        tab[i] = t.tab[i];
    }
    return *this;
}
int & Tableau::operator[] (int i) {
    if (i < 0 || i >= nbElements) {
        throw "Hors-limite";
    }
    return tab[i];
}

int main () {
    Tableau t1(5), t2(10);
    t1.remplir(0);
    t1.afficher();
    t1.remplir(7, 3);
    //t1.remplir(8, -3);  // Hors limite : aucun effet
    //t1.remplir(9, 6);   // Hors limite : aucun effet
    t1.afficher();
    t2.remplir(9);
    t2.afficher();
    t2 = t1;
    t2.afficher();
    t1.afficher();
    t2[2] = 5;
    t2.afficher();
}
