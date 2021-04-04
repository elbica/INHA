#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll inputs[11111];
int k, n;
bool func(ll idx)
{
    ll count = 0;
    for (int i = 0; i < k; i++)
        count += inputs[i] / idx;
    return count >= n;
}
int main()
{
    cin >> k >> n;
    ll start = 0, end = 1;
    for (int i = 0; i < k; i++)
    {
        cin >> inputs[i];
        if (start < inputs[i])
            start = inputs[i];
    }
    start++;
    while (start > end)
    {
        ll mid = (start + end) / 2;
        if (func(mid))
        {
            end = mid + 1;
        }
        else
            start = mid;
    }
    cout << start - 1;
}