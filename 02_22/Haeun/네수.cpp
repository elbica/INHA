#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	string a, b, c, d;
	cin >> a >> b >> c >> d;

	string ab = a + b;
	string cd = c + d;

	long long num_ab = stoll(a + b);
	long long num_cd = stoll (c + d);

	cout << num_ab + num_cd << '\n';
}