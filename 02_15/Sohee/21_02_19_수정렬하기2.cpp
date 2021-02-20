#include<bits/stdc++.h>
using namespace std;

vector<int> input;
int n;

int main(){
    cout.tie(0); cin.tie(0); ios::sync_with_stdio(0);
    cin>>n; input.resize(n);
    for(int i=0; i<n; i++) cin>>input[i];
    sort(input.begin(),input.end());
    for(int i=0; i<n; i++) cout<<input[i]<<endl;
}