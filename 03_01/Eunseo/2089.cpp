#include<iostream>
#include<stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> a;
    if (n == 0)  cout << "0";
    while(n) {
        if (n % -2 == 0) {
            a.push(0);
            n = n / -2;
        }
        else {
            a.push(1);
            n = (n - 1) / -2;
        }
    }
    while (!a.empty()) {
        cout << a.top();
        a.pop();
    } 
}

