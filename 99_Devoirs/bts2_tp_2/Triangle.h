#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"
#include "Point.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include<iostream>
using namespace std;

class Triangle : public Polygon {
// Exercice 6 - Héritage
public:
Triangle(Point &,Point &,Point &);
bool isRight();
};

#endif