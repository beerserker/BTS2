#include <iostream>

using namespace std;

class Truc
{
private:
    int x;
public : 
    Truc();
    Truc(Truc &);
    void fonction(Truc);
    ~Truc();
};

Truc::Truc()
{
    cout << "Creation d'un truc\n";
};
Truc::Truc( Truc &t)
{
    x=t.x;
    cout << "Copie d'un truc\n";
};
Truc::~Truc()
{
    cout << "Destruction d'un truc\n";
};
void Truc::fonction(Truc copie)
{
    x=copie.x;
   
};
int main()
{
    Truc x;
    Truc y = x;
    y.fonction(y);
    cout << "Bonjour !" << endl;
}
