#include<iostream>
#include<algorithm>
using namespace std;

int nums[1000001];

int main() {
	int x;

	cin >> x;
	
	for (int i = 0; i < x; i++) {
		cin >> nums[i];
	}
	sort(nums, nums+x);
	for (int i = 0; i < x; i++) {
		cout << nums[i] << '\n';
	}
	return 0;
}