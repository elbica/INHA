#include <iostream>
#include<vector>
#include <algorithm>
#include <stack>

using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, k;
	cin >> N ;
	stack<int> s;
	string q;
	for (int i = 0; i < N; i++) {
		cin >> q;
		if (q == "push") {
			cin >> k;
			s.push(k);
		}
		else if (q == "size") {
			cout << s.size() << endl;
		}
		else if (q == "empty") {
			cout << s.empty() << endl;
		}
		else if (q == "pop") {
			if (s.empty()) cout << -1 << endl;
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}
		else if (q == "top") {
			if (s.empty()) cout << -1 << endl;
			else cout << s.top() << endl;
		}
		
	}
	return 0;
}

