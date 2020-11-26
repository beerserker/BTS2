#include <iostream>
using namespace std;
#define N 2000000
//#define K 1000000000000000000
int main()
{
   long long int KA=1000000000000000000;
    cout << "debut\n";
    int n = 0;
    long long int k = 0;
    while ((n < 2) || (n > N))
    {
        cout << "n=";
        cin >> n;
        cout << "\n";
    }
    while ((k < 1) || (k > KA))
    {
        cout << "k=";
        cin >> k;
        cout << "\n";
    }
    cout << "tout commence mtn..."<<endl;
    int i,y;
    short tab[10] = {'\0'};
    for ( i= 0; i < n; i++)
    {
        
        cout << "ville A" << i+1 << " : ";
        cin >> tab[i];
        cout <<endl;
    } 
    
    i=1;
    
    for ( y = 0; y < k; y++)
    {
        i = tab[i-1];
       
    }
    cout << "le roi arrive a la ville " << i;
}