#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
   
    int N, K;
    cin >> N >> K;
    queue<int> q;
    cout << "<";
    for (int i = 0; i < N; i++) {
        q.push(i + 1);
    }
    while (!q.empty()) {
        for (int i = 0; i < K - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        if (q.size() != 1) {
            cout << q.front() << ", ";
        }
        else {
            cout << q.front();
        }
        q.pop();
    }
    cout << ">";
}

