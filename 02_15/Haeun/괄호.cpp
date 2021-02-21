#include <iostream>
#include <stack>
#include <string>
using namespace std;


bool ParenMatch(string word) {
	stack<char> s;
	int len = word.length();

	for (int i = 0; i < len; i++) {
		if (word[i] == '(') s.push(word[i]);
		else if (word[i] == ')') {
			if (s.empty()) return false;
			else {
				s.pop();
			}
		}
	}
	if (s.empty()) return true;
	else return false;
}

int main() {
	int n;
	cin >> n;
	string s;

	for (int i = 0; i < n; i++) {
		cin >> s;
		bool b = ParenMatch(s);

		if (b == 1) cout << "YES" << '\n';
		else if (b == 0) cout << "NO" << '\n';
	}
}