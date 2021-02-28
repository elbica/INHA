#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//substr 사용 ->substr은 인덱스 인자를 하나만 넘겨주게 되면 문자열의 
//              해당 인덱스부터 끝까지를 부분 문자열로 한다.
int main() {
   
    string s;
    string sub[1001];
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        sub[i] = s.substr(i);
    }
    sort(sub, sub + s.length());

    for (int i = 0; i < s.length(); i++) {
        cout << sub[i] << endl;
    }
    return 0;
}

