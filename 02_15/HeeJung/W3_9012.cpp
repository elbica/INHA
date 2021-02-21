#include<iostream>
#include<stack>
#include<vector>
#include<string>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		stack<char> parenth;
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (parenth.empty()||s[j]=='(') {
				parenth.push(s[j]);
			}
			else if (parenth.top()=='(') {
				parenth.pop();
			}
		}
		if (parenth.empty()) {
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}