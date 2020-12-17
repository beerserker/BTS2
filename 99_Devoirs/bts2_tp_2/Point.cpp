#include "Point.h"

int Point::count = 0;

/**
 * Constructeur de Point
 * @param _name le nom du point
 * @param _x l'abscisse du point
 * @param _y l'ordonnée du point
 * */
Point::Point(string _name, int _x, int _y)
{
    name = _name;
    x = _x;
    y = _y;
    count++;
}

/**
 * Destructeur de point
 * */
Point::~Point()
{
    count--;
}

/**
 * Accesseur de l'attribut name
 * @return la valeur de l'attribut name
 * */
string Point::getName()
{
    return name;
};

/**
 * Accesseur de l'attribut x
 * @return la valeur de l'attribut x
 * */
int Point::getX()
{
    return x;
}

/**
 * Accesseur de l'attribut y
 * @return la valeur de l'attribut y
 * */
int Point::getY()
{
    return y;
}

/**
 * Accesseur de l'attribut count
 * @return la valeur de l'attribut count
 * */
int Point::getCount()
{
    return count;
}

/**
 * Transforme les données de l'objet en une chaîne de caractères compréhensible
 * @return une chaîne de caractères de la forme "name (x, y)"
 * */
string Point::toString()
{
    return name + " (" + to_string(x) + ", " + to_string(y) + ")";
}