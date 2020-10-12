#include <iostream>

using namespace std;

class MyException {
    private :
        int code;
    public : 
        MyException(int c) {
            code = c;
        }
        string getMessage() {
            string message;
            switch (code) {
                case 1:
                    message = "indice trop petit";
                    break;
                case 2:
                    message = "indice trop grand";
                    break;
                default:
                    message = "erreur inconnue";
                    break;
            }
            return message;
        }
};

int main() {
    int saisie;
    try {
        cin >> saisie;
        if (saisie < 2) {
            throw MyException(1);
        }
        if (saisie > 4) {
            throw MyException(2);
        }
        cout << "Merci pour la saisie !"
    }
    catch(MyException e)
    {
        std::cerr << e.getMessage() << endl;
    }
    
    return 0;
}