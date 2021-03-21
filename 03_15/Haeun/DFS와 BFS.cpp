#include <iostream>
#include <queue>
using namespace std;

int visited[1001] = { 0, };
int graph[1001][1001];
queue<int> q;

void dfs(int v, int n) {
	cout << v << " ";
	visited[v] = 1;

	for (int i = 1; i <= n; i++) {
		if (graph[v][i] == 1 && visited[i] == 0) { dfs(i, n); }
	}
}

void bfs(int v, int n) {
	q.push(v);
	visited[v] = 1;

	while (!q.empty()) {
		int top = q.front();
		q.pop();
		cout << top << " ";

		for (int i = 1; i <= n; i++) {
			if (graph[top][i] == 1 && visited[i] == 0) {
				visited[i] = 1;
				q.push(i);
			}
		}
	}
}

int main() {
	int n, m, v;
	cin >> n >> m >> v;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			graph[i][j] = 0;
		}
	}

	for (int i = 0; i < m; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		graph[n1][n2] = graph[n2][n1] = 1;
	}

	dfs(v, n);
	cout << "\n";
	for (int i = 0; i <=n; i++) {
		visited[i] = 0;
	}
	bfs(v, n);
}