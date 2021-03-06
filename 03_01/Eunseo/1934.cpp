#include <iostream>

using namespace std;
int findmax(int a, int b) {
	while (b != 0) {
		int x = a % b;
		a = b;
		b = x;
	}
	return a;
}
int findmin(int a, int b) {
	return a * b / findmax(a, b);
}
int main() {
	int a, b, N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		cout << findmin(a, b) << endl;
	}
}

