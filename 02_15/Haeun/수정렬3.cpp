#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int n_count[10001] = { 0, };

	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		n_count[num]++;
	}
	

	for (int i = 0; i < 10001; i++){
		for (int j = 0; j < n_count[i]; j++) {
			if (n_count[i] != 0) cout << i << '\n';
		}
	}
}