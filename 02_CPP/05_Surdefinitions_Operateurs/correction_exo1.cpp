#include <iostream>

using namespace std;

class Vecteur3d {
    private:
        float x,y,z;
    public:
        Vecteur3d (int vx=0, int vy=0, int vz=0) {
            x = vx;
            y = vy;
            z = vz;
        }
        int operator == (Vecteur3d v) {
            return x == v.x && y == v.y && z == v.z;
        }
        int operator != (Vecteur3d v) {
            return !((*this) == v);
        }
};

int main () {
    Vecteur3d a(1, 2, 3), b(4, 5, 6), c(1, 2, 3);

    cout << (a == b ? "a == b" : "a != b") << endl;
    cout << (a != c ? "a != c" : "a == c") << endl;
}
