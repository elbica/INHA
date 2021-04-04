#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	vector<int> n1;

	for (int i = 0; i < n + m; i++) {
		int num;
		cin >> num;
		n1.push_back(num);
	}

	sort(n1.begin(), n1.end());

	for (int i = 0; i < n1.size(); i++) {
		cout << n1[i] << " ";
	}


}