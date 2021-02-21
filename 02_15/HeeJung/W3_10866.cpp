#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main() {

	deque<int> D;
	string name;
	int input;
	int N;
	cin >> N;
	//LinkedQueue Q(N);
	for (int i = 0; i < N; i++) {
		cin >> name;
		if (name == "push_back") {

			cin >> input;
			D.push_back(input);
		}
		else if (name == "push_front") {
			cin >> input;
			D.push_front(input);
		}
		else if (name == "pop_front") {
			if (D.empty())
				cout << "-1" << endl;
			else {
				cout << D.front() << '\n';
				D.pop_front();
				
			}
		}
		else if (name == "pop_back") {
			if (D.empty())
				cout << "-1" << endl;
			else {
				cout << D.back() << '\n';
				D.pop_back();
			}
		}
		else if (name == "size") {
			cout << D.size() << endl;
		}
		else if (name == "empty") {
			cout << D.empty() << endl;
		}
		else if (name == "front") {
			if (D.empty())
				cout << "-1" << '\n';
			else
			cout<<D.front()<<'\n';
		}
		else if (name == "back") {
			if (D.empty())
				cout << "-1" << '\n';
			else
			cout<<D.back()<<'\n';
		}

	}
	return 0;
}