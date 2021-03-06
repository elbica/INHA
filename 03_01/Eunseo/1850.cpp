#include <iostream>

using namespace std;
long long findmax(long long a, long long b) {
	while (b != 0) {
		long long x = a % b;
		a = b;
		b = x;
	}
	return a;
}
int main() {
	long long a, b;
	cin >> a >> b;
	for (int i = 0; i < findmax(a, b); i++) {
		cout << '1';
	}
}

