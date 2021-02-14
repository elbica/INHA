#include<iostream>
using namespace std;
int maxfun(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
int main() {
	int n;
	cin >> n;
	int arr[1001];
	int dp[1001];
	int dp2[1001];
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int an = 0;
	for (int i = 1; i <= n; i++) 
	{
		dp[i] = 1;
		for (int j = 1; j <= i; j++) 
		{
		 if (arr[j] < arr[i] && dp[i]<dp[j]+1) 
			{
				dp[i] =dp[j] + 1;
			}
		}
	}
	for (int i = n; i >= 1; i--) {
		dp2[i] = 1;
		for (int j = n; j >= i; j--) {
			if (arr[i] > arr[j]&&dp2[j]+1>dp2[i])
			{
				dp2[i] = dp2[j] + 1;
			}
		}
	}

	for (int i = 0; i <= n; i++) {
		an=maxfun(an, dp[i] + dp2[i] - 1);
	}
	cout << an << endl;

}