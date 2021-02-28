#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	queue<int> q;
	queue<int> result;

	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}

	while (!q.empty()) {
		for (int j = 1; j <= k - 1; j++) {
			int num = q.front();
			q.pop();
			q.push(num);
		}
		result.push(q.front());
		q.pop();
	}

	cout << "<";

	while (result.size() != 1) {
		cout << result.front() << ", ";
		result.pop();
	}
	cout << result.front() << ">\n";
}