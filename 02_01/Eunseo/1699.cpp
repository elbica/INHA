#include <iostream>
#include<math.h>
using namespace std;

int min(int a, int b) {
	return a < b ? a : b;
}
int main() {

	int n;
	int dp[100001];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		dp[i] = i;
	}

	for (int i = 2; i <= n; i++) {

		if (sqrt(i) - (int)sqrt(i) == 0) {
			dp[i] = 1;
		}
		else {
			for (int j = 1; j <= (int)sqrt(i); j++) {
				dp[i] = min(dp[i - (j * j)] + dp[j * j], dp[i]);
			}
		}
	}

	cout << dp[n];

}

