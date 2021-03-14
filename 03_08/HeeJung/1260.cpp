#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int N, M, s;

int A[1001][1001];
int visit[1001];


void DFS(int s);
void BFS(int s);

int main() {

	cin >> N >> M >> s;
	int u, v;
	for (int i = 0; i < M; i++) {
		
		cin >> u >> v;
		A[u][v] = A[v][u] = 1;

	}
	DFS(s);
	cout << '\n';
	BFS(s);
	return 0;



}
void DFS(int s) {
	cout << s << " ";
	visit[s] = 1;
	for (int i = 1; i <= N; i++) {
		if (visit[i] == 1 || A[s][i] == 0) continue;
		DFS(i);
	}

}
void BFS(int s) {
	queue<int> q;
	q.push(s);
	visit[s] = 0;

	while (!q.empty()) {
		s = q.front();
		cout << s << " ";
		q.pop();
		for (int i = 1; i <= N; i++) {
			if (A[s][i] == 0 || visit[i] == 0) continue;
			q.push(i);
			visit[i] = 0;
		}
		
	}
}