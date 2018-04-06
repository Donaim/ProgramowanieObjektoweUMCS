#pragma once

#include <point.h>

namespace graphics {
    class Point3D : public Point {
        const int z_;
    public:
        Point3D();
        Point3D(int x, int y, int z);

        int z() const;
    }
}