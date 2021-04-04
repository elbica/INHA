
#include<iostream>
#include<algorithm>
using namespace std;


long long len[1000001];
long long result = 0;
long long maxi = 0;

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N, M;
	cin >> N >> M;


	for (int i = 0; i < N; i++) {
		cin >> len[i];
		maxi = max(maxi, len[i]);
	}
	long long left = 0, right = maxi;
	long long mid;
	while (left <= right) {
		mid = (left + right) / 2;
		long long now = 0;
		for (int i = 0; i < N; i++)
		{
			long long sub = len[i] - mid;
			if (sub > 0) {
				now += sub;
			}

		}
		if (now >= M) {
			left = mid + 1;
			result = max(result, mid);
		}
		else
			right = mid - 1;

	}
	cout << result << '\n';


}