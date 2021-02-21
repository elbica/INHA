#include<iostream>
#include<algorithm>
#include<string>
#include<utility>
#include<vector>
using namespace std;

struct Student {
	string name;
	int kor, eng,math;
};

bool sorts(Student a,Student b){
	if (a.kor==b.kor&&a.eng==b.eng&&a.math==b.math) {
		return a.name < b.name;
	}
	else if (a.kor == b.kor&&a.eng == b.eng) {
		return a.math > b.math;
	}
	else if (a.kor == b.kor) {
		return a.eng < b.eng;
	}
	else {
		return a.kor > b.kor;
	}

}
int main() {
	int N;
	cin >> N;

	vector<Student> arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i].name >> arr[i].kor >> arr[i].eng >> arr[i].math;

	}
	stable_sort(arr.begin(), arr.end(), sorts);

	for (int i = 0; i < N; i++) {
		cout<<arr[i].name << '\n';
	}


	return 0;
}