#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
    int m = n;
    while (n != 1) {
        for (int i = 2; i <= m; i++) {
            if (n % i == 0) {
                cout << i << endl;
                n = n / i;
                break;
            }
        }
    }
}
