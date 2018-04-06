
#include "point3d.h"

namespace graphics {
    Point3D::Point3D(int x, int y, int z) : Point{x, y}, z_{z}
    {

    }

    Point3D::Point3D() : Point3D{0, 0, 0}
    {

    }


    int Point3D::z() const { return z_; }
}