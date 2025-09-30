#include "hw3_problem2.h"
#include "hw3_problem1.h"
#include <cmath>     // for std::abs
#include <algorithm> // for std::swap

// helper to check rectangle validity: strictly increasing along both axes
static inline bool is_valid(const Rectangle& r) {
    return (r.bottom_left.x < r.upper_right.x) &&
           (r.bottom_left.y < r.upper_right.y);
}

bool scale(Rectangle *rectangle, double xScale, double yScale) {
    if (rectangle == nullptr) return false;

    // zero scale is rejected
    if (xScale == 0.0 || yScale == 0.0) {
        return false;
    }

    Rectangle r = *rectangle; // work on a copy first

    // If negative scales: reflect across the global axes first
    if (xScale < 0.0 || yScale < 0.0) {
        bool reflectOverY = (xScale < 0.0); // negative xScale -> reflect over y-axis
        bool reflectOverX = (yScale < 0.0); // negative yScale -> reflect over x-axis
        r = reflect(r, reflectOverX, reflectOverY);
    }

    // Effective positive scales for sizing
    double sx = std::abs(xScale);
    double sy = std::abs(yScale);

    // Bottom-left remains fixed; scale widths/heights from that corner
    double blx = static_cast<double>(r.bottom_left.x);
    double bly = static_cast<double>(r.bottom_left.y);
    double width  = static_cast<double>(r.upper_right.x - r.bottom_left.x);
    double height = static_cast<double>(r.upper_right.y - r.bottom_left.y);

    double new_ur_x_d = blx + width  * sx;
    double new_ur_y_d = bly + height * sy;

    // Truncate to integer coordinates
    int new_ur_x = static_cast<int>(new_ur_x_d);
    int new_ur_y = static_cast<int>(new_ur_y_d);

    // Apply
    r.upper_right.x = new_ur_x;
    r.upper_right.y = new_ur_y;

    // Validate: must still be a legal rectangle (strictly positive sides)
    if (!is_valid(r)) {
        return false; // leave original unchanged
    }

    *rectangle = r;
    return true;
}
