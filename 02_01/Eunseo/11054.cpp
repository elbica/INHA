#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[1001];
	int dp1[1001];
	int dp2[1001];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int maxnum = 0;
	for (int i = 0; i < n; i++) {
		dp1[i] = 1;
		for (int j = 0; j < i + 1; j++) {
			if (arr[i] > arr[j]) {
				if (dp1[i] < dp1[j] + 1) dp1[i] = dp1[j] + 1;
			}
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		dp2[i] = 1;
		for (int j = n - 1; j > i; j--) {
			if (arr[i] > arr[j]) {
				if (dp2[i] < dp2[j] + 1) dp2[i] = dp2[j] + 1;
			}
		}
		maxnum = max(maxnum, dp1[i] + dp2[i] - 1);
	}

	cout << maxnum << endl;
	return 0;
} //약간 헷갈렸던 문제.(for문 범위)


