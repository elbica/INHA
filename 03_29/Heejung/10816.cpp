#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int N, M;

int main() {
	ios_base::sync_with_stdio(0);

	cin.tie(0);
	cin >> N;

	vector<int> arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(),arr.end());
	cin >> M;
		
	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;

		cout << upper_bound(arr.begin(), arr.end(), num) - lower_bound(arr.begin(), arr.end(), num) << " ";
	}
	cout << '\n';
	return 0;

}