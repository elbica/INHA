#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {
	int t;
	cin >> t;

	for (int k = 0; k < t; k++) {
		int count;
		cin >> count;
		long long int sum = 0;
		vector<int> n_arr;

		for (int i = 0; i < count; i++) {
			int n;
			cin >> n;
			n_arr.push_back(n);
		}

		for (int i = 0; i < count; i++) {
			for (int j = i + 1; j < count; j++) {
				sum += gcd(n_arr[i], n_arr[j]);
			}
		}

		cout << sum << endl;
	}
}