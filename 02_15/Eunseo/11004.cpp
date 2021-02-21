#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, k;
	cin >> N >> k;
	vector<int> arr;
	int x;
	for (int i = 0; i < N; i++) {
		cin >> x;
		arr.push_back(x);
	}
	sort(arr.begin(), arr.end());
	cout << arr[k - 1];
	return 0;
}

