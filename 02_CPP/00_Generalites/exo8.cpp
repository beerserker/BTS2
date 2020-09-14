#include <iostream>

using namespace std;
int convertS(int , int = 0, int = 0);

int main()
{
    int heure, min, sec;
   
    int condition;

    cout << "heure :";
    cin >> heure;
    cout << "\najouté des minutes ?";
    cout << "\n1: Oui";
    cout << "\n2:Non" << endl;
    cin >> condition;
    if (condition == 1)
    {
        cout << "\n min :";
        cin >> min;
    }
    cout << "\najouté des secondes ?";
    cout << "\n1: Oui";
    cout << "\n2:Non" << endl;
    cin >> condition;
    if (condition == 1)
    {
        cout << "\n sec :";
        cin >> min;
    }

    sec = convertS(heure, min, sec);
    cout << "\nnombres de secondes une foi convertis :" << sec;
}

int convertS(int heure, int min, int sec)
{
    sec = (heure * 60 * 60) + (min * 60) + sec;
    return sec;
}
