#include <iostream>
#include<stack>
using namespace std;
int main() {
	long long n;
	int b;
	cin >> n >> b;
	stack<int> a;
	while (n >= b) {
		a.push(n % b);
		n = n / b;
	}
	a.push(n);
	while (!a.empty()) {
		if (a.top() >= 10) {
			char k = a.top() + 55;//�ƽ�Ű �ڵ带 ����Ͽ� ���ĺ����� ��ȯ
			cout << k;
		}
		else cout << a.top();
		a.pop();
	}
}


