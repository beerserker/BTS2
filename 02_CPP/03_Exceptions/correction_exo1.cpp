#include <iostream>

using namespace std;

int main() {
    int a = 1, b = 0;
    try {
        if (b == 0) {
            throw 0;
        }
        a = a / b;
        cout << "a / b = " << a << endl;
    }
    catch (int e) {
        cout << "Erreur : division par zéro !";
    }
    return 0;
}