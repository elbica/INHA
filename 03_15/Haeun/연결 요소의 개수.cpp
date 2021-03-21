#include <iostream>
#include <vector>
using namespace std;

int visited[1001] = { 0, };
vector<int> graph[1001];

void dfs(int v) {
	visited[v] = 1;

	for (int i = 0; i < graph[v].size(); i++) {
		int num = graph[v][i];
		if (visited[num] == 0) { dfs(num); }
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		graph[n1].push_back(n2);
		graph[n2].push_back(n1);
	}

	int c_result = 0;

	for (int i = 1; i <= n; i++) {
		if (visited[i] == 0) {
			c_result++;
			dfs(i);
		}
	}

	cout << c_result << endl;

}