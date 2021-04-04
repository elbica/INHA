#include<iostream>
#include<algorithm>
using namespace std;

void result(int n, int x,int y,int z ) {
	if (n == 1) {
		cout << x << " " << y<<"\n";
	}
	else {
		result(n - 1, x, z, y);
		cout << x << " " << y<<"\n";
		result(n - 1, z, y, x);
	}
}
int main() {
	int num;
	cin >> num;
	cout << (1 << num) - 1 << '\n';
	result(num, 1, 3, 2);
}
