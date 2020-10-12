#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Entrer un nombre : ";
    cin >> n;
    try {
        switch (n)
        {
            case 1:
                throw 0;
                break;
            case 2:
                throw 0.0;
                break;
            default:
                throw '0';
                break;
        }
    }
    catch (int e) {
        cout << "le nombre saisi est 1" << endl;
    }
    catch (double e) {
        cout << "le nombre saisi est 2" << endl;
    }
    catch (char e) {
        cout << "le nombre saisi n'est ni 1 ni 2" << endl;
    }
    return 0;
}