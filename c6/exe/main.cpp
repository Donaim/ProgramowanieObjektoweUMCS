
#include "point3d.h"

#include <iostream>
using namespace std;

class B;

class A {
    int b(B arg) const ;
};

class B {

};

int main() {
    graphics::Point3D p{2, 3, 5};
    cout << "z=" << p.z() << endl;

    return 0;
}