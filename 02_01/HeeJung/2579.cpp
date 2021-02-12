#include<iostream>
#include<vector>
using namespace std;

int maxFun(int a, int b) {

	if (a > b)
		return a;
	else
		return b;

}
int main() {
	int arr[3001];
	int max[3001];
	int size;
	cin >> size;

	int idx;
	for (int i = 1; i <= size; i++) {
		cin >> idx;
		arr[i] = idx;
	}
	max[0] = 0;
	max[1] = arr[1];
	max[2] = arr[1] + arr[2];
	for (int i = 3; i <= size; i++) {
		max[i] = maxFun( max[i - 2] + arr[i], max[i - 3] + arr[i - 1] + arr[i]);
	}

	cout << max[size] << endl;


}

