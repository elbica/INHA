#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {
	long long a, b;
	cin >> a >> b;
	long long min = 0;
	min = gcd(a, b);

	for (long long i = 0; i < min; i++) {
		cout << 1;
	}
	cout << endl;
}