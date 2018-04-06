#pragma once

namespace graphics {

    class Point {
        const int x_, y_;
    public:
        Point();
        Point(int x, int y);

        int x() const;
        int y() const;
    };

}

