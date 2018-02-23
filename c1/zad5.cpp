#pragma once

#include <iostream>
#include <cmath>
#include "zad5.hpp"

Point::Point() {}
Point::Point(float x_, float y_) : x(x_), y(y_) { }

void Point::move(float mx, float my) {
    x += mx;
    y += my;
}
void Point::move(Point d) {
    x += d.get_x();
    y += d.get_y();
}
    
float Point::get_x() const { return x; }
float Point::get_y() const { return y; }

float Point::distance(Point a, Point b) {
    return sqrt(
        pow(a.get_x() - b.get_x(), 2) +
        pow(a.get_y() - b.get_y(), 2));
}
