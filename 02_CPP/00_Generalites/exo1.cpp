#include <iostream>
using namespace std;
struct s_personne
{
    char nom[30];
    int age;
};
int main(void)
{
    s_personne p[3];
    int nbpers = 0;

    //saisie des 3 personnes
    for (int i = 0; i < 3; i++)
    {
        cout << "Saisissez le nom de la personne N° " << i + 1 << " : ";

        cin >> p[i].nom;
        cout << "Saisissez l'age de la personne N° " << i + 1 << " : ";

        cin >> p[i].age;
        nbpers++;
    }
    cout << "\n"
         << nbpers << " personnes ont ete saisies" << endl;
    cin;
    return 0;
}