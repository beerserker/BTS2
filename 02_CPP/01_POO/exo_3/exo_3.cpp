#include <iostream>
#include "Television.h"

using namespace std;

int main (void)
{
    Television tv;
    tv.changeChannel();
    tv.toggleOnOff();
    tv.getFullStatus();
    tv.changeVolume();
    tv.changeChannel();
    tv.getFullStatus();
    return 0;
}