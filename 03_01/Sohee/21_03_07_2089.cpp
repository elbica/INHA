#include<bits/stdc++.h>
using namespace std;

long long n;

int main(){
    cin>>n;
    long long div = n, temp1, temp2;
    if(n==0){cout<<0; return 0;}
    stack<int> s;
    while(div!=0){
        //cout<<div<<endl;
        if(abs(div)%2){
            s.push(1);div--;
        }
        else s.push(0);
        
        div/=-2;
    }
    
    while(!s.empty()){cout<<s.top(); s.pop();}
}