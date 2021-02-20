#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(tuple<int, int, int, string> t1, tuple<int, int, int, string> t2) {
	if ((get<0>(t1) == get<0>(t2)) && (get<1>(t1) == get<1>(t2)) && (get<2>(t1) == get<2>(t2))) return get<3>(t1) < get<3>(t2);
	if ((get<0>(t1) == get<0>(t2)) && (get<1>(t1) == get<1>(t2))) return get<2>(t1) > get<2>(t2);
	if ((get<0>(t1) == get<0>(t2))) return get<1>(t1) < get<1>(t2);
	return get<0>(t1) > get<0>(t2);
}

int main() {
	vector<tuple<int, int, int, string>> tuple_list;

	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		int kor, eng, math;
		string name;
		cin >> name >> kor >> eng >> math;
		tuple<int, int, int, string> n_tuple;
		n_tuple = make_tuple(kor, eng, math, name);

		tuple_list.push_back(n_tuple);
	}

	sort(tuple_list.begin(), tuple_list.end(), compare);

	for (int i = 0; i < q; i++) {
		cout << get<3>(tuple_list[i]) << '\n';
	}
}