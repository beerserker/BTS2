#include <iostream>
using namespace std;

class Erreur1 : public exception {};
class Erreur2 : public exception {};
class Erreur3 : public exception {};

int calcul1(int x, int y) {
    if (x == y) {
        Erreur1 e;
        throw e;
    }
    else if (x == 0) {
        Erreur2 e;
        throw e;
    }
    else if (y == 0) {
        Erreur3 e;
        throw e;
    }
    return x + y;
}

int calcul2(int x, int y, int z) {
    try {
        return(calcul1(x, y));
    }
    catch(Erreur2 e) {
        return y + z;
    }
    catch(Erreur3 e) {
        return x + z;
    }
}

int main() {
    try {
        cout << calcul2(1, 3, 5) << endl;
        cout << calcul2(0, 3, 5) << endl;
        cout << calcul2(2, 0, 5) << endl;
        cout << calcul2(3, 3, 5) << endl;
    }
    catch(Erreur1 e) {
       cout<<"Erreur fatale"<< endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
//affiche 
// 4
// 8
// 7
// Erreur fatale
// Hello World!