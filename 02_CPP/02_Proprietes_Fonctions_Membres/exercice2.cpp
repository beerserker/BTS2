#include <iostream>
#include <string.h>
using namespace std;
class Car
{
private:
    char brand[20];
    char model[20];
    float price;
    static int count;

public:
    Car(const char *b="rien", const char *m="rien", float p=0);
    void display()
    {
        cout << "\nmarque:" << brand << "\nmodel:" << model << "\nprix:" << price << endl;
    }
    //Car moreExpensive(Car);
    Car &moreExpensive2(Car &);
    Car *moreExpensive(Car *);
    int NbCar() { return count; };
    ~Car()
    {
        count--;
        cout << "[-]nombredevoiture:" << NbCar() << endl;
    };
};
int Car::count = 0;
Car::Car(const char *b, const char *m, float p)
{
    count++;
    cout << "[+]nombredevoiture:" << NbCar() << endl;
   strcpy(brand,b);
   strcpy(model,m);
    price = p;
}; /*
Car Car::moreExpensive(Car B)
{
    if (price < B.price)
    {
        return B;
    }
    else
    {
        return *this;
    }
};*/
Car & Car::moreExpensive2(Car &B)
{
    if (price < B.price)
    {
        return B;
    }
    else
    {
        return *this;
    }
};
Car * Car::moreExpensive(Car *B)
{
    if (price < (*B).price)
    {
        return (B);
    }
    else
    {
        return this;
    }
};

int main()
{
    
    Car car("Toyota","yaris", 53333);
    Car car2("audi", "a5", 100000);
    
    Car expensive;
    Car *expens;
    // expensive = car.moreExpensive(car2);
    //expensive.display();
    expensive = car.moreExpensive2(car2);
    expensive.display();
    expens = car.moreExpensive(&car2);
    expens->display();
    return 0;
}