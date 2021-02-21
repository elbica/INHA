#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n; cin>>n; int idx = 0;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        if(s=="push_front"){int x; cin>>x; v.insert(v.begin(),x);}
        else if(s=="front"){
            if(v.size()==0) cout<<-1<<endl;
            else cout<<v[0]<<endl;
        }
        else if(s=="back"){
            if(v.size()==0) cout<<-1<<'\n';
            else cout<<v[v.size()-1]<<'\n';
        }
        else if(s=="size"){
            cout<<v.size()-0<<'\n';
        }
        else if(s=="empty"){
            if(v.size()==0) cout<<1<<'\n';
            else cout<<0<<'\n';
        }
        else if(s=="pop_front"){
            if(v.size()==0) cout<<-1<<'\n';
            else{
                cout<<v[0]<<'\n';
                v.erase(v.begin());
                
            }
        }
        else if(s=="pop_back"){
            if(v.size()){
                cout<<v[v.size()-1]<<'\n'; v.pop_back();
            }
            else cout<<-1<<'\n';
        }
        else if(s=="push_back"){int x; cin>>x; v.push_back(x);}
    }

}