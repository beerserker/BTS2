#include <iostream>
#include <string>
using namespace std;

class erreur : public exception
{
private:
    int niveau;
    string message;
    int code;

public:
    erreur(string _message, int _niveau = 1, int _code = 100) throw()
    {
        niveau = _niveau;
        code = _code;
        message = _message;
    }
    virtual const char *what() const throw()
    {
        //message=(string)"Excepetion Erreur "+ message;
        return message.c_str();
    }

    int getCode() const throw()
    {
        return code;
    }
    int getNiveau() const throw()
    {
        return niveau;
    }
};

int main(void)
{

    try
    {
        throw erreur((string) "Exception dans mon programme", 2, 200);
    }
    catch (exception const &e)
    {
        cerr <<"Erreur Exception"<< e.what() << '\n';
    }
    catch (erreur e)
    {
        cerr << "Erreur Exception "<<e.what() << '\n';
    }
}
