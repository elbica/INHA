#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;

	stack<char> parenth;
	int sp = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			parenth.push(s[i]);
		}
		else
		{
			parenth.pop();
			if (s[i - 1] == '(') {
				sp += parenth.size();
			}
			else if (s[i - 1] == ')') {
				sp += 1;
			}
		}
	}
	cout << sp << endl;
}