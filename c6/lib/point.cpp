#include "point.h"

namespace graphics {

    Point::Point(int x, int y) : x_{x}, y_{y}
    {}

    Point::Point() : Point{0, 0} 
    {

    }

    int Point::x() const { return x_; }
    int Point::y() const { return y_; }

}
