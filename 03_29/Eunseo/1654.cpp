#include <iostream>
#include<algorithm>
using namespace std;

int search(long long arr[], int size, int N) {
	long long s, middle, result;
	long long a = arr[size];
	s = 1;
	while (s <= a) {
		middle = (s + a) / 2;
		long long sum = 0;
		for (int i = 1; i <= size; i++) sum += arr[i] / middle;
		if (sum < N) a = middle - 1;
		else {
			result = middle;
			s = middle + 1;
		}
	}
	return result;
}

int main() {
	int K, N;
	cin >> K >> N;
	long long* mine = new long long[K + 1];
	mine[0] = 0;
	for (int i = 1; i <= K; i++) {
		cin >> mine[i];
	}
	sort(mine, mine + (K + 1));
	long long result = search(mine, K, N);
	cout << result;
}
