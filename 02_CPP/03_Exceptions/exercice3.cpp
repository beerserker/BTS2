#include <iostream>

using namespace std;
class MyExeption
{
private:
    int code;

public:
    string geterr();
    void seterr(int);
};
string MyExeption::geterr()
{
    switch (code)
    {
        case 1 : return "indice trop petit";
        case 2 : return "indice trop grand";
        default: return "erreur inconnue";
    }
}
void MyExeption::seterr(int c)
{
    code = c;
}

int main()
{
    int min = 2, max = 4, code;

    cout << "code : ";
    cin >> code;

    try
    {
        if (code > max)
        {
            MyExeption test;
            test.seterr(2);
            throw test;
        }
        else if (code < min)
        {
            MyExeption test;
            test.seterr(1);
            throw test;
        }
    }
    catch (MyExeption e)
    {

        cout << e.geterr() << endl;
    }
}
