#include <iostream>
using namespace std;
int main() {
    int mod = 1000000;
    char arr[5001];
    cin >> arr;
    int dp[5001] = { 0 };
    int i;
    for (i = 0; arr[i] != '\0'; i++) {
        int n = arr[i] - '0';
        int m = (arr[i - 1] - '0') * 10 + arr[i] - '0';
        if (n > 0 && n <= 9) {
            if (i == 0) dp[0] = 1;
            else dp[i] = (dp[i] + dp[i - 1]) % mod;
        }
        if (m >= 10 && m <= 26) {
            if (i == 1) { dp[1] = dp[1] + 1; }
            else dp[i] = (dp[i] + dp[i - 2]) % mod;
        }
    }
    cout << dp[i - 1] % mod;

    return 0;
}
