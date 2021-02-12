#include<iostream>
using namespace std;

int main() {
	int arr[31];
	int n;
	cin >> n;
	arr[0] = 1;
	arr[1] = 3;
	if (n % 2 == 1) {
		arr[n] = 0;
	}
	else {
		for (int i = 2; i <= n; i+=2) {
			arr[i] = 3 * arr[i - 2];
			for (int j = 4; j <= i; j += 2) {
				arr[i] += 2 * arr[i - j];
			}
		}
	}
	cout << arr[n] << endl;
		return 0;
}