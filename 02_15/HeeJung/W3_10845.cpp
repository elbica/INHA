#include<iostream>
#include<string>
using namespace std;

class Node {
public:
	Node(int data);
	int data;
	Node* next;
};
Node::Node(int data) {
	this->data = data;
	this->next = NULL;
}
class LinkedList {
public:
	Node* f;
	Node* r;
	LinkedList();
	int front();
	int end();
	void addEnd(int data);
	int removeFront();
};
LinkedList::LinkedList() {
	this->f = NULL;
	this->r = NULL;
}
int LinkedList::front() {
	cout << f->data << endl;

	return f->data;

}
int LinkedList::end() {
	cout << r->data << endl;
	return r->data;
}
void LinkedList::addEnd(int data) {
	Node* newNode = new Node(data);
	if (f == NULL) {
		f = r = newNode;
	}
	else {
		r->next = newNode;
		r = newNode;
	}
}
int LinkedList::removeFront() {
	if (f != NULL) {
		Node* tmp = f;
		cout << f->data << endl;
		int tmp_int = f->data;
		f = f->next;
		delete tmp;
		return tmp_int;
	}
	return -1;
}
class LinkedQueue {
public:
	LinkedList *S;
	int n;
	int sz;


	LinkedQueue(int sz) {
		this->sz = sz;
		this->S = new LinkedList();
		this->n = 0;


	}
	int size()
	{
		return n;
	}
	int empty() {
		if (n == 0) return 1;
		else
			return 0;
	}
	void front() {

		if (empty() == true)
			cout << "-1" << endl;
		else
			S->front();
	}
	void back() {
		if (empty() == true)
			cout << "-1" << endl;
		else
			S->end();
	}
	void push(int e) {

		if (n == sz) {
			cout << "Full" << endl;
		}
		else {
			n++;
			S->addEnd(e);
		}
	}
	void pop() {
		if (empty() == true)
			cout << "-1" << endl;
		else {
			S->removeFront();
			n--;
		}
	}
};
int main() {

	
	string name;
	int input;
	int N;
	cin >> N;
	LinkedQueue Q(N);
	for (int i = 0; i < N; i++) {
		cin >> name;
		if (name == "push") {

			cin >> input;
			Q.push(input);
		}
		else if (name == "pop") {
			Q.pop();

		}
		else if (name == "size") {
			cout << Q.size() << endl;
		}
		else if (name == "empty") {
			cout << Q.empty() << endl;
		}
		else if (name == "front") {
			Q.front();
		}
		else if (name == "back") {
			Q.back();
		}

	}
}