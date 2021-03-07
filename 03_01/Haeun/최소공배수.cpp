#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;

		int ans = 0;
		int multiple = 1;
		while (ans == 0) {
			if ((a * multiple) % b == 0) ans = a * multiple;
			multiple++;
		}

		cout << ans << endl;
	}
}