#include<iostream>
#include<algorithm>
#include<string>
#include<utility>
#include<vector>
using namespace std;

struct peo {
	int age;
	string name;
};
bool sorts(peo a,peo b) {
	return a.age < b.age;
}
int main() {
	int N;
	cin >> N;
	
	vector<peo> arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i].age >> arr[i].name;
	}

	stable_sort(arr.begin(), arr.end(), sorts);


	for (int i = 0; i < N; i++) {
		cout << arr[i].age << " " << arr[i].name << '\n';
	}
}