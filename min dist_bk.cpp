#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int x = 0;
	int y = 0;
	int w = 0;
	int h =0;
	cin >> x >> y >> w >> h;

	int d1 = x;
	int d2 = y;
	int d3 = h - y;
	int d4 = w - x;

	int min_dist = min(min(d1, d2), min(d3, d4));

	cout << min_dist;
}
