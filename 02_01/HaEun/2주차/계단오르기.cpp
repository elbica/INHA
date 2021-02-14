#include <iostream>
#include <algorithm>
using namespace std;

int n_arr[300];
int result[300] = { 0, };

int calculate(int n) {

	result[1] = n_arr[1];
	result[2] = max(n_arr[2], n_arr[2]+n_arr[1]);

	for (int i = 3; i <= n; i++) {
		result[i] = max(result[i - 3] + n_arr[i - 1] + n_arr[i], result[i - 2] + n_arr[i]);
	}
	return result[n];
}
int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		n_arr[i] = num;
	}

	cout << calculate(n) << endl;
}