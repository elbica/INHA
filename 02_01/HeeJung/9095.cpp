#include<iostream>
using namespace std;

int main() {
	int n[11];

	int casenum;
	cin >> casenum;

	n[1] = 1;
	n[2] = 2;
	n[3] = 4;
	for (int i = 0; i < casenum; i++)
	{
		int x;
		cin >> x;
		for (int j = 4; j <= x; j++)
		{
			n[j] = n[j - 2] + n[j - 3] + n[j - 1];
		}
		cout << n[x] << endl;
	
	}
}