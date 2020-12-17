#include <iostream>

using namespace std;

class Point2d
{
    protected: 
    int x, y;

public:
    Point2d(int px, int py)
    {
        x = px, y = py;
    }
    Point2d(Point2d &p)
    {
        x = p.x, y = p.y;
    }
  
  };

class Point3d : public Point2d
{
private:
    int z;

public:
    Point3d(int px, int py, int pz) : Point2d( px, py)
    {
        z = pz;
    };
    void affiche()
    {
        cout << " x = " << x << " y = " << y;
        cout<<" z ="<<z<<endl;
    };
};

int main(void)
{
Point3d pnt(1,2,3);

pnt.affiche();

}