#include <iostream>
using namespace std;

int main() {
    int n;
    int dp[1001];
    int pay[1001];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> pay[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i] = max(dp[i], dp[i - j] + pay[j]);
        }
    }

    cout << dp[n] << endl;
}