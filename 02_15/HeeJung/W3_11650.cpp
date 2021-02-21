#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main() {
	int x;
	cin >> x;
	vector<vector<int>> arr(x, vector<int>(2, 0));
	for (int i = 0; i < x; i++) {
		cin >> arr[i][0];
		cin >> arr[i][1];
		

	}
	sort(arr.begin(), arr.end());

	for (int i = 0; i < x; i++) {
		cout << arr[i][0] << " " << arr[i][1] << "\n";
	}
}