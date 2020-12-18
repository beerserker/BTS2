#include "Polygon.h"
#include "Point.h"
#define _USE_MATH_DEFINES
#include <math.h>

/**
 * Constructeur vide de Polygon
 * */
Polygon::Polygon() {};

/**
 * Constructeur par recopie de Polygon
 * @param _p le Polygon à recopier
 * */
Polygon::Polygon(Polygon & _p) {
    name = "";
    pointsCount = _p.pointsCount;
    points = new Point * [pointsCount];
    for (int i = 0; i < pointsCount; i++) {
        name += _p.points[i]->getName();
        points[i] = _p.points[i];
    }
};

/**
 * Destructeur de Polygon
 * */
Polygon::~Polygon() {
    delete [] points;
}

/**
 * Accesseur de l'attribut name
 * @return la valeur de l'attribut name
 * */
string Polygon::getName() {
    return name;
}

/**
 * Crée un vecteur de segment à partir des points du Polygon
 * @return un vecteur de segments
 * */
vector<Segment> Polygon::getSegments() {
    vector<Segment> segments;
    for(int i = 0; i < pointsCount; i++) {
        int j = i == pointsCount - 1 ? 0 : i + 1;
        segments.push_back(Segment(*points[i], *points[j]));
    }
    return segments;
}

/**
 * Renvoie le périmètre du segment
 * @return la périmètre du segment
 * */
float Polygon::getPerimeter() {
    float perimeter = 0;
    vector<Segment> segments = getSegments();
    for(int i = 0; i < segments.size(); i++) {
        perimeter += segments[i].getLength();
    }
    return perimeter;
}

/**
 * Définit si le Polygon est régulier
 * @return vrai si tous les côtés du Polygon ont la même longueur, faux sinon
 * */
bool Polygon::isRegular() {
    vector<Segment> segments = getSegments();
    float length = segments[0].getLength();
    for(int i = 1; i < segments.size(); i++) {
        if (segments[i].getLength() != length) {
            return false;
        }
    }
    return true;
}

/**
 * Définit l'aire du Polygon si celui-ci est régulier
 * @return l'aire du Polygon s'il est régulier, 0 sinon
 * */
float Polygon::getArea() {
    if (isRegular()) {
        float length = Segment(*points[0], *points[1]).getLength();
        return pointsCount * length * length / (4 * tan(M_PI / pointsCount));
    }
    return 0;
}

/**
 * Définit si le Polygon au moins un angle droit
 * @return vrai si le Polygon contient deux segments perpendiculaires, faux sinon
 * */
bool Polygon::hasARightAngle() {
    vector<Segment> segments = getSegments();
    for(int i = 0; i < segments.size(); i++) {
        int j = i == pointsCount - 1 ? 0 : i + 1;
        if (segments[i].isPerpendicularTo(segments[j])) {
            return true;
        }
    }
    return false;
}

/**
 * Surdéfinition de l'operateur =
 * @param _p le Polygon à recopier
 * @return le Polygone courant pour chaînage
 * */
Polygon & Polygon::operator = (Polygon & _p) {
    name = "";
    pointsCount = _p.pointsCount;
    delete [] points;
    points = new Point * [pointsCount];
    for (int i = 0; i < pointsCount; i++) {
        name += _p.points[i]->getName();
        points[i] = _p.points[i];
    }
    return *this;
}