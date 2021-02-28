#include <iostream>
#include <stack>

using namespace std;
int main() {
    stack<char>s1;
    stack<char>s2;
    string s;
    cin >> s;
    int N;
    cin >> N;
    for (int i = 0; i < s.length(); i++) {
        s1.push(s[i]);
    }
   while(N--) {
        char a;
        cin >> a;
        if (a == 'L' && !s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        else if (a == 'D' && !s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        else if (a == 'B' && !s1.empty()) {
            s1.pop();
        }
        else if (a == 'P') {
            char b;
            cin >> b;
            s1.push(b);
        }
    }
    stack<char> s3;
    while (!s1.empty()) {
        s3.push(s1.top());
        s1.pop();
    } //s1에는 문자열이 거꾸로 담겨져있기때문에 뒤집어서 출력
    while (!s3.empty()) {
        cout << s3.top();
        s3.pop();
    }
    while (!s2.empty()) {
        cout << s2.top();
        s2.pop();
    }

}

