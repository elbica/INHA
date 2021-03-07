#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int a,b; cin>>a>>b;
    int m; cin>>m;
    ll temp = 0;
    
    for(int i=m-1; i>=0; i--){
        int x; cin>>x;
        temp += x*pow(a,i);
    }
    stack<int> s;
    while(temp!=0){
        s.push(temp%b); temp/=b;
    }
    while(!s.empty()){
        cout<<s.top()<<' '; s.pop();
    }
}