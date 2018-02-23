#include <iostream>

using std::cout;
using std::cin;

class Point {
public:
    float x, y;
};

int main() {
    Point p;
    cin >> p.x;
    cout << p.x;
    // std::cout << "HELLO WORLD" << std::endl;
    return 0;
}