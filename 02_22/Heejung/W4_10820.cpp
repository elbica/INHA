#include<iostream>
#include<string>

using namespace std;


int main() {
	for (int i = 0; i < 100; i++) {
		int stringnum[4] = { 0,0,0,0 };
		string name;
		getline(cin, name);
		if (name.size() == 0) {
			break;
		}
		for (int i = 0; i < name.size(); i++) {

			if (name[i] - 97 >= 0 && name[i] - 97 <= 25) {
				stringnum[0]++;
			}
			else if (name[i] - 65 >= 0 && name[i] - 65 <= 25) {
				stringnum[1]++;
			}
			else if (name[i] - 48 >= 0 && name[i] - 48 <= 9) {
				stringnum[2]++;
			}
			else if (name[i] - 32 == 0) {
				stringnum[3]++;
			}
		}
		for (int i = 0; i < 4; i++) {
			cout << stringnum[i] << " ";
		}
		cout << '\n';
	}
}