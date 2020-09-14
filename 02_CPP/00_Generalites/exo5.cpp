#include <iostream>
#include <iomanip>
using namespace std;
#define max 10
int main()
{
    int number;
    int i;
    cout << "    |";
    for (i = 1; i <= max; i++)
    {
        cout << setfill(' ') << setw(4) << right << i;
    }
    cout << endl;
    cout << "-----";
    for (i = 1; i <= max; i++)
    {
        cout << "----";
    }

    for (i = 1; i <= max; i++)
    {
        cout << endl;
        cout << setfill(' ') << setw(2) << right << i;
        cout << "  |";
        for (int y = 1; y <= max; y++)
        {
            number = i * y;
            cout << setfill(' ') << setw(4) << right << number;
        }
    }
}