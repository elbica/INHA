#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	long long num;
	int x;
	cin >> num >> x;
	stack<int> s1;
	while (true) {
		int mod = num % x;
		
		s1.push(mod);
		num /= x;
		if (num < x) {
			s1.push(num);
			break;
		}
	}
	while(!s1.empty()) {
		if (s1.top() >= 10) {
			printf("%c", s1.top() + 55);
		}
		else {
			cout << s1.top();
		}
		s1.pop();
	}
}