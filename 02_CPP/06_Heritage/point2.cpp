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
        void initialiser(int abs, int ord, string nom) {
            Point::initialiser(abs, ord); // fonction public de la classe Point
            couleur = nom;
        };
        void afficher() {
            Point::afficher();  // fonction public de la classe Point
            cout << " et je suis " << couleur;
        }
};

int main() {
    PointCouleur a;
    a.initialiser(1, 4, "vermillon"); // fonction public de la classe Point
    a.afficher();        // fonction public de la classe PointCouleur
}
