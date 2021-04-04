#include<iostream>
#include<cmath>
using namespace std;


const int MAX = 300000 + 1;
int N;
int visit[MAX];


void DFS(int s) {

	visit[s]++;
	if (visit[s]==3) {
		return;
	}
	int sum = 0;
	while (s) {
		sum += (int)pow((s % 10), N);
		s /= 10;
	}
	DFS(sum);
}

int main() {
	ios_base::sync_with_stdio(0);

	cin.tie(0);
	int x;
	cin >> x >> N;

	DFS(x);
	int result = 0;
	for (int i = 0; i < MAX; i++) {
		if (visit[i] == 1)
			result++;
	}
	cout << result << '\n';
	return 0;
}