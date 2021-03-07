#include<iostream>
#include<vector>
using namespace std;

int GCD(int x, int y) {
	if (y == 0) return x;
	else {

		return GCD(y, x%y);
	}
}

int main() {
	int t;
	
	cin >> t;
	int casenum;
	for (int i = 0; i < t; i++) {
		cin >> casenum;
		vector<long long> v1;
		int num;
		for (int i = 0; i < casenum; i++) {
			cin >> num;
			v1.push_back(num);
		}
		long long gcdnum = 0;
		for (int i = 0; i < casenum; i++) {
			for (int j = 0; j < i; j++) {
				gcdnum += GCD(v1[i], v1[j]);
			}
		}
		cout << gcdnum << endl;
	}
}