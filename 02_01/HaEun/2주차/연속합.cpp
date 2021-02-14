#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int n_arr[100001];
	int result[100001];

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		n_arr[i] = num;
	}

	result[0] = n_arr[0];

	for (int j = 1; j < n; j++) {
		result[j] = max(result[j - 1] + n_arr[j], n_arr[j]);
	}

	int max = result[0];
	for (int i = 0; i < n; i++) {
		if (max < result[i]) max = result[i];
	}

	cout << max << endl;
}