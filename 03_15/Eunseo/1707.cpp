#include <iostream>
#include <vector>
#include <queue>
#define MAX 20000
using namespace std;

vector<int> adj[MAX + 1];
bool check[MAX + 1] = { 0, };
int num[MAX + 1];
int K, V, E, u, v;

void dfs(int s, int color) {
	check[s] = true;
	num[s] = color;
	for (int i = 0; i < adj[s].size(); i++) {
		int nxt = adj[s][i];
		if (check[nxt]) continue;
		dfs(nxt, -color);
	}
}

void init(int n) {
	for (int i = 0; i <= n; i++) {
		adj[i].clear();
		check[i] = 0;
		num[i] = 0;
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> K;
	while (K--) {
		bool a = true;
		cin >> V >> E;
		while (E--) {
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		for (int i = 1; i <= V; i++) {
			if (num[i] == 0) {
				dfs(i, 1);
			}
		}

		for (int i = 1; i <= V; i++) {
			for (int j = 0; j < adj[i].size(); j++) {
				int nxt = adj[i][j];
				if (num[i] == num[nxt]) a = false;
			}
		}
		if (a) cout << "YES" << "\n";
		else cout << "NO" << "\n";
		init(V);
	}
}