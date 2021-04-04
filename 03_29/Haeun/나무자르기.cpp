//https://www.youtube.com/watch?v=94RC-DsGMLo

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

vector<int> tree;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	int maxnum = 0;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		maxnum = max(maxnum, num);
		tree.push_back(num);
	}

	int start = 0;
	int end = maxnum;
	int result = 0;

	while (start <= end) {
		long long int total = 0;
		int mid = (start + end) / 2;
		for (int i = 0; i < n; i++) {
			if (tree[i] > mid) total += tree[i] - mid;
		}
		if (total < m) end = mid - 1;
		else {
			result = mid;
			start = mid + 1;
		}
	}

	cout << result << "\n";
}