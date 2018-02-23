#include <iostream>
#include <cmath>

using namespace std;

class Point {
    float x, y;
public:
    Point(float x_, float y_) : x(x_), y(y_) { }
    
    void move(float mx, float my) {
        x += mx;
        y += my;
    }
    // overloading
    void move(Point d) {
        x += d.get_x();
        y += d.get_y();
    }
    
    float get_x() const { return x; }
    float get_y() const { return y; }

    static float distance(Point a, Point b) {
        return sqrt(
            pow(a.get_x() - b.get_x(), 2) +
            pow(a.get_y() - b.get_y(), 2));
    }
};



int main() {
    Point p {2, 3};
    Point d {5, 7};
    cout << Point::distance(p, d) << endl;
    return 0;
}