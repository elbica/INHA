#include<iostream>
#include<string>

using namespace std;


int main() {
	

		string name;
		getline(cin, name);

		for (int i = 0; i < name.size(); i++) {

			if (name[i] >=97 && name[i] <=122) {
				if (name[i] + 13 >= 123) {
					name[i] = name[i] - 13;
				}
				else {
					name[i] = name[i] + 13;
				}
			}
			else if (name[i] >=65 && name[i] <=90) {
				if (name[i] + 13 >= 91) {
					name[i] = name[i] - 13;
				}
				else {
					name[i] = name[i] + 13;
				}
			}
		}
	
		cout << name << endl;
	
}