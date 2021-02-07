#include <iostream>
using namespace std;
int find_max(int a, int b, int c) {
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}
int main() {
	int n;
	int wine[10001];
	int dp[10001];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> wine[i];
	}
	dp[0] = wine[0];
	dp[1] = wine[0] + wine[1];
	dp[2] = find_max(wine[1] + wine[2], wine[0] + wine[2], wine[0] + wine[1]);
	for (int i = 3; i < n; i++) {
		dp[i] = find_max(dp[i - 1], dp[i - 2] + wine[i], dp[i - 3] + wine[i - 1] + wine[i]);
	}
	cout << dp[n - 1] << endl;
	return 0;
}


