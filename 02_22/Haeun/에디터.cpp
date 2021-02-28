#include <list>
#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	list<char> l(s.begin(), s.end());
	auto cursor = l.end();

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		char a;
		cin >> a;

		if (a == 'L') {
			if (cursor != l.begin()) cursor--;
		}
		else if (a == 'D') {
			if (cursor != l.end()) cursor++;
		}
		else if (a == 'B'){
			if (cursor != l.begin()) cursor = l.erase(--cursor);
		}
		else if (a == 'P') {
			char c;
			cin >> c;
			l.insert(cursor, c);
		}
	}

	for (auto cursor = l.begin(); cursor != l.end(); cursor++) {
		cout << *cursor;
	}
}