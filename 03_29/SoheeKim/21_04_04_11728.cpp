#include<bits/stdc++.h>
int a[1111111],b[1111111],result[2222222];
int n,m;
using namespace std;
int main(){
    cin.tie(0); ios_base::sync_with_stdio(0); cout.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    a[n] = b[m] = 2111111111;
    int idx1 = 0, idx2 = 0, idx3 = 0;
    while(idx1<n || idx2<m){
        if(a[idx1]>b[idx2]){
            result[idx3++] = b[idx2]; idx2++;
        }
        else result[idx3++] = a[idx1], idx1++;
    }
    for(int i=0; i<n+m; i++) cout<<result[i]<<' ';
}