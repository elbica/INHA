#include<iostream>
using namespace std;

int main() {
	//�־��� ������, n+1��°�� �Ǻ���ġ ���� ���ϴ� �Ͱ� ����.
	int n;
	int dp[100000] = { 0, 1, 2 };
	cin >> n;
	for (int i = 3; i < n + 1; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2])%10007;
	}
	cout << dp[n];
	return 0;
}
