#include <iostream>
#include <algorithm>
using namespace std;

int score[2][100001];
int result[2][100001] = { 0 };

int main() {
		int T;
		cin >> T;
		for (int i = 0; i < T; i++) {

			int n;
			cin >> n;
			for (int k = 0; k < 2; k++) {
				for (int t = 1; t <= n; t++) {
					cin >> score[k][t];
				}
			}

			result[0][1] = score[0][1];
			result[1][1] = score[1][1];

			for (int i = 2; i <= n; i++) {
				result[0][i] = max(result[1][i - 1], result[1][i - 2]) + score[0][i];
				result[1][i] = max(result[0][i - 1], result[0][i - 2]) + score[1][i];
			}
			cout << max(result[0][n], result[1][n]) << endl;	
		
		}
}