#include <string>

#ifndef POINT_H
#define POINT_H
using namespace std;

class Point {
    private :
        string name = "";
        int x, y;
        static int count;
    public :
        Point(string = "x", int = 0, int = 0);
        
        ~Point();
        string getName();
        int getX();
        int getY();
        static int getCount();
        string toString();
};
#endif