#include<iostream>
using namespace std;

int main() {
	int n;
	int arr[1001];
	int dp[1001];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int max = 0;
	for (int i = 1; i <= n; i++) {
		dp[i] = arr[i];
		for (int j =1; j <i; j++) {
			if (arr[i] > arr[j]&&dp[i]<dp[j]+arr[i]) {
				dp[i] = dp[j] + arr[i];
			}
		}
		if (max < dp[i]) max = dp[i];
	}
	cout << max << endl;
}