#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string question;
	getline(cin, question);

	while (question.length() != 0) {

		int num = 0;
		int large = 0;
		int small = 0;
		int gongbaek = 0;

		for (int i = 0; i < question.length(); i++) {
			if (question[i] >= 48 && question[i] <= 57) num++;
			else if (question[i] >= 65 && question[i] <= 90) large++;
			else if (question[i] >= 97 && question[i] <= 122) small++;
			else if (question[i] == ' ') gongbaek++;
		}

		cout << small << " " << large << " " << num << " " << gongbaek << '\n';

		getline(cin, question);
	}

}