#include <iostream>

using namespace std;

class Fraction
{
    private:
        int numerateur;
        int denominateur;
    public:
        Fraction(int argNumerateur = 1); // Paramètre par defaut
        Fraction(int, int);
        void setNumerateur(int);
        int getNumerateur();
        void setDenominateur(int);
        int getDenominateur();
        void display();
        Fraction add( Fraction & ); // Passage par reference
};

Fraction::Fraction(int argNumerateur) {
    numerateur = argNumerateur;
    denominateur = 1;
}

Fraction::Fraction(int argNumerateur,int argDenominateur) {
    numerateur = argNumerateur;
    denominateur = argDenominateur;
}

void Fraction::display() {
    cout << numerateur << "/" << denominateur << endl;
}

void Fraction::setNumerateur(int argNumerateur) {
    numerateur = argNumerateur;
}
int Fraction::getNumerateur() {
    return numerateur;
}

void Fraction::setDenominateur(int argDenominateur) {
    denominateur = argDenominateur;
}
int Fraction :: getDenominateur() {
    return denominateur;
}

Fraction Fraction::add( Fraction & f2) {
    Fraction f3;
    f3.numerateur = (numerateur * f2.denominateur) + (f2.numerateur * denominateur) ;
    f3.denominateur = denominateur * f2.denominateur;
    return (f3);
}

int main(void)
{
    Fraction f1(3,4);
    f1.display();
    cout << "Numerateur de f1 : " << f1.getNumerateur()<<endl ;
    
    Fraction f2(5,6);
    f2.display();
    
    Fraction f3;
    f3.display();
    f3 = f1.add(f2);
    cout << "après addition :" << endl;
    
    f1.display();
    f2.display();
    f3.display();
    
    return 0;
}