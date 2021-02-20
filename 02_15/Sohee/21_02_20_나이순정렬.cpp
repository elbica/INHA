#include<bits/stdc++.h>
using namespace std;

int main(){
    
    cout.tie(0); cin.tie(0); ios::sync_with_stdio(0);
    int n; cin>>n;
    vector<tuple<int,int,string>> inputs;
    inputs.resize(n);
    for(int i=0; i<n; i++){
        int x; string s; cin>>x>>s;
        inputs[i] = make_tuple(x,i,s);
    }
    sort(inputs.begin(),inputs.end());
    for(int i=0; i<n; i++ ) cout<<get<0>(inputs[i])<<' '<<get<2>(inputs[i])<<'\n';
}