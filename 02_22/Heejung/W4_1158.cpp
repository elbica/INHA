#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	queue<int> q;
	for (int i = 1; i <= x; i++) {
		q.push(i);
	}
	cout << "<";

	while (!q.empty()) {
		for (int i = 0; i < y - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if (!q.empty()) {
			cout << ", ";
		}
	}
	cout << ">" << '\n';
	
}