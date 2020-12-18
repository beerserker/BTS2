#include "Triangle.h"
#include "Polygon.h"
#include "Point.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include<iostream>
// Exercice 6 - Héritage

Triangle::Triangle(Point & a,Point & b,Point & c)
{
    name=a.getName()+b.getName()+c.getName();
    pointsCount=3;
    Point *pt;
    *pt=a;
    points[0] =pt;
    *pt=b;
    points[1] =pt;
    *pt=c;
    points[2]=pt;
}
bool Triangle::isRight() {
    return hasARightAngle();
}