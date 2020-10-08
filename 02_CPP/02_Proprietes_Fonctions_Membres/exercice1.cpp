#include <iostream>

using namespace std;

class Article
{
private:
    int code;
    float price;

public:
    int getCode() { return code; };
    float getPrice() { return price; };
    Article(int Numero = 0, float prix = 0)
    {
        code = Numero;
        price = prix;
    };
    //Article();
    bool equal(Article &);
    bool equal(Article *);
};
/*Article::Article(int Numero, float prix)
{
    code = Numero;
    price = prix;
};
*/
/*Article::Article()
{
    code = 0;
    price = 0;
};*/
bool Article::equal(Article &B)
{
    return (code == B.code && price == B.price);
}
bool Article::equal(Article *B)
{
    
    return (code == (*B).code && price == (*B).price);
}

int main()
{   int Numero = 25;
    float prix = 2.5;
    Article c(Numero);
    Article *ptr =&c;
    
    bool equ;
    Article a(Numero, prix);
    cout << a.getCode() << " " << a.getPrice() << endl;

    cout << c.getPrice() << endl;
    equ = a.equal(c);
    cout << "les deux articles sont similaires ?" << equ << endl;
    equ = a.equal(ptr);
    cout << "les deux articles sont similaires ?" << equ << endl;
}