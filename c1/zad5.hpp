#pragma once

class Point {
    float x, y;
public:
    Point();
    Point(float x_, float y_);
    
    void move(float mx, float my);
    // overloading
    void move(Point d);
    
    float get_x() const;
    float get_y() const;

    static float distance(Point a, Point b);
};