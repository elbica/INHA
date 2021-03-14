
#include <iostream>
#include<vector>
using namespace std;



int main() {

	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x, y;

	cin >> x >> y;
	vector<bool>isPrime(y + 1, true);
	bool chk = false;

	isPrime[0] = false;
	isPrime[1] = false;

	for (int i = 2; i <= y; i++) {
		if (isPrime[i]) {
			for (int j = 2 * i; j <= y; j += i) {
				isPrime[j] = false;
			}
		}
	}
			for (int i = x; i <= y; i++) {
				if (isPrime[i]) {
					cout << i << '\n';
				}
			}


	return 0;
}