#include<iostream>
#include<algorithm>
using namespace std;
int N,M;
int arrN[500001];
int arrM[500001];
int main() {
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arrN[i];
	}
	sort(arrN, arrN + N);
	
	
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> arrM[i];
	}
	for(int i=0;i<M;i++){
		int ans = 0;
		int left = 0, right = N - 1, mid;
		while (left <= right) {
			mid=(left + right) / 2;
			if (arrM[i] >= arrN[mid]) {
				
				left = mid + 1;
				ans = arrN[mid];
			}
			else{
				right = mid - 1;
			}
		
		}
		if (arrM[i] == ans) {
			cout << "1" << " ";
		}
		else {
			cout << "0" << " ";
		}
	}
}