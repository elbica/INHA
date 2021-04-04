#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	cin.sync_with_stdio(false);
	cin.tie(NULL);

	int N, C, MAXi = 0;
	cin >> N >> C;

	int arr[200001];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		MAXi = max(MAXi, arr[i]);
	}
	sort(arr, arr + N);    // Á¤·Ä

	int left = 1;
	int right = MAXi;
	int MAX_len = 0;

	
	while (left <= right) {
		int mid = (left + right) / 2;    
		int cnt = 1;    
		int start = arr[0]; 

		for (int i = 1; i < N; i++)
		{
			if (arr[i] - start >= mid) {
				start = arr[i];
				cnt++;
			}
		}

		if (cnt >= C)    		{
			MAX_len = mid;
			left = mid + 1;
		}
		else right = mid - 1;
	}
	cout << MAX_len << '\n';
}
