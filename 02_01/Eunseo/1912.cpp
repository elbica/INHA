#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[100001];
	int dp[100001];
	int maxnum;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	dp[0] = arr[0];
	for (int i = 1; i <= n; i++) {
		if (arr[i] <= dp[i - 1] + arr[i]) dp[i] = dp[i - 1] + arr[i];
		else dp[i] = arr[i];
	}
	maxnum = dp[0];
	for (int i = 0; i < n; i++) {
		maxnum = max(maxnum, dp[i]);
	}
	cout << maxnum << endl;
	return 0;
} //for문 범위 조심



