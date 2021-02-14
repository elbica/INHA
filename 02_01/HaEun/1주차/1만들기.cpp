#include <iostream>
using namespace std;

int num[1000000] = { 0 };

int calculate(int n){
	if (n == 1) { 
		num[n] = 0;
		return 0;
	}
	if (num[n] != 0) return num[n];

	num[n] = calculate(n-1) + 1;
	if (n % 3 == 0) {
		int b = calculate(n / 3) + 1;
		if (num[n] > b) num[n] = b;
	}
	if (n % 2 == 0) {
		int b = calculate(n / 2) + 1;
		if (num[n] > b) num[n] = b;
	}

	return num[n];
}

int main() {
	int n;
	cin >> n;
	cout << calculate(n) << endl;
}