
#include <iostream>
using namespace std;

bool isPrime(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (n%i == 0)
			count++;
	}
	if (count == 2) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int x;
	int sum = 0;
	cin >> x;
	int num;
	for (int i = 0; i < x; i++) {
		cin >> num;
		if (isPrime(num)==true) {
			sum++;
		}
	}
	cout << sum << endl;
}