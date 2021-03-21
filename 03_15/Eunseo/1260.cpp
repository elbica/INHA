#include <iostream>
#include <queue>
using namespace std;

#define SIZE 1000+1
int graph[SIZE][SIZE] = { 0, };
bool visited[SIZE] = { false, };
int n, m, v;

void reset() {
    for (int i = 0; i <= 1000; i++) visited[i] = false;
}

void DFS(int v) {
    cout << v << " ";
    visited[v] = true;

    for (int i = 1;i <= n;i++) {
        if (graph[v][i] && !visited[i]) {
            visited[i] = true;
            DFS(i);
        }
    }
    return;
}

void BFS(int v) {
    queue<int> que;
    que.push(v);

    visited[v] = true;

    while (!que.empty()) {
        int vertex = que.front();
        cout << vertex << " ";
        que.pop();

        visited[vertex] = true;

        for (int i = 1;i <= n;i++) {
            if (graph[vertex][i] && !visited[i]) {
                visited[i] = true;
                que.push(i);
            }
        }

    }

}

int main() {

    cin >> n >> m >> v;

    for (int i = 0; i < m; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }

    DFS(v);
    cout << "\n";

    reset();

    BFS(v);
    cout << "\n";

    return 0;
}