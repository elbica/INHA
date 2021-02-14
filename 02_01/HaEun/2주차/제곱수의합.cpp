#include <iostream>
#include <algorithm>
using namespace std;
int result[100000];

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		result[i] = i;
	}

	for (int i = 1; i <= n; i++) {
		for (int k = 1; k * k <= i; k++) {
			result[i] = min(result[i - k * k]+1, result[i]);
		}
	}

	cout << result[n] << endl;
}