#include<bits/stdc++.h>
using namespace std;
string s;
char inputs[1000001];
int n;
void recur(int idx){
    if(idx>=s.size()) return;
    int answer = 4*(s[idx]-'0') + 2*(s[idx+1]-'0') + (s[idx+2]-'0');
    cout<<answer;
    recur(idx+3);
}
int main(){
    cin>>s; n = s.size();
    if(s=="0") {
        cout<<0; return 0;
    }
    for(int i=0; i<s.size(); i++) inputs[i] = s[i];
    if(s.size()%3==1){
        cout<<1; recur(1);
    }
    else if(s.size()%3==2){
        string temp = s.substr(0,2);
        if(temp=="10"){cout<<2;}
        else if(temp=="11"){cout<<3;}
        recur(2);
    }
    else {recur(0);}
}