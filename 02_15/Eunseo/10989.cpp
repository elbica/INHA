#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
//counting sort를 사용하여 정렬 ->O(N)의 시간복잡도
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	int arr[10001] = { 0, };
	int c;
	for (int i = 0; i < N; i++) {
		cin >> c;
		arr[c]++;
	}
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			if (arr[i] != 0) cout << i << '\n';
		}
	}
	return 0;
}

