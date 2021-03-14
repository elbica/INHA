#include <iostream>
#include <algorithm>
using namespace std;

long long twocount(long long n) {
	long long count = 0;
	for (long long i = 2; i<=n; i *= 2) {
		count += n / i;
	}
	return count;
}

long long fivecount(long long n) {
	long long count = 0;
	for (long long i = 5; i <= n; i *= 5) {
		count += n / i;
	}
	return count;
}

long long count(long long a, long long b) {
	return min(a, b);
}

int main() {
	long long n, m;
	cin >> n >> m;
	
	long long two_count = twocount(n) - twocount(m) - twocount(n - m);
	long long five_count = fivecount(n) - fivecount(m) - fivecount(n - m);

	cout << min(two_count, five_count) << '\n';

}