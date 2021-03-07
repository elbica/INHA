#include<iostream>
#include<string>
using namespace std;

int main() {
	string na;
	cin >> na;

	int size = na.size();
	if (size % 3 == 1) {
		cout << na[0];

	}
	else if (size % 3 == 2) {
		cout << (na[0] - '0') * 2 + (na[1] - '0');
	}
	for (int i = size % 3; i < size; i+=3) {
		cout << (na[i] - '0') * 4 + (na[i + 1] - '0') * 2 + (na[i + 2] - '0');
	}
	cout << endl;
}