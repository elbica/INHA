#include<bits/stdc++.h>
using namespace std;

int n;
vector<tuple<int,int,int,string>> inputs;

int main(){
    cin>>n;
    inputs.resize(n);
    for(int i=0; i<n;i++){
        int x,y,z; string s;
        cin>>s>>x>>y>>z;
        x = -x; z = -z;
        inputs[i] = make_tuple(x,y,z,s);
    }
    sort(inputs.begin(),inputs.end());
    for(int i=0; i<n; i++){
        cout<<get<3>(inputs[i])<<'\n';
    }
}