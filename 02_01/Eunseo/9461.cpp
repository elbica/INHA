#include <iostream>
using namespace std;

int main()
{
	int T, n;
	cin >> T;
	long dp[101];
	for (int i = 0; i < T; i++)
	{
		dp[1] = dp[2] = dp[3] = 1;
		dp[4] = 2;
		cin >> n;
		for (int i = 5; i <= n; i++) {
			dp[i] = dp[i - 5] + dp[i - 1];
		}

		cout << dp[n] << endl;
	}
	return 0;
}