#include <iostream>

using namespace std;

class Truc {
    public: 
        Truc() {
            cout << "Création d'un truc" << endl;
        }
        Truc(Truc & t) {
            cout << "Copie d'un truc" << endl;
        }
        ~Truc() {
            cout << "Destruction d'un truc" << endl;
        }
};

void fonction (Truc a) {}

int main() {
    Truc x;
    Truc y = x;
    fonction(y);
    cout << "Bonjour !" << endl;
}