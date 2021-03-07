#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int min = max(a,b), max = 0;

	int multiple = 1;
	while (max == 0) {
		if ((a * multiple) % b == 0) max = a * multiple;
		multiple++;
	} // 최소공배수

	for (int i = min; i > 0; i--) {
		if (a % i == 0) {
			if (b % i == 0) { 
				min = i; 
				break; 
			}
		}
	} // 최대공약수

	cout << min << " " << max << endl;


}