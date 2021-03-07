#include<iostream>
#include<bitset>
#include<cmath>
using namespace std;

long long GCD(long long x, long long y) {
	if (x%y == 0) return y;
	

		return GCD(y, x%y);
	
}

int main() {
	
	long long x, y;
	cin >> x >> y;
	//long long x1 = 0, y1 = 0;
	
	long long gcd = GCD(x, y);
	for (int i = 0; i < gcd; i++) {
		cout << 1;
	}
	cout << '\n';
	return 0;
}