#include <iostream>
#include "zad6.cpp"

using namespace std;

int main() {
    Triangle t{Point{2,3}, Point{5, 7}, Point{11, 13}};
    cout << t.perimeter() << endl;
    cout << t.area() << endl;
    return 0;
}