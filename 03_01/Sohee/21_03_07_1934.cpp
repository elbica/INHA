#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int x,y; cin>>x>>y;
        long long int answer1, answer2;
        for(int i=min(x,y); i>=1; i--){
            if(x%i==0 && y%i==0) {answer1 = i; break;}
        }
        answer2 = x*y/answer1;
        cout<<answer2<<'\n';
    }
    
    
}