#include <iostream>
#include <vector>
#include <string>
using namespace std;

void ROT13(string q) {
	for (int i = 0; i < q.length(); i++) {
		if (q[i] >= 97 && q[i] <= 109) {
			q[i] += 13;
		}
		else if (q[i] >= 110 && q[i] <= 122) {
			q[i] -= 13;
		}
		else if (q[i] >= 65 && q[i] <= 77) {
			q[i] += 13;
		}
		else if (q[i] >= 78 && q[i] <= 90) {
			q[i] -= 13;
		}
	}
	cout << q << endl;
}

int main() {
	string question;
	getline(cin, question);

	ROT13(question);

}