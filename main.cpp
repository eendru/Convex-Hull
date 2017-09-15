#include <monotone_chain.hh>

int main()
{
    std::vector<Point> points;

    points.push_back({1.0, 3.0});
    points.push_back({2.0, 5.0});
    points.push_back({3.0, 4.0});
    points.push_back({4.0, 2.0});
    points.push_back({5.0, 5.0});
    points.push_back({5.0, 6.0});
    points.push_back({7.0, 4.0});
    points.push_back({8.0, 3.0});
    points.push_back({9.0, 1.0});
    points.push_back({10.0, 6.0});
    points.push_back({13.0, 4.0});

    std::vector<Point> result = convex_hull(points);

    print_point_vector(result);

    return 0;
}

