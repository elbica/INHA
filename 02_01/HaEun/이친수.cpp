#include <iostream>
using namespace std;
long long result[91][2] = { 0 };

void calculate(int n) {
	result[1][1] = 1;

	for (int k = 2; k <= n; k++) {
		for (int p = 0; p <= 1; p++) {
			if (p == 0) result[k][p] = result[k - 1][1] + result[k - 1][0];
			else if (p == 1) result[k][p] = result[k - 1][0];
		}
	}

	cout << result[n][0] + result[n][1] << endl;
}

int main() {
	int n;
	cin >> n;
	calculate(n);
}