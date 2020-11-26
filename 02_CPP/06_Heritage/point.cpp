#include <iostream>
#include <string>

using namespace std;

class Point {
    private :
        int x, y;
    public :
        void initialiser (int abs, int ord) {
            x = abs;
            y = ord;
        };
        void afficher(){
            cout << "(" << x << "," << y << ")";
        };
};

class PointCouleur : public Point {
    private :
        string couleur; 
    public :
        void colorer(string nom) {
            couleur = nom;
        };
        void initialiserAvecCouleur(int abs, int ord, string nom) {
            initialiser(abs, ord);
            couleur = nom;
        };
        void afficherAvecCouleur() {
            afficher();  // fonction public de la classe Point
            cout << " et je suis " << couleur;
        }
};

int main() {
    PointCouleur a;
    a.initialiser(3, 5); // fonction public de la classe Point
    a.colorer("rose");
    a.afficher();        // fonction public de la classe Point
    
    cout << endl;
    a.afficherAvecCouleur();

    cout << endl;
    PointCouleur b;
    b.initialiserAvecCouleur(2, 6, "jaune");
    b.afficherAvecCouleur();
}