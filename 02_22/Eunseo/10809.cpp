#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s ;
	int a[26];
	for (int i = 0; i < 26; i++) {
		a[i] = -1;
	}
	for (int i = 0; i < s.length(); i++) {
		if (a[s[i] - 'a'] == -1) {
			a[s[i] - 'a'] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}

