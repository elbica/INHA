#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	long long num;
	vector<long long> n_list;

	for (int i = 0; i < n; i++) {
		cin >> num;
		n_list.push_back(num);
	}
	sort(n_list.begin(), n_list.end());

	int cnt = 0, max = 0;
	long long ans = n_list[0];

	for (int i = 1; i < n; i++) {
		if (n_list[i] == n_list[i - 1]) cnt++;
		else cnt = 0;

		if (cnt > max) {
			max = cnt;
			ans = n_list[i];
		}
	}

	cout << ans << '\n';

}