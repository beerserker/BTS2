#include <iostream>
#include <ctime>
using namespace std;
int main( ) 
{
time_t tmm = time(0);
char* dt = ctime(&tmm);
cout << "La date et l'heure locales sont: " << dt << endl;
}