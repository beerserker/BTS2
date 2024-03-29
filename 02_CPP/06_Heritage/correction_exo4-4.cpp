#include <iostream>

using namespace std;

class Point2d {
    // Question 4
    protected :
        int x, y;
    public:
        Point2d(int px, int py) {
            x = px, y = py;
        }
        Point2d(Point2d & p) {
            x = p.x, y = p.y;
        }
};

class Point3d : public Point2d {
    int z;
    public:
        Point3d(int px, int py, int pz) : Point2d(px, py) {
            z = pz;
        }
        void affiche() {
            cout << "x = " << x << " y = " << y << " z = " << z;
        }
};

int main() {
    Point3d a(1, 2, 3);
    a.affiche();
}