#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    float harmo = 0;
    cin >> n;
    for (float i = 1; i != (n + 1); i++)
    {
        harmo = harmo + (1 / i);
    }
    cout << "la somme des " << n << " premiers termes de la serie harmonique est " << harmo << endl;
}