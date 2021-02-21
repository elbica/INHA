#include <iostream>
#include<vector>
#include <algorithm>
#include<tuple>
#include<string>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<tuple< int, int, int, string>> v;
	v.resize(N);
	for (int i = 0; i < N; i++) {
		int x, y, z;
		string name;
		cin >> name >> x >> y >> z;
		x = -x;
		z = -z;
		v[i] = make_tuple( x, y, z, name);
	}
	stable_sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		cout << get<3>(v[i]) << '\n';
	}
	
	return 0;
}

