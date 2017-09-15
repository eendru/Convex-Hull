#include "monotone_chain.hh"

std::vector<Point>
convex_hull(std::vector<Point> P)
{
	int n = P.size(), k = 0;

	if (n <= 1) return P;

	std::vector<Point> H(2 * n);
	std::sort(P.begin(), P.end());

	for (int i = 0; i < n; ++i) {
		while( k >= 2 && cross(H[k - 2], H[k - 1], P[i]) <= 0)
			k--;

		H[k] = P[i];
		k++;
	}

	for (int i = n - 2, t = k + 1; i >= 0; --i) {
		while (k >= t && cross(H[k-2], H[k - 1], P[i]) <= 0)
			k--;

		H[k] = P[i];
		k++;
	}

	H.resize(k-1);
	return H;
}

double cross(const Point &O, const Point &A, const Point &B)
{
        return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}

void
print_point_vector(std::vector<Point> &p)
{
    for (auto &e : p) {
	std::cout << e.x << " " << e.y << "\n";
    }
}


