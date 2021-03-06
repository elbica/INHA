#include<iostream>
#include<string>

using namespace std;

int list[26];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string str;
	cin >> str;
	for (int i = 0; i < 26; i++) {
		list[i] = -1;
	}
	for (int i = 0; i < str.size(); i++) {
		if (list[str[i] - 97] == -1) {
			list[str[i] - 97] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << list[i] << " ";
	}
}