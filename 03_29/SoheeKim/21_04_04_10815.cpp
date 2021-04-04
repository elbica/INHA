#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<bool> result;
vector<int> input;
int main(){
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
    cin>>n;
    input.resize(n);
    for(int i=0; i<n; i++) cin>>input[i];
    sort(input.begin(),input.end());
    cin>>m;
    for(int i=0; i<m; i++){
        int x; cin>>x;
        if(binary_search(input.begin(),input.end(),x)) result.push_back(1);
        else result.push_back(0);
    }
    for(auto r : result) cout<<r<<' ';
    cout<<'\n';
    
    
}