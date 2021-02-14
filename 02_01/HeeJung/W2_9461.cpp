#include<iostream>
using namespace std;

int main() {
	long long arr[101];
	int re;
	cin >> re;
	for (int i = 0; i < re; i++) {
		int n;
		cin >> n;
		arr[0] = 0;
		arr[1] = 1;
		arr[2] = 1;
		arr[3] = 1;
		arr[4] = 2;
		for (int i = 5; i <= n; i++) {
			arr[i] = arr[i - 1] + arr[i - 5];
		}

		cout << arr[n] << endl;
	}
}