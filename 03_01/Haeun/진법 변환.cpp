#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string s;
	int n;
	cin >> s >> n;

	long long result = 0;

	for (int i = 0; i < s.length(); i++) {
		int num;
		if (s[i] >= '0' && s[i] <= '9') num = s[i] - '0';
		else num = s[i] - 'A' + 10;

		result += num * pow(n, s.length()-i-1);
	}

	cout << result << endl;
}