#include<iostream>
#include<algorithm>
using namespace std;
long long card[1000000];
int main()
{
	cin.tie(0);
	cin.sync_with_stdio(false);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> card[i];
	sort(card, card + N);
	int cnt = 1;
	int max = 0;
		int id = 0;
	for (int i = 0; i < N - 1; i++)
	{
		if (card[i] == card[i + 1])
		{
			cnt++;
			if (cnt > max)
			{
				max = cnt;
				id = i;
			}
		}
		else
			cnt = 1;
	}
	cout << card[id] << '\n';

}