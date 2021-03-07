#include <iostream>
#include <stack>
using namespace std;

int main() {
    int a, b, m;
    cin >> a >> b;
    cin >> m;
    stack<int> x;
    for (int i = 0; i < m;i++) {
        int n;
        cin >> n;
        x.push(n);
    }
    int num = 0;
    int size = (int)x.size();
    for (int i = 0;i < size;i++) {
        int k = 1;
        for (int j = 0; j < i; j++) {
            k *= a;
        }
        num += k * x.top();
        x.pop();
    }
    while (num) {
        x.push(num % b);
        num = num / b;
    }
    while (!x.empty()) {
        cout << x.top() << " ";
        x.pop();
    }
}

