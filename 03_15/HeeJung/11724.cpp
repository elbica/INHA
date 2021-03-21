#include<iostream>
#include<vector>
using namespace std;

int N, M;

int A[1001][1001];
int visit[1001];


void DFS(int s);
int main() {
	cin >> N >> M;
	int u, v;

	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		A[u][v] = 1;
		A[v][u] = 1;

	}

	int count = 0;
	for (int i = 1; i <= N; i++) {
		if (visit[i] == 0) {
			DFS(i);
			count++;
		}
	}
	cout << count << '\n';
}

void DFS(int s) {
	//cout << s << " ";
	visit[s] = 1;
	for (int i = 1; i <= N; i++) {
		if (visit[i] == 1 || A[s][i] == 0) continue;
		DFS(i);
	}

}