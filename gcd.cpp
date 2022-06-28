#include <iostream>
using namespace std;
int gcd(int x, int y) {
	if (x < 0)
		x = -x;
	if (y < 0)
		y = -y;
	if (x % y == 0 || y % x == 0)
		return min(x, y);
	return x > y ? gcd(x % y, y) : gcd(y % x, x);
}
int main() {
	cout << gcd(-342, 1);
}