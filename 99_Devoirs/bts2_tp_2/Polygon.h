#include <string>
#include <vector>
#include "Point.h"
#include "Segment.h"

#ifndef POLYGON_H
#define POLYGON_H
using namespace std;

class Polygon {
    protected :
        string name;
        int pointsCount;
        Point * * points;
        Polygon();
        Polygon(Polygon &);
        Polygon & operator = (Polygon &);
        vector<Segment> getSegments();
    public :
        ~Polygon();
        string getName();
        float getPerimeter();
        bool isRegular();
        float getArea();
        bool hasARightAngle();
};

#endif