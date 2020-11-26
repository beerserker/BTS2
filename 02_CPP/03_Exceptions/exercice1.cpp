#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 0;

    try
    {
      if (a == 0 || b == 0)
    {
        throw(string) "Erreur : divison par 0 !";
    }
        a = a / b;
    }
    catch (const string &e)
    {
        cout << e << endl;

        return -1;
    }

    cout << "a / b = " << a << endl;
    return 0;
}