#include<iostream>
using namespace std;
int maxfun(int x, int y) {
	if (x > y) 
		return x;
	else 
		return y;
}
int main() {
	int n;
	cin >> n;
	int arr[100001];
	int dp[100001];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int max = -1000;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > sum + arr[i]) {
			sum = arr[i];
			max = maxfun(sum, max);
		}
		else {
			sum += arr[i];
			max = maxfun(sum, max);

		}
	}
	cout << max << endl;
}