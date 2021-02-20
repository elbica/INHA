#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<tuple<int, int, string>> tuple_list;

	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		int age;
		string name;
		cin >> age >> name;
		tuple<int, int, string> n_tuple;
		n_tuple = make_tuple(age, i, name);

		tuple_list.push_back(n_tuple);
	}

	sort(tuple_list.begin(), tuple_list.end());

	for (int i = 0; i < q; i++) {
		cout << get<0>(tuple_list[i]) << " " << get<2>(tuple_list[i]) << '\n';
	}
}