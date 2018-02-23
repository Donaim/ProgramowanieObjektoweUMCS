#include <iostream>

using std::cout, std::cin, std::endl;
// using std::cin;

class Point {
    float x, y;
public:
    void set_x(float val) { x = val; }
    float get_x() { return x; }
};


int main() {
    Point p;
    float x;
    cin >> x;
    p.set_x(x);
    cout << p.get_x();
    // std::cout << "HELLO WORLD" << std::endl;
    return 0;
}