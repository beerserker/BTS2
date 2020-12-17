#include "Segment.h"
#include <math.h>

/**
 * Constructeur vide de la classe Segment
 * */
Segment::Segment() {};

/**
 * Constructeur de la classe Segment
 * L'attribut name est généré à partir des attribut name des points fournis en arguments
 * @param _p1 le premier point constituant le segment passé par référence
 * @param _p2 le second point constituant le segment passé par référence
 * */
Segment::Segment(Point & _p1, Point & _p2) {
    name = _p1.getName() + _p2.getName();
    p1 = &_p1;
    p2 = &_p2;
}

/**
 * Accesseur de l'attribut name
 * @return la valeur de l'attribut name
 * */
string Segment::getName() { 
    return name; 
}

/**
 * Transforme les données de l'objet en une chaîne de caractères compréhensible
 * @return une chaîne de caractères de la forme "{name de p1 (x de p1, y de p1), name de p2 (x de p2, y de p2)}"
 * */
string Segment::toString() { 
    return "{" + p1->toString() + ", " + p2->toString() + "}"; 
}

/**
 * Renvoie la longueur du segment
 * @return la longueur du segment
 * */
float Segment::getLength() {
    // Exercice 2 - Longueur
    return 0;
}

/**
 * Définit si le segment a un point commun avec le segment passé en argument
 * @return vrai si les deux segments ont un point commun, faux sinon
 * */
bool Segment::hasCommonPointWith(Segment & _s) {
    // Exercice 3 - Points en commun
    return true;
}

/**
 * Définit si le segment est horizontal
 * @return vrai si le segment est horizontal, faux sinon
 * */
bool Segment::isHorizontal() { 
    return p1->getY() == p2->getY(); 
}

/**
 * Définit si le segment est vertical
 * @return vrai si le segment est vertical, faux sinon
 * */
bool Segment::isVertical() { 
    return p1->getX() == p2->getX(); 
}

/**
 * Définit la pente du segment
 * @return la pente du segment
 * */
int Segment::getSlope() {
    return (p1->getY() - p2->getY()) / (p1->getX() - p2->getX());
}

/**
 * Définit si deux segments sont perpendiculaires 
 * @return vrai si le segment passé en argument est perpendiculaire, faux sinon
 * */
bool Segment::isPerpendicularTo(Segment & _s) { 
    // Exercice 4 - Perpendicularité
    return true;
}

/**
 * Définit si deux segments sont égaux 
 * @return 1 si le segment passé en argument possède les mêmes points que le segment, 0 sinon
 * */
int Segment::operator == (Segment & _s) { 
    return p1 == _s.p1 && p2 == _s.p2; 
}

/**
 * Définit si deux segments sont différents 
 * @return 1 si le segment passé en argument possède les mêmes points que le segment, 0 sinon
 * */
int Segment::operator != (Segment & _s) { 
    // Exercice 5 - Différent de
    return 1;
}

/**
 * Définit si un segment est strictement plus grand qu'un autre par sa longueur
 * @return 1 si la segment de gauche est strictement plus long que le segment de droite, 0 sinon
 * */
int Segment::operator > (Segment & _s) { 
    return getLength() > _s.getLength(); 
}

/**
 * Définit si un segment est plus grand que ou égal à un autre par sa longueur
 * @return 1 si le segment de gauche est plus long que ou égal au segment de droite, 0 sinon
 * */
int Segment::operator >= (Segment & _s) { 
    return getLength() >= _s.getLength(); 
}

/**
 * Définit si un segment est plus petit que ou égal à un autre par sa longueur
 * @return 1 si le segment de gauche est plus court que ou égal au segment de droite, 0 sinon
 * */
int Segment::operator <= (Segment & _s) { 
    return getLength() <= _s.getLength(); 
}

/**
 * Définit si un segment est strictement plus petit qu'un autre par sa longueur
 * @return 1 si la segment de gauche est strictement plus court que le segment de droite, 0 sinon
 * */
int Segment::operator < (Segment & _s) { 
    return getLength() < _s.getLength(); 
}