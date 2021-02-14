#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[301];
	int dp[301];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	for (int i = 3; i <= n; i++) {
		dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i] + arr[i - 1]);
	}
	cout << dp[n] << endl;
	return 0;
} 



