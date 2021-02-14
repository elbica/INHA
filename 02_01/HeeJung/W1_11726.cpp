#include<iostream>
using namespace std;


int arr[1001];


int main() {
	int x;
	cin >> x;
	int count = 0;

	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <= x; i++)
	{
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
	}
	
	cout << arr[x] << endl;
	return 0;
}