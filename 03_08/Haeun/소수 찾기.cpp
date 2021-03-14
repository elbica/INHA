#include <iostream>
using namespace std;

int ans_count = 0;

void prime(int n) {
	bool is_prime = true;
	int i = 2;
	if (n == 1) is_prime = false;
	while (n!= 1 && n != i) {
		if (n % i == 0) {
			is_prime = false;
			break;
		}
		i++;
	}
	if (is_prime == true) ans_count++;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		prime(num);
	}
	cout << ans_count << endl;
}