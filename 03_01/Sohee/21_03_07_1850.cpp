#include<bits/stdc++.h>
using namespace std;
unsigned long long int getGcd(unsigned long long int x, unsigned long long int y){
    if(y == 0){
        return x;
    }else{
        return getGcd(y, x%y);
    }
}

int main(){
    unsigned long long int x,y,temp; cin>>x>>y;
    temp = getGcd(x,y);
    for(int i=0; i<temp; i++) cout<<1;
    
}