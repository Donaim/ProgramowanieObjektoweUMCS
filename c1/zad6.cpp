#include "zad5.cpp"
#include "zad6.hpp"

#include <cmath>

Triangle::Triangle(Point a_, Point b_, Point c_) : a(a_), b(b_), c(c_) {
    
}

float Triangle::perimeter() {
    return Point::distance(a, b) + Point::distance(b, c) + Point::distance(c, a);
}
float Triangle::area() {
    float p = perimeter() / 2;
    return sqrt(p 
    * (p - Point::distance(a, b)) 
    * (p - Point::distance(b, c))
    * (p - Point::distance(c, a)));
}
