#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int letters[26];
	memset(letters, -1, sizeof(letters));

	string question;
	cin >> question;

	for (int i = 0; i < question.length(); i++) {
		if(letters[question[i] - 97] == -1) letters[question[i] - 97] = i;
	}

	for (int j = 0; j < 26; j++) {
		cout << letters[j] << " ";
	}
}