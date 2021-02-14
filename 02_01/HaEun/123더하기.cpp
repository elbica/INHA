#include <iostream>
using namespace std;

int calculate(int n) {
	if (n == 1) return 1;
	else if (n == 2) return 2;
	else if (n == 3) return 4;
	return calculate(n - 1) + calculate(n - 2) + calculate(n - 3);
}
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		cout << calculate(n) << endl;
	}
}