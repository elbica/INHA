#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector <int> newarr;
	int size;
	cin >> size;
	
	int n;
	cin >> n;
	newarr.push_back(n);
	for (int i = 1; i < size; i++) {
		int n;
		cin >> n;

		int vecsize = newarr.size();
		for (int j = vecsize - 1; j >= 0; j--) {
			if (newarr.at(j) < n) {
		 		if (j == newarr.size() - 1)
					newarr.push_back(n);
				else
					newarr.at(j + 1) = n;
				break;
			}
			if (j == 0) newarr.at(0) = n;
		}

	}
	cout << newarr.size() << endl;
	return 0;

}