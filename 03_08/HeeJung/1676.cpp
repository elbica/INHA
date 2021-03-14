#include<iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	int count = 0;
	for (int i = 1; i <= x; i++) {
		if (i % 5 == 0) {
			count++;
			
		}
		if (i % 25 == 0) count++;
		if (i % 125 == 0) count++;
	}
	cout << count << '\n';
}