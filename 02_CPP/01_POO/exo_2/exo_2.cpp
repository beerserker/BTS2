#include <iostream>
#include "Counter.h"

using namespace std;

int main ()
{
    Counter c;

    for (int i = 0; i < 10; i++) {
        c.increment();
        cout << c.getValue() << endl;
    }

    for (int i = 0; i < 15; i++) {
        c.decrement();
        cout << c.getValue() << endl;
    }
    
    return 0;
}