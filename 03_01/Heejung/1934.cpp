#include<iostream>
using namespace std;

int GCD(int x, int y) {
	if (y == 0) return x;
	else {

		return GCD(y, x%y);
	}
}

int main() {
	int roop;
	cin >> roop;
	for (int i = 0; i < roop; i++) {
		int x, y;

		cin >> x >> y;

		int gcd = GCD(x, y);
		cout << gcd << '\n' << (x*y) / gcd;
	}
}