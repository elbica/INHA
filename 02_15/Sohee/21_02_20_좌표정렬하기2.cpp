#include<bits/stdc++.h>
using namespace std;

int n;
vector<pair<int,int>> inputs;

int main(){
    cout.tie(0); cin.tie(0); ios::sync_with_stdio(0);
    cin>>n; inputs.resize(n);
    for(int i=0; i<n; i++) cin>>inputs[i].second>>inputs[i].first;
    sort(inputs.begin(),inputs.end());
    for(int i=0; i<n; i++) cout<<inputs[i].second<<' '<<inputs[i].first<<'\n';

}