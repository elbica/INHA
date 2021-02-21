#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x, y;
	cin >> x >> y;
	vector<int> vec;
	int num;
	for (int i = 0; i < x; i++) {
		cin >> num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end());

	cout << vec[y-1] << '\n';
	return 0;
}