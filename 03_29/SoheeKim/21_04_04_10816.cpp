#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> result;
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
        auto idx1 = upper_bound(input.begin(),input.end(),x);
        auto idx2 = lower_bound(input.begin(),input.end(),x);
        if(idx2 != input.end() && *idx2 == x) result.push_back(idx1-idx2);
        else result.push_back(0);

    }
    for(auto r : result) cout<<r<<' ';
    cout<<'\n';
    
    
}