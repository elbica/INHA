#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;
	int* arr = new int [n2+1];

	for (int i = 0; i <= n2; i++) { arr[i] = 1; }
	arr[1] = 0;

	for (int i = 2; i <= n2; i++) {
		for (int j = 2; i * j <= n2; j++) {
			arr[i * j] = 0;
		}
	}

	for(int i=n1; i<=n2; i++){
		if (arr[i] != 0) cout << i << '\n';
	}
}
