#include <iostream>

using namespace std;

class Truc {
    public: 
        Truc() {
            cout << "Création d'un truc" << endl;
        }
        ~Truc() {
            cout << "Destruction d'un truc" << endl;
        }
};

int main() {
    Truc x;
    cout << "Bonjour !" << endl;
}