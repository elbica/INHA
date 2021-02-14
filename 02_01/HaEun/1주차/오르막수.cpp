#include <iostream>
using namespace std;

int result[1001][10];

int calculate(int n) {
	for (int i = 0; i < 10; i++) result[1][i] = 1;

	for (int k = 1; k <= n; k++) {
		for (int p = 0; p < 10; p++) {
			for (int t = 0; t <= p; t++) {
				result[k][p] += result[k - 1][t];
				result[k][p] %= 10007;
			}
		}
	}
	int sum = 0;
	for (int j = 0; j < 10; j++) {
		sum += result[n][j];
	}
	return sum;
}
int main() {
	int n;
	cin >> n;
	cout << calculate(n) % 10007 << endl;
}