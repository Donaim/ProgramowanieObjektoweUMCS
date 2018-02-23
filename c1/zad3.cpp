#include <iostream>

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
};



int main() {
    Point p {2, 3};
    Point d {5, 7};
    p.move(d);
    cout << p.get_x() << ' ' << p.get_y() << endl;
    return 0;
}