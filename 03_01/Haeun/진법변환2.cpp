#include <iostream>
#include <stack>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	stack<int> n;

	while (a >= b) {
		n.push(a % b);
		a /= b;
	}
	n.push(a);

	while (!n.empty()) {
		if (n.top() >= 10) cout << char(n.top() + 55);
		else cout << n.top();
		n.pop();
	}
}