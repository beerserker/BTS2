#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
#include "Polygon.h"
#include "Point.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include<iostream>
using namespace std;

class Quadrilateral : public Polygon {
// Exercice 6 - Héritage
public:
Quadrilateral(Point &,Point &,Point &,Point &);
float getAera();
};

#endif