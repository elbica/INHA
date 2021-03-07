#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;

	if (s.length() % 3 == 1) {
		cout << s[0]-'0';
	}
	else if (s.length() % 3 == 2) {
		cout << (s[0] - '0') * 2 + (s[1] - '0');
	}
	for (int i = s.length() % 3; i < s.length(); i += 3) {
		cout << (s[i] - '0') * 4 + (s[i+1] - '0') * 2 + (s[i + 2]-'0');
	}
}