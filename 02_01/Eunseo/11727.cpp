#include<iostream>
using namespace std;
int main() {
	int number;
	cin >> number;
	int dp[1001];
	dp[1] = 1;
	dp[2] = 3;
	for (int i = 3; i < number+1; i++) {
		dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;
	}
	cout << dp[number];
	return 0;
}