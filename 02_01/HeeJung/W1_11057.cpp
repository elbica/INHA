#include<iostream>
using namespace std;

int main() {
	long long arr[1001][10];
	long long sum = 0;
	int n;
	cin >> n;
	for (int i = 0; i < 10; i++) {
		arr[1][i] = 1;
	}
	
		for (int i = 2; i <= n; i++)
		{
			for (int j = 0; j < 10; j++) {
				int arrsum = 0;
				for (int k = j; k < 10; k++) {
					arrsum += arr[i - 1][k];
				}
				arr[i][j] = arrsum%10007;
			}
		}
		for (int m = 0; m < 10; m++) {
			sum = (sum + arr[n][m]) % 10007;
			//cout << arr[n][m] << " ";
		}
		cout << sum % 10007 << endl;
	}
