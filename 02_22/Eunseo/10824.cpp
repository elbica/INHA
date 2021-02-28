#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string s1, s2;
    s1 = to_string(a) + to_string(b);
    s2 = to_string(c) + to_string(d);
    long long num1 = stoll(s1); //string -> int
    long long num2 = stoll(s2);
    cout << num1 + num2;

    return 0;
}

