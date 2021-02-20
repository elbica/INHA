#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	vector<int> n_list;
	int q;
	cin >> q;
	int num;

	for (int i = 0; i < q; i++){
		cin >> num;
		n_list.push_back(num);
	}

	sort(n_list.begin(), n_list.end());

	for (int i = 0; i < q; i++) {
		cout << n_list[i] << '\n';
	}
}