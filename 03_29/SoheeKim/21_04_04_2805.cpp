#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll inputs[1111111];
int m, n;
bool func(ll idx)
{
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        if (inputs[i] - idx > 0)
            count += inputs[i] - idx;
    }
    return count >= m;
}
int main()
{
    cin >> n >> m;
    ll start = 0, end = 1;
    for (int i = 0; i < n; i++)
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