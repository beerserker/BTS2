#include <iostream>
#include "Point.h"
#include "Segment.h"
#include "Polygon.h"

void displayGraph();

int main() {
    system("chcp 65001");
    system("cls");

    displayGraph();

    // Création des points
    Point a ("A", 1, 1);
    Point b ("B", 2, 2);
    Point c ("C", 2, 0);
    Point d ("D", 3, -1);
    Point e ("E", 3, 1);
    cout << "Il y a " << Point::getCount() << " points :" << endl;
    // Exercice 1 - Affichage des points créés
    cout << endl;

    // Création des segments
    Segment ab (a, b);
    Segment ab2 (b, a);
    Segment ac (a, c);
    Segment cd (c, d);
    Segment bc (b, c);
    Segment ae (a, e);
    cout << "Il y a toujours " << Point::getCount() << " points !" << endl;

    // Longueur d'un segment
    cout << ab.toString() << " mesure " << ab.getLength() << endl;
    cout << endl;

    // Points en commun
    cout << ab.getName() << (ab.hasCommonPointWith(ac) ? " a un point commun avec " : " n'a pas de point commun avec ") << ac.getName() << endl;
    cout << ab.getName() << (ab.hasCommonPointWith(cd) ? " a un point commun avec " : " n'a pas de point commun avec ") << cd.getName() << endl;
    cout << endl;

    // Perpendiculaires
    cout << ab.getName() << (ab.isPerpendicularTo(ac) ? " est perpendiculaire à " : " n'est pas perpendiculaire à ") << ac.getName() << endl;
    cout << ab.getName() << (ab.isPerpendicularTo(bc) ? " est perpendiculaire à " : " n'est pas perpendiculaire à ") << bc.getName() << endl;
    cout << ae.getName() << (ae.isPerpendicularTo(bc) ? " est perpendiculaire à " : " n'est pas perpendiculaire à ") << bc.getName() << endl;
    cout << endl;

    // Opérateurs de segment
    cout << ab.getName() << " et " << ab2.getName() << (ab != ab2 ? " sont différents !" : " sont identiques !") << endl;
    cout << endl;

    /*  Exercice 6 - Héritage
    Triangle abc(a, b, c);
    cout << "Périmètre de " << abc.getName() << " : " << abc.getPerimeter() << endl;
    cout << abc.getName() << (abc.isRight() ? " est un triangle rectangle" : " n'est pas un triangle rectangle") << endl;

    Triangle bcd(b, c, d);
    cout << "Périmètre de " << bcd.getName() << " : " << bcd.getPerimeter() << endl;
    cout << bcd.getName() << (bcd.isRight() ? " est un triangle rectangle" : " n'est pas un triangle rectangle") << endl;
    
    Quadrilateral abec(a, b, e, c);
    cout <<  abec.getName() << (abec.isRegular() && abec.hasARightAngle() ? " est un carré" : " n'est pas un carré") << endl;
    */

    //  Exercice 6.6

    return 0;
}


void displayGraph() {
    cout << " ·    ·    ·    ·    ·   5┬    ·    ·    ·    ·    ·" << endl;
    cout << "                          │                         " << endl;
    cout << " ·    ·    ·    ·    ·   4┼    ·    ·    ·    ·    ·" << endl;
    cout << "                          │                         " << endl;
    cout << " ·    ·    ·    ·    ·   3┼    ·    ·    ·    ·    ·" << endl;
    cout << "                          │                         " << endl;
    cout << " ·    ·    ·    ·    ·   2┼    ·  B ■    ·    ·    ·" << endl;
    cout << "                          │                         " << endl;
    cout << " ·    ·    ·    ·    ·   1┼  A ■    ·  E ■    ·    ·" << endl;
    cout << "                          │                         " << endl;
    cout << " ├────┼────┼────┼────┼────┼────┼──C ■────┼────┼────┤" << endl;
    cout << "-5   -4   -3   -2   -1   0│    1    2    3    4    5" << endl;
    cout << " ·    ·    ·    ·    ·  -1┼    ·    ·  D ■    ·    ·" << endl;
    cout << "                          │                         " << endl;
    cout << " ·    ·    ·    ·    ·  -2┼    ·    ·    ·    ·    ·" << endl;
    cout << "                          │                         " << endl;
    cout << " ·    ·    ·    ·    ·  -3┼    ·    ·    ·    ·    ·" << endl;
    cout << "                          │                         " << endl;
    cout << " ·    ·    ·    ·    ·  -4┼    ·    ·    ·    ·    ·" << endl;
    cout << "                          │                         " << endl;
    cout << " ·    ·    ·    ·    ·  -5┴    ·    ·    ·    ·    ·" << endl;
    cout << endl;
}