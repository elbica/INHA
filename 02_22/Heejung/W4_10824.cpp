#include<iostream>
#include<string>
using namespace std;

int main() {
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	a = a + b;
	c = c + d;
	long long num1 = stoll(a);
	long long num2 = stoll(c);

	cout << num1 + num2;


}