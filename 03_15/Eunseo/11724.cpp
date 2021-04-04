#include <iostream>
using namespace std;
int n, m;
bool check[1001];
int arr[1001][1001];
int cnt = 0;

void dfs(int t) {
	check[t] = true;
	for (int i = 1; i <= n; i++) {
		if (arr[t][i] == 1 && check[i] == false) dfs(i);
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		arr[x][y] = arr[y][x] = 1;
	}

	for (int i = 1; i <= n; i++) {
		if (check[i] == false) {
			cnt++;
			dfs(i);
		}
	}

	cout << cnt << endl;
}
