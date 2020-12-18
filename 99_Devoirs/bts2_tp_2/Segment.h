#include <string>
#include "Point.h"

#ifndef SEGMENT_H
#define SEGMENT_H
using namespace std;

class Segment {
    private :
        string name;
        Point * p1, * p2;
        bool isHorizontal();
        bool isVertical();
        int getSlope();
    public :
        Segment();
        Segment(Point &, Point &);
        string getName();
        string toString();
        bool hasCommonPointWith(Segment &);
        bool isPerpendicularTo(Segment &);
        float getLength();
        int operator == (Segment &);
        int operator != (Segment &);
        int operator > (Segment &);
        int operator >= (Segment &);
        int operator <= (Segment &);
        int operator < (Segment &);
};

#endif