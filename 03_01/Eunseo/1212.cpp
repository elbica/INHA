#include<iostream>
#include<string>

using namespace std;
int main() {
	string n;
	cin >> n;
	string num;
	if (n == "0") cout << 0;
	for (int i = 0;i < n.length(); i++) {
		num += to_string((n[i] - '0') / 4);
		num += to_string(((n[i] - '0') % 4) / 2);
		num += to_string(((n[i] - '0') % 4) % 2);
	}
	bool zero = false;
	for (int i = 0; i < num.length(); i++) {
		if (!zero) {
			if (num[i] == '1') {
				zero = true;
				cout << num[i];
			}
		}
		else cout << num[i];
	}
}


