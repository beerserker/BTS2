#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Entrer un nombre : ";
    cin >> n;
    try
    {

        if (n == 2 )
        {
            throw n;
        }
        
        if ( n ==1)
        { bool c=1;
            throw c;
        }

        else
        {
            throw(string) "le nombre saisi n'est ni 1 ni 2";
        }
    }
    catch (int n)
    {
        cout << "le nombre saisi est " << n << endl;
    }
     catch (bool n)
    {
        cout << "le nombre saisi est " << n << endl;
    }
     catch (string& e)
    {
        cout << e << endl;
    }
    return 0;
}
