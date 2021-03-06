#include<iostream>
#include<string>
using namespace std;
int main() {
	int b;
	string n;
	cin >> n;
	int size = n.length();
	if (size % 3 == 1) {
		cout << n[0];
	}
	else if (size % 3 == 2) {
		cout << (n[0] - '0') * 2 + (n[1] - '0');
	}
	for (int i = size % 3; i < size; i += 3) {
		cout << (n[i] - '0') * 4 + (n[i + 1] - '0') * 2 + (n[i + 2] - '0');
	}
}


