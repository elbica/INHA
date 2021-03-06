#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main() {
	int b;
	string n;
	cin >> n >> b;
	int size = n.length();
	int num = 0;
	int k;
	for (int i = 0; i < size; i++) {
		if (n[size -1 - i] >= 65) {
			num += (n[size - 1 - i] - 55) * pow(b, i);
		}
		else num += (n[size - 1 - i] - '0') * pow(b, i);
	}
	cout << num;

}


