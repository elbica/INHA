#include<iostream>
using namespace std;

int min(int x, int y) {
	if (x < y)
		return x;
	else
		return y;
}

int main() {
	int n;
	cin >> n;
	int dp[100001];

	for (int i = 1; i <= n; i++) {
		dp[i] = i;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j*j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}
	cout << dp[n] << endl;
	return 0;

}