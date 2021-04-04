//https://www.youtube.com/watch?v=94RC-DsGMLo

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> n1;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		n1.push_back(num);
	}

	sort(n1.begin(), n1.end());

	int m;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		cout << upper_bound(n1.begin(), n1.end(), num) - lower_bound(n1.begin(), n1.end(), num) << " ";
	}
}