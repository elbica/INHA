#include<iostream>
#include<cmath>
using namespace std;

bool prime(int input) {
	for (int i = 2; i <= sqrt(input); i++) {
		if (input%i == 0) return false;
	}
	return true;
}
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int input = 1;
	int a, b;
	bool suc = 0;

	while (input) {
		cin >> input;
		for (int i = 1; i < input / 2; i++) {
			a = 2 * i + 1;
			b = input - a;
			if (prime(a) && prime(b)) {
				cout << input << " = " << a << " + " << b << "\n";
				suc = true;
				break;
			}
		}
	}
}