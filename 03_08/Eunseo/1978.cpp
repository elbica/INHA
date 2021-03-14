#include <iostream>
using namespace std;

int main() {
	int n, cnt, a;
	cin >> n;
	cnt = 0;
	for (int i = 0; i < n;i++) {
		cin >> a;
		if (a == 2 || a == 3) cnt++;
		else {
			for (int i = 2; i < a; i++) {
				if (a % i == 0) break;
				if (i == a - 1) cnt++;
			}
		}
	}
	cout << cnt;
}

