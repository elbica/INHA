#include<iostream>
using namespace std;

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
int main() {
	int n;
	int arr[1001];
	int dp[1001];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int an = 0;
	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for (int j = i-1; j >= 1; j--) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		an = max(dp[i], an);
	}
	cout << an << endl;
}