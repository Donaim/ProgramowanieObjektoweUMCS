#include <iostream>

using std::cout, std::cin, std::endl;
// using namespace std;

class Point {
    float x, y;
public:
    Point(float x_, float y_) : x(x_), y(y_) { }
    void move(float mx, float my) {
        x += mx;
        y += my;
    }
    
    float get_x() const { return x; }
    float get_y() const { return y; }
};



int main() {
    Point p {4, 4};
    p.move(2, 2);
    cout << p.get_x() << ' ' << p.get_y() << endl;
    return 0;
}