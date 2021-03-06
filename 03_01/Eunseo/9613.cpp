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
int main() {
	int N, K;
	long long gcd; // int 형일시 문제에서 제시한 최대 숫자가 들어올 경우, 오류가 남.
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> K;
		int a[100];
		gcd = 0;
		for (int j = 1; j <= K; j++) {
			cin >> a[j];
		}
		for (int j = 1; j <= K; j++) {		
			int p = j + 1;
			while (p <= K) {
				gcd += findmax(a[j], a[p]);
				p++;
			}
		}
		cout << gcd << endl;
	}
}

