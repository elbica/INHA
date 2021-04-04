
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    int a[2000002];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> a[n+i];
    }
    sort(a, a + (n + m));
    for (int i = 0; i < n + m; i++) {
        cout << a[i] << " ";
    }
}
