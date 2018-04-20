
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#define PI 3.14

template <int SideCount>
class RegularPolyhedron {
    float side_len_, base_area_, height_;
    float r_;
protected:
    float base_area() const { return base_area_; }
    float height() const { return height_; }
    float r() const { return r_; }
public:
    RegularPolyhedron(float side_len, float height)
        : side_len_{side_len}, height_{height}
    { 
        float n = (float)SideCount;
        r_ = side_len / (2 * sin(PI / n));
        base_area_ = (n * r_ * r_ * sin((2 * PI) / n)) / 2.0;
    }
    virtual float volume() = 0;
};

class RegularPrism : public RegularPolyhedron<3> {
public:
    RegularPrism(float side_len, float height) 
        : RegularPolyhedron<3>{side_len, height} 
    {

    }

    virtual float volume() override {
        return base_area() * height();
    }
};

class RegularPyramid : public RegularPolyhedron<4> {
public:
    RegularPyramid(float side_len, float height) 
        : RegularPolyhedron<4>{side_len, height} 
    {

    }

    virtual float volume() override {
        return 1 / 3.0 * base_area() * height();
    }
};

int main() {
    RegularPolyhedron<4> * p = new RegularPyramid(5, 10);
    std::printf("V=%f\n", p->volume());
 
    return 0;
}
