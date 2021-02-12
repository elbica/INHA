#include<iostream>
using namespace std;

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int main() {
	int n, k;
	int arr[10001];
	int dp[10001];
	cin >> n;
	arr[0] = dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> k;
		arr[i] = k;

	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i], dp[i - j] + arr[j]);
		}
	}
	cout << dp[n] << endl;
	return 0;

}