#include <iostream>
#include<vector>
#include <algorithm>
#include<tuple>
#include<string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	vector<long long> arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int x = 1;
	long long card;
	int max = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i - 1] == arr[i]) x++;
		else x = 1;
		if (x > max) {
			max = x;
			card = arr[i];
		}
	}
	cout << card;
	return 0;
}

