#include <iostream>
using namespace std;
int main() {
    int N, K;
    int mod = 1000000000;
    cin >> N >> K;
    int dp[201][201];
    for (int n = 1; n <= N; n++) {
        for (int k = 1; k <= K; k++) {
            if (n == 1) dp[n][k] = k;
            else if (k == 1) dp[n][k] = 1;
            else dp[n][k] = (dp[n][k - 1] % mod + dp[n - 1][k] % mod) % mod;
        }
    }

    cout << dp[N][K] % mod;
    return 0;
}

