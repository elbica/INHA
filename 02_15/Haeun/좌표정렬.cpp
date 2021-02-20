#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<pair<int, int>> pair_list;

	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		pair<int, int> n_pair;
		int n1, n2;
		cin >> n1 >> n2;
		n_pair = make_pair(n1, n2);
		pair_list.push_back(n_pair);
	}

	sort(pair_list.begin(), pair_list.end());

	for (int i = 0; i < q; i++) {
		cout << pair_list[i].first << " " << pair_list[i].second << '\n';
	}
}