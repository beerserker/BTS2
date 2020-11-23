#include <iostream>

using namespace std;

class Point
{
    private:
        int x, y;

    public:
        Point(int abs = 1, int ord = 1)
        {
            x = abs;
            y = ord;
        }
        void afficher(ostream &out) const
        {
            out << "(" << x << ", " << y << ")" << endl;
        }
        Point operator + (Point p)
        {
            Point p1;
            p1.x = x + p.x;
            p1.y = y + p.y;
            return p1;
        }
        Point operator * (int i) {
            Point p1;
            p1.x = x * i;
            p1.y = y * i;
            return p1;
        }
        // Prefix increment operator
        Point& operator++() {
            x++;
            y++;
            return *this;
        }       
        // Postfix increment operator
        Point operator++(int) {
            Point temp = *this;
            ++*this;
            return temp;
        } 
};

// Définir à l'extérieur
ostream &operator << (ostream &out, Point const &p) {
    p.afficher(out);
    return out;
}


int main()
{
    Point a(3, 5), b, c;
    c = a + b;
    cout << c++;
    cout << ++c;
    c = a * 3;
    cout << c;
    return 0;
}