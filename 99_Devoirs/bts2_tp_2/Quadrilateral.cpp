#include "Quadrilateral.h"
#include "Polygon.h"
#include "Point.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include<iostream>
// Exercice 6 - Héritage






Quadrilateral::Quadrilateral(Point & a,Point & b,Point & c,Point & d)
{
    name=a.getName()+b.getName()+c.getName()+d.getName();
    pointsCount=4;
    Point *pt
    *pt=a;
    points[0] =pt;
    *pt=b;
    points[1] =pt;
    *pt=c;
    points[2]=pt;
    *pt=d;
    points[3]=pt;
}
float Quadrilateral::getArea() {
    if (isRegular() && hasARightAngle()) {
        float length = Segment(*points[0], *points[1]).getLength();
        return length * length;
    }
    return 0;
}//elle fonctionne uniquement si le quadrilatere est un carré