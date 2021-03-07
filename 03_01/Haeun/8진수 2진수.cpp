#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void binary1(int n) {
	stack<int> s;
	while (n >= 2) {
		s.push(n % 2);
		n /= 2;
	}
	s.push(n);

	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}
void binary2(int n) {
	stack<int> s;
	while (n >= 2) {
		s.push(n % 2);
		n /= 2;
	}
	s.push(n);

	if (s.size() % 3 == 1) cout << "00";
	else if (s.size() % 3 == 2) cout << "0";

	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}
int main() {
	string s;
	cin >> s;

	vector<int> vec;
	for (int i = 0; i < s.length(); i++) {
		vec.push_back(s[i] - '0');
	}

	binary1(vec[0]);

	for (int i = 1; i < s.length(); i++) {
		binary2(vec[i]);
	}

}