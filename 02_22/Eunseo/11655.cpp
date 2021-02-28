#include <iostream>
#include <string>
using namespace std;
int main() {
    char str[100];
    scanf("%[^\n]", str); //cin이 오류남. 왜지?

    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            if (str[i] <= 'M') str[i] += 13;
            else str[i] -= 13;
        }
        else if ('a' <= str[i] && str[i] <= 'z') {
            if (str[i] <= 'm') str[i] += 13;
            else str[i] -= 13;
        }
    }
    cout << str;
    return 0;
}

