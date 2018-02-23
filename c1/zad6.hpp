#pragma once

#include "zad5.cpp"

class Triangle {
    Point a;
    Point b;
    Point c;
public:
    Triangle(Point a_, Point b_, Point c_);
    float area();
    float perimeter();
};