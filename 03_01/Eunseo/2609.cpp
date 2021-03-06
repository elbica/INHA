#include <iostream>

using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int min, max;
	int a1, b1;
	a1 = a;
	b1 = b;
	while (b != 0) {
		int x = a % b;
		a = b;
		b = x;
	}
	max = a;
	min = a1 * b1 / max;
	cout << max << endl << min;
}

