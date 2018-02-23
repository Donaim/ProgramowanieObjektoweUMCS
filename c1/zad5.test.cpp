#include "zad5.cpp"
#include <iostream>

using namespace std;

int main() {
    Point p {2, 3};
    Point d {5, 7};
    cout << Point::distance(p, d) << endl;
    return 0;
}