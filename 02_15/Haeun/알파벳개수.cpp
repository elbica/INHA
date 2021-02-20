#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<char> wordtoChar;
	int find_list[123] = { 0, };

	string word;
	cin >> word;
	copy(word.begin(), word.end(), back_inserter(wordtoChar));

	for (int i = 0; i < wordtoChar.size(); i++) {
		find_list[wordtoChar[i]]++;
	}

	for (int i = 97; i <= 122; i++) {
		cout << find_list[i] << " ";
	}

}