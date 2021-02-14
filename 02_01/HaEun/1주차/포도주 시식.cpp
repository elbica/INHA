#include <iostream>
#include <algorithm>
using namespace std;

int n_arr[10003];
int result[10003] = { 0 };

int calculate(int n) {

	result[1] = n_arr[1];
	result[2] = n_arr[1] + n_arr[2];

	for(int i=3; i<= n; i++){
		result[i] = max(max(result[i - 3] + n_arr[i - 1] + n_arr[i], result[i - 2] + n_arr[i]), result[i - 1]);
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