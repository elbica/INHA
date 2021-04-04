#include <iostream>
#include <algorithm>
using namespace std;

long long ans;
long long N, K;
long long list[10000];

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	cin >> N >> K;

	long long maxi = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> list[i];
		maxi = max(maxi, list[i]);
	}

	long long left = 1, right = maxi, mid;

	while (left <= right)
	{
		mid = (left + right) / 2;

		
		long long now = 0;

		for (int i = 0; i < N; i++)
		{
			
			now += list[i] / mid;
		}

		if (now >= K)
		{
			
			left = mid + 1;

			ans = max(ans, mid);
		}
		else
		{
			
			right = mid - 1;
		}
	}

	cout << ans << '\n';
}