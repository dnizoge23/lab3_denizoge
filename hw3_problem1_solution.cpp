#include "hw3_problem1.h"
#include <algorithm> // for std::swap

// Reflect a rectangle across the x-axis and/or y-axis.
// Assumes Rectangle and Point (with fields x, y) are defined in "hw3_structs.h"
// and that rectangle.bottom_left is the lower-left corner while
// rectangle.upper_right is the upper-right corner for valid rectangles.
static inline void normalize(Rectangle& r) {
    if (r.bottom_left.x > r.upper_right.x) {
        std::swap(r.bottom_left.x, r.upper_right.x);
    }
    if (r.bottom_left.y > r.upper_right.y) {
        std::swap(r.bottom_left.y, r.upper_right.y);
    }
}

Rectangle reflect(Rectangle rectangle, bool reflectOverX, bool reflectOverY) {
    // Mirror across x-axis: flip the sign of y-coordinates
    if (reflectOverX) {
        rectangle.bottom_left.y = -rectangle.bottom_left.y;
        rectangle.upper_right.y = -rectangle.upper_right.y;
    }

    // Mirror across y-axis: flip the sign of x-coordinates
    if (reflectOverY) {
        rectangle.bottom_left.x = -rectangle.bottom_left.x;
        rectangle.upper_right.x = -rectangle.upper_right.x;
    }
// trigger test
    // Ensure corners preserve the Rectangle invariant (bottom_left is min, upper_right is max)
    normalize(rectangle);
    return rectangle;
}
