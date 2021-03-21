#include<iostream>
#include<vector>
using namespace std;

#define RED 1
#define BLUE 2

int N, M,S;

vector<int> graph[20001];
int visit[20001];


void DFS(int s);
bool isGraph();

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> M >> S;



		for (int i = 0; i < S; i++) {
			int u, v;
			cin >> u >> v;
			graph[u].push_back(v);
			graph[v].push_back(u);

		}
		for (int i = 1; i <= M; i++) {
			if (!visit[i]) {
				DFS(i);
			}
		}
		if (isGraph()) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}
	//return 0;
	}

void DFS(int s) {
	if (!visit[s]) {
		visit[s] = RED;
	}
	int size = graph[s].size();
	for (int i = 0; i < size; i++) {
		int next = graph[s][i];
		if (!visit[next]){
			if (visit[s] == RED) {
				visit[next] = BLUE;
			}
			else if (visit[s] == BLUE) {
				visit[next] = RED;
			}
		DFS(next);
	}
}
}
bool isGraph() {
	for (int i = 1; i <= M; i++) {
		//int gsize = graph[i].size();
		for (int j = 0; j < graph[i].size(); j++) {
			int next = graph[i][j];
			if (visit[i] == visit[next]) {
				return false;
			}
		}
	}
	return true;
}

