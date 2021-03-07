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
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> inputs(n);
        long long answer = 0;
        for(int i=0;i<n; i++)
            cin>>inputs[i];
            
        for(int i=0; i<inputs.size()-1; i++)
            for(int j=i+1; j<inputs.size(); j++) answer += getGcd(inputs[i],inputs[j]);
        cout<<answer<<endl;
    }
}