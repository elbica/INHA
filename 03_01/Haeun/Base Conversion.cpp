#include <iostream>
#include <stack>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	vector<int> n_arr;
	int a, b;
	cin >> a >> b;
	int m = 0;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int n;
		cin >> n;
		n_arr.push_back(n);
	}

	int decimal = 0;
	for (int i = 0; i < n_arr.size(); i++) {
		decimal += n_arr[i] * pow(a, n_arr.size() - 1 - i);
	} // a���� ���� 10������ ��ȯ

	stack<int> to_b;
	while (decimal >= b) {
		to_b.push(decimal % b);
		decimal /= b;
	}
	to_b.push(decimal);

	while (!to_b.empty()) {
		cout << to_b.top() << " ";
		to_b.pop();
	} // 10������ b���� ���� ��ȯ
}