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
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
	}
	int maxnum = 0;
	if (n == 1) maxnum = 1;
	for (int i = 1; i < n; i++) {
		for (int j = i; j >= 0; j--) {
			if (arr[i] > arr[j]) {
				if (dp[i] < dp[j] + 1) dp[i] = dp[j] + 1;
			}
		}
		if (maxnum < dp[i]) maxnum = dp[i];
	}
	cout << maxnum << endl;
	return 0;
}


