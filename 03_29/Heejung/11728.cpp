#include<iostream>
#include<algorithm>
using namespace std;
int N, M;
int arr1[2000001];
int main() {
	
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	cin >> N >> M;
	

	for (int i = 0; i < N; i++) {
		cin >> arr1[i];
	}
	for (int i = N; i <N+ M; i++) {
		cin >> arr1[i];
	}
	sort(arr1, arr1+N+M);

	for (int i = 0; i < N + M; i++) {
		cout << arr1[i] << " ";
	}

	cout << '\n';
	return 0;

}