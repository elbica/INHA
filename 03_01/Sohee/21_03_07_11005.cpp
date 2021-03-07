#include<bits/stdc++.h>
using namespace std;
char arr[36];
int main(){
    char c = 'A';
    for(int i=10; i<=35; i++,c++) arr[i] = char(c);
    int n,x; cin>>n>>x;

    stack<char> s;
    int temp;
    while(n!=0){
         temp = n%x;
         if(temp<10) s.push(temp+'0');
         else s.push(arr[temp]);
         n/=x;
    }
    while(!s.empty()){
        cout<<s.top(); s.pop();
    }
    
}