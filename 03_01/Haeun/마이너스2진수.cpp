#include <iostream>
#include <stack>
using namespace std;

int main() {
	int a;
	cin >> a;

	stack<int> n;
	if (a == 0)  cout << "0";

	while (a != 0) {
		if (a % (-2) == 0) { n.push(0); a /= -2; }
		else {
			n.push(1); a = (a - 1) / (-2);
		}
	}

	while (!n.empty()) {
		cout << n.top();
		n.pop();
	}
}