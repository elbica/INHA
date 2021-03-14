#include<iostream>
#include<vector>
using namespace std;

int main() {
	int x;
	cin >> x;

	int prime = 2;

	while (x != 1) {
		if (x%prime == 0) {
			cout << prime << '\n';
			x /= prime;

		}
		else {

			prime++;
		}
	}
}