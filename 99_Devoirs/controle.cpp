#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>

using namespace std;
int random(int, int);

class Pokemon
{
private:
    string name;
    string move;
    int life;
    int count;

public:
    Pokemon();
    Pokemon(string, string);
    ~Pokemon()
    {
        count--;
        cout << "Le " << name << " est vaincu" << endl;
    }
    int getCount() { return count; };
    void attacks(Pokemon &);
};

Pokemon::Pokemon()
{
    count++;    //ont ajoute un pokmon en jeu
    life = 100; //on initialise sa vie a 100
    int ran;
    ran = random(1, 3);
    switch (ran) // on choisi un pokemon aleatoirement
    {
    case 1:
        name = "Roucool sauvage";
        move = "Tornade";
        break;

    case 2:
        name = "Rattata sauvage";
        move = "Vive-attaque";
        break;

    case 3:
        name = "Nosferapti sauvage";
        move = "Morsure";
        break;

    default:
        break;
    }
    cout << "Un " << name << " apparaît !\n";
   
};
Pokemon::Pokemon(string nom, string attaque)
{
    count++;
    life=100;
    name = nom;
    move = attaque;
    
};

void Pokemon::attacks(Pokemon &x)
{   
    cout << "Le " << name << "attaque !"      << "EN AVANT " << x.name << " !" << endl;
    int dammage = random(1, 40);
    cout << name << "lance " << move << endl;
    if (dammage > 35)
    {
        cout << "COUT CRITIQUE !!!" << endl;
    }
    x.life = x.life - dammage;
    if (x.life > 0)
    {
        cout << x.name << "perd " << dammage << " pv    (" << x.life << "/100)" << endl;
    }
    else
    {
        count--; //suprimer l'objet pokemon
    }
};

int main()
{
    int co;
    system("chcp 65001");
    srand((unsigned)time(0));
    Pokemon pika("Pikachu", "Eclair");
    Pokemon poke;
    
    co = pika.getCount();
    while (co != 0)
    {
        pika.attacks(poke);
        co = pika.getCount();
        if (co == 2)
        {
            poke.attacks(pika);
        }
        co = pika.getCount();
    }
}

int random(int min, int max)
{

    return (rand() % (max + 1)) + min;
}