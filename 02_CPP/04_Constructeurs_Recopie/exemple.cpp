#include <iostream>

using namespace std;

class tab { 
    
    private:
        int nbelem; // Nombre d'éléments dans le tableau
        int * adr;  // Pointeur sur le 1er élément du tableau
    
    public:
        // Constructeur avec allocation dynamique 
        tab (int n) { 
            nbelem = n;
            adr = new int [nbelem];
            cout << "C - @obj : " << this << ", @tab : " << adr << endl;
        }

        // Destructeur qui supprime l'allocation dynamique
        ~tab () { 
            cout << "D - @obj : " << this << ", @tab : " << adr << endl;
            delete [] adr;
        }

        // Constructeur par recopie
        tab (tab & t) { 
            nbelem = t.nbelem;
            // Création d'un nouveau tableau
            adr = new int [nbelem];
            // Recopie des valeurs de l'ancien
            for (int i = 0; i < nbelem; i++) { 
                adr[i] = t.adr[i];
            }
            cout << "R - @obj : " << this << ", @tab : " << adr << endl;
        }
};

int main() { 
    tab t1 (5);     // Passage dans le constructeur normal
    tab t2 = t1;    // Passage dans le constructeur par recopie
    return 0;
}