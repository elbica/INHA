#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int n, c;
int inputs[222222];

bool func(ll idx)
{
    ll temp = inputs[0], count = 1;
    for (int i = 1; i < n; i++)
        if (temp + idx <= inputs[i])
        {
            count++;
            temp = inputs[i];
        }
    //cout<<count<<endl;
    return count >= c;
}
int main()
{
    cin >> n >> c;
    for (int i = 0; i < n; i++)
        cin >> inputs[i];
    sort(inputs, inputs + n);
    ll start = 1, end = 1111111111;
    while (start < end)
    {

        ll mid = (start + end) / 2;
        //cout<<start<<' '<<mid<<' '<<end<<endl;
        if (func(mid))
            start = mid + 1;
        else
            end = mid;
    }
    cout << end - 1;
}