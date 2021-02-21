#include<iostream>
#include<string>
using namespace std;


class Stack {
private:
	int capacity;
	int* stack;
	int t;
public:
	Stack(int capacity) {
		this->capacity = capacity;
		this->t = 0;
		this->stack = new int[capacity];
	}
	int size() {
		return t;
	}
	bool empty() {
		if (size() == 0) {
			return 1;
		}
		else
			return 0;
	}
	void push(int x) {
		stack[++t] = x;
	}
	int pop() {
		if (empty()) {
			return -1;
		}
		else {
			return stack[t--];
		}
	}
	int top() {
		if (empty()) {
			return -1;
		}
		else {
			return stack[t];
		}
	}
};
int main() {
	int size;
	cin >> size;
	Stack s1(size);
	string name;
	int num;

	for (int i = 0; i < size; i++) {
		cin >> name;
		if (name == "push") {
			cin >> num;
			s1.push(num);

		}
		else if (name == "pop") {
			cout<<s1.pop()<<endl;
		}
		else if (name == "top")
		{
			cout << s1.top() << endl;
		}
		else if (name == "size") {
			cout << s1.size() << endl;
		}
		else if (name == "empty") {
			cout << s1.empty() << endl;
		}
	}
}