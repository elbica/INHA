#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//substr ��� ->substr�� �ε��� ���ڸ� �ϳ��� �Ѱ��ְ� �Ǹ� ���ڿ��� 
//              �ش� �ε������� �������� �κ� ���ڿ��� �Ѵ�.
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

