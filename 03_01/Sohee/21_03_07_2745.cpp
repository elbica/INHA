#include<bits/stdc++.h>
using namespace std;
int arr[222];
int main(){
    int i=10;
    for(char c = 'A'; c<='Z'; c++,i++) arr[c] = i;
    int answer = 0;
    string s; int b; cin>>s>>b;
    for(int j=0;j<s.size(); j++){
        //cout<<b<<' '<<s.size()-j-1<<endl;
        //cout<<pow(b,s.size()-j-1)<<endl;
        if(s[j]>'9') answer += arr[s[j]]*pow(b,s.size()-j-1);
        else answer += (s[j]-'0')*pow(b,s.size()-j-1);
        //cout<<answer<<endl;
    }
    cout<<answer;

}