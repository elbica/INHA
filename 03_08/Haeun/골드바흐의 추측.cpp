#include <iostream>
using namespace std;

int arr[1000001];

void isprime() {
	for (int i = 0; i <= 1000000; i++) { arr[i] = 1; }
	arr[1] = 0;

	for (int i = 2; i <= 1000000; i++) {
		for (int j = 2; i * j <= 1000000; j++) {
			arr[i * j] = 0;
		}
	}
}

int main() {
	isprime();
	while (1) {
		int n;
		cin >> n;
		if (n == 0) break;

		int ans = 0;
		for (int i = 3; i < n; i++) {
			if (arr[i] == 1 && arr[n - i] == 1) {
				ans = i;
				cout << n << " = " << ans << " + " << n - ans << '\n';
				break;
			}
		}

		if(ans == 0) cout << "Goldbach's conjecture is wrong." << '\n';
	}
}