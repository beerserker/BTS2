#include <iostream>

using namespace std;
int convertS(int heure,int min=0,int sec=0);

int main()
{
    int heure, min, sec;

    heure = 1;
    min = 0;
    sec = 0;
    sec = convertS(heure, min, sec);
}



int convertS(int heure,int min,int sec)
{
sec=(heure*60*60)+(min*60)+sec;
return sec;
}

