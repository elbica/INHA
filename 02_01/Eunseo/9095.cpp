#include<iostream>
using namespace std;
int main() {
	int T,n;
	cin >> T;
	int dp[10] = { 0,1,2,4 };
	for (int i = 0; i < T; i++) {
		cin >> n;
		for (int j = 4; j < n + 1; j++) {
			dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
		}
		cout << dp[n] << endl;
	}
	return 0;
}