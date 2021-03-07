#include<iostream>
#include<string>
using namespace std;


string first(char a) {
	string result;
	if (a == '1') result = "1";
	else if (a == '2') result = "10";
	else if (a == '3') result ="11";
	else if (a == '4') result = "100";
	else if (a == '5')result = "101";
	else if (a == '6')result = "110";
	else if (a == '7') result = "111";

	return result;
}
string last(char a) {
	string result;
	if (a == '0') result = "000";
	else if (a == '1') result = "001";
	else if (a == '2') result = "010";
	else if (a == '3')result = "011";
	else if (a == '4')result = "100";
	else if (a == '5')result = "101";
	else if (a == '6')result = "110";
	else if (a == '7')result= "111";

	return result;
}
int main() {
	string n;
	cin >> n;
	//int size = n.size();
	if (n == "0"&&n.size() == 1) {
		cout << 0;
		return 0;
	}
	cout << first(n[0]);

	for (int i = 1; i < n.size(); i++) {
		cout << last(n[i]);
	}
	cout << '\n';
}