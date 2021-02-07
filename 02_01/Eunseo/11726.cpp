#include<iostream>
using namespace std;

int main() {
	//주어진 문제는, n+1번째의 피보나치 수를 구하는 것과 같다.
	int n;
	int dp[100000] = { 0, 1, 2 };
	cin >> n;
	for (int i = 3; i < n + 1; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2])%10007;
	}
	cout << dp[n];
	return 0;
}
