#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	stack<int> n_list;

	for (int i = 0; i < n; i++) {
		string q;
		cin >> q;
		if (q == "push") {
			int num;
			cin >> num;
			n_list.push(num);
		}
		else if (q == "top") {
			if (!n_list.empty()) cout << n_list.top() << endl;
			else cout << -1 << endl;
		}
		else if (q == "size") {
			cout << n_list.size() << endl;
		}
		else if (q == "empty") {
			cout << n_list.empty() << endl;
		}
		else if (q == "pop") {
			if (n_list.empty()) cout << -1 << endl;
			else { 
				cout << n_list.top() << endl;
				n_list.pop();

			}
		}
	}

}