#include <iostream>

using namespace std;

class Truc
{
private:
    int x;
public : 
    Truc();
    ~Truc();
};

Truc::Truc()
{
    cout << "Creation d'un truc\n";
};
Truc::~Truc()
{
    cout << "Destruction d'un truc\n";
};

int main()
{
    Truc x;
    cout << "Bonjour !" << endl;
}