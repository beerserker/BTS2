#include <iostream>

using namespace std;
void tab(int *);
void tab(char *);

int main()
{
    int entier[6];
    char carak[6];
    int i;
    for (i = 0; i < 6; i++)
    {
        carak[i] = entier[i] = '\0';
    }

    tab(entier);
    
    tab(carak);
    cout<<"\nentier :";
    for (i = 0; i < 6; i++)
    {
        cout << " " << entier[i];
    }
    cout<<"\ncaractere :";
    for (i = 0; i < 6; i++)
    {
        cout << " " << carak[i];
    }
}

void tab(int *ptr)
{
    int i;
cout<<"saisir X entiers:"<<endl;
    for (i = 0; i < 6; i++)
    {
        cin >> *(ptr + i);
    }
}

void tab(char *ptr)
{
    int i;

    for (i = 0; i < 6; i++)
    {
        cin >> *(ptr + i);
    }
}