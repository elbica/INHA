#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int n_arr[1000];
	int result1[1000];
	int result2[1000];
	int result[1000];

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		n_arr[i] = num;
	}

	for (int i = 0; i < n; i++) {
		result1[i] = 1;
		result2[i] = 1;
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (n_arr[i] > n_arr[j]) {
				result1[i] = max(result1[i], result1[j] + 1);
			}
		}
	}

	for (int i = n-1; i >= 1; i--) {
		for (int j = n-1; j >= i; j--) {
			if (n_arr[i] > n_arr[j]) {
				result2[i] = max(result2[i], result2[j] + 1);
			}
		}
	}

	int max = 0;
	for (int i = 0; i < n; i++) {
		if (max < result1[i]+result2[i]-1) max = result1[i] + result2[i] - 1;
	}
	cout << max << endl;
}