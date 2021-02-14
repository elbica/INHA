#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int n_arr[1000];
	int result[1000];

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		n_arr[i] = num;
	}

	for (int i = 0; i < n; i++) {
		result[i] = 1;
	}

	
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (n_arr[i] > n_arr[j]) {
				result[i] = max(result[i], result[j] + 1);
			}
		}
	}

	int max = 0;
	for (int i = 0; i < n; i++) {
		if (max < result[i]) max = result[i];
	}

	cout << max << endl;
}

