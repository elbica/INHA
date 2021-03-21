#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[20001];
int visit[20001] = { 0, };
int colors[20001] = { 0, };
bool check = true;

void init() {
    check = true;
    for (int i = 0; i <= 20000; i++) {
        graph[i].clear();
        visit[i] = false;
        colors[i] = false;
    }
}

void dfs(int v) {
    visit[v] = 1;

    for (int i = 0; i < graph[v].size(); i++) {
        int num = graph[v][i];
        if (!visit[num]) {
            // 방문을 안했다면 나와 다른 컬러로 지정
            colors[num] = !colors[v];
            dfs(num);
        }
        else if (colors[num] == colors[v]) {
            // 방문을 했다면 나와 컬러가 달라야함
            check = false;
            return;
        }
    }
}

int main() {
    int k;
    cin >> k;

    for(int i=0; i<k; i++){
        int v, e;
        cin >> v >> e;

        init();
        for(int i=0; i<e; i++) {
            int n1, n2;
            cin >> n1 >> n2;
            graph[n1].push_back(n2);
            graph[n2].push_back(n1);
        }

        for (int i = 1; i <= v; i++) if (!visit[i]) dfs(i);

        if (check) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}