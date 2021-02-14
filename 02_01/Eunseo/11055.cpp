#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[1001];
	int dp[1001];
	cin >> n;
	int maxnum = 0;
	for (int i = 1; i < n + 1; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < n + 1; i++) {
		dp[i] = arr[i];
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				if (dp[i] < dp[j] + arr[i]) {
					dp[i] = dp[j] + arr[i];
				}
			}
		}
		if (maxnum < dp[i]) maxnum = dp[i];
	}
	cout << maxnum << endl;
	return 0;
}


