#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); 
	cin.tie(0);

	int nlist;
	int find;
	long long num;
	vector<long long> n_list;
	cin >> nlist >> find;

	for (int i = 0; i < nlist; i++) {
		cin >> num;
		n_list.push_back(num);
	}

	sort(n_list.begin(), n_list.end());
	cout << n_list[find - 1] << '\n';
}