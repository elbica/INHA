#include <iostream>
#include<algorithm>
using namespace std;


int main() {
    int N, M;
    cin >> N >> M;
    int tree[1000000];

    int maxTree = 0;

    for (int i = 0;i < N;i++) {
        cin >> tree[i];
        maxTree = max(maxTree, tree[i]);
    }

    long long left = 1;
    long long right = maxTree;

    int answer = 0;

    long long myTree = 0;

    while (left <= right) {
        long long mid = (left + right) / 2;

        myTree = 0;

        for (int i = 0;i < N;i++) {
            if (tree[i] > mid)
                myTree += tree[i] - mid;
        }

        if (M > myTree) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
            answer = mid;

        }
    }
    cout << answer << "\n";
}
