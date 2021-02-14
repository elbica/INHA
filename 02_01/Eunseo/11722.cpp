#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[1001];
	int dp[1001];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int maxnum = 0;
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i + 1; j++) {
			if (arr[i] < arr[j]) {
				if (dp[i] < dp[j] + 1) dp[i] = dp[j] + 1;
			}
		}
		maxnum = max(maxnum, dp[i]);
	}
	cout << maxnum << endl;
	return 0;
}


