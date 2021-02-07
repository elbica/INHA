#include <iostream>
using namespace std;
int small(int a, int b)
{
    if (a > b) return b;
    else return a;
}
int main()
{
    int number;
    int dp[1000000];
    cin >> number;
    dp[1] = 0;
    for (int i = 2; i <= number; i++){
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0){
            dp[i] = small(dp[i], dp[i / 2] + 1);
        }
        if (i % 3 == 0){
            dp[i] = small(dp[i], dp[i / 3] + 1);
        }
    }
    cout << dp[number];
    return 0;
}