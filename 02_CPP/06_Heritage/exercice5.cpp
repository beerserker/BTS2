#include <iostream>
#include <string>

using namespace std;

struct Chambre
{
    float surface;
    int fenetres;

public:
    Chambre(float cSurface = 9.0, int cFenetres = 0)
    {
        surface = cSurface, fenetres = cFenetres;
    };
    string toString()
    {
        char sSurface[5];
        sprintf(sSurface, "%.1f", surface);
        return "[" + (string)sSurface + " m2, " + to_string(fenetres) + (fenetres > 1 ? " fenetres" : " fenetre") + "]";
    };
};

class Batiment
{
protected:
    string adresse;

public:
    Batiment(string adr) : adresse(adr){};
    string getAdr()
    {
        return adresse;
    };
    Batiment(){adresse="LAVAL";};
};

class Maison : protected Batiment
{
    Chambre *chambres;
    int nbChambres;

public:
    Maison(int nCh, string adr, Chambre *mChambres) : Batiment(adr)
    {
        chambres = new Chambre[nbChambres = nCh];
        for (int i = 0; i < nbChambres; i++)
        {
            chambres[i] = mChambres[i];
        }
    }
     Maison(Maison &m)
    {
        adresse=m.adresse;
        chambres = new Chambre[nbChambres = m.nbChambres];
        for (int i = 0; i < nbChambres; i++)
        {
            chambres[i] = m.chambres[i];
        }
    }
    string getAdr()
    {

        return Batiment::getAdr();
    }
    // Maison(Maison &m) : Batiment(m.getAdr())
    // {
    //     chambres = new Chambre[nbChambres = m.nbChambres];
    //     for (int i = 0; i < nbChambres; i++)
    //     {
    //         chambres[i] = m.chambres[i];
    //     }
    // }
    
    ~Maison()
    {
        delete[] chambres;
    }

    int getNbChambres()
    {
        return nbChambres;
    }
    string afficheChambres()
    {
        string result = "";
        for (int i = 0; i < nbChambres; i++)
        {
            if (i != 0)
            {
                result += ", ";
            }
            result += chambres[i].toString();
        }
        return result;
    }
};

int main()
{
    Chambre chambres[] = {Chambre(12.5, 1), Chambre(14, 2), Chambre(9, 1)};
    Maison *m1 = new Maison(3, "LAVAL", chambres);
    cout << "Maison 1 a " << m1->getAdr() << ", chambres " << m1->getNbChambres() << " : " << m1->afficheChambres() << endl;
    Maison m2 = *m1;
    delete m1;
    cout << "Maison 2 a " << m2.getAdr() << ", chambres " << m2.getNbChambres() << " : " << m2.afficheChambres() << endl;
}