#include<bits/stdc++.h>
using namespace std;
string x;
stack<int> s;
void recur(int x){
    if(x!=0){
        s.push(x%2);
        recur(x/2);
    }
    else return;
}
int main(){
    cin>>x;
    if(x=="0") {cout<<0; return 0;}
    for(int i=0; i<x.size(); i++){
        int c = x[i]-'0';
        if(i==0){
            if(c==1){cout<<1; continue;}
            else if(c==2){cout<<10; continue;}
            else if(c==3){cout<<11; continue;}
        }
        for(int z=2; z>=0; z--)
            cout<<bool(((1<<z)&c));

    }
    
}