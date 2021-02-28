#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> jeopmisa;

int main() {
	string question;
	cin >> question;
	jeopmisa.push_back(question);

	while (question.size() != 1) {
		question.erase(0, 1);
		jeopmisa.push_back(question);
	}

	sort(jeopmisa.begin(), jeopmisa.end());

	for (int i = 0; i < jeopmisa.size(); i++) {
		cout << jeopmisa[i] << endl;
	}

}