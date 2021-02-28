#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {

	string name;
	
	string arr[1000];
	cin >> name;
	int l = name.size();
	for (int i = 0; i < l; i++) {
		arr[i] = name.substr(i, l);
	}
	sort(arr, arr+l);

	for (int i = 0; i < l; i++) {
		cout << arr[i] << endl;
	}
}