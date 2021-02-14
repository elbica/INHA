#include <iostream>
using namespace std;
int cal_result[1000];

int calculate(int n) {
	if (n == 1) return 1;
	else if (n == 2) return 2;

	if (cal_result[n] != 0) return cal_result[n];
	else {
		cal_result[n] = (calculate(n - 1) % 10007) + (calculate(n - 2) % 10007);
		return cal_result[n];
	}
}

int main() {
	int n;
	cin >> n;
	cout << calculate(n) % 10007 << endl;
}