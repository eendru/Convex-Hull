#pragma once

#include <algorithm>
#include <vector>
#include <iostream>


struct Point {
    double x;
    double y;

    bool operator < (const Point &p) const {
	    return x < p.x || (x == p.x && y < p.y);
    }
};

double
cross(const Point &O, const Point &A, const Point &B);

std::vector<Point>
convex_hull(std::vector<Point> P);

void
print_point_vector(std::vector<Point> &p);
