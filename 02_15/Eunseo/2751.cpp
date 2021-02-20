#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	int arr[1000001];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	/*int curr;
	for (int j = 0; j < N; j++) {
		for (int i = 0; i < N - j; i++) {
			if (arr[i] > arr[i + 1]) {
				curr = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = curr;
			}
		}
	}  버블정렬 -> 시간초과*/

	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}
	
	return 0;
}

