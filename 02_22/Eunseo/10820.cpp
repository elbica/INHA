#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	int a, b, c, d;
	while(getline(cin,s)){
		a = 0; b = 0; c = 0; d = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] >= 'a' && s[i] <= 'z') a++;
			else if (s[i] >= 'A' && s[i] <= 'Z') b++;
			else if(s[i] >= '0' && s[i] <= '9') c++;
			else if(s[i] == ' ') d++;
		}
		cout << a << " " << b << " " << c << " " << d << endl;
	}
	return 0;
}

