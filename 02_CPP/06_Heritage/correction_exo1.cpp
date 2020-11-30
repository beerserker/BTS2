#include <iostream>

using namespace std;

class Batiment {
    private:
        string adresse;
    public:
        Batiment() {
            adresse = "Sans adresse";
        };
        Batiment(string argAdresse) {
            adresse = argAdresse;
        };
        string getAdresse() {
            return adresse;
        };
        void setAdresse(string argAdresse) {
            adresse = argAdresse;
        };
};

class Maison : public Batiment {
    private : 
        int nbPieces;
    public :
        Maison() {
            nbPieces = 1;
        }
        Maison(string argAdresse, int argNbPieces) : Batiment(argAdresse) {
            nbPieces = argNbPieces;
        }
        int getNbPieces() {
            return nbPieces;
        };
        void setNbPieces(int argNbPieces) {
            nbPieces = argNbPieces;
        };
};

int main() {
    Batiment a;
    cout << a.getAdresse() << endl;
    a.setAdresse("3 rue du pont 53000 LAVAL");
    cout << a.getAdresse() << endl;
    Batiment b("476 bd Duguay-Trouin 49100 ANGERS");
    cout << b.getAdresse() << endl;

    Maison c;
    cout << c.getAdresse() << " - " << c.getNbPieces() << " pièces" << endl;
    c.setAdresse("47 rue des Corettes 44300 NANTES");
    c.setNbPieces(5);
    cout << c.getAdresse() << " - " << c.getNbPieces() << " pièces" << endl;
    Maison d("La Renaudière 53440 ARON", 3);
    cout << d.getAdresse() << " - " << d.getNbPieces() << " pièces" << endl;
    
    return 0;
}