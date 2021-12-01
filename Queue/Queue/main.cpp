#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

struct Queue {
	Node* front, * tail;

	Queue() {
		front = tail = NULL;
	}
	int len = 0;
	int size = 10; // 임시 고정 할당 Node * node = (Node*)malloc(sizeof(node)) ==> 동적할당

	bool empty() {
		if (len == 0) {
			cout << "큐가 비었네유" << endl;
			return true;
		}
		return false;
	}

	bool full() {
		if (len == size) {
			cout << "큐가 꽉찼다" << endl;
			return true;
		}
		return false;
	}

	void push(int data) {
		if (full()) {
			cout << "큐가 꽉찼는데요?" << endl;
			exit(1);
		}
		tail -> data = data;
		tail = tail->next;
		len++;
	}

	int pop() {
		if (empty()) {
			cout << "큐가 비었다" << endl;
			exit(1);
		}

		Node* popnode = front;

		int return_pop = popnode->data;

		front = popnode -> next;
		len--;

		cout << return_pop;
		return return_pop;
	}
};

int main()
{
	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.push(7);
	q.push(8);
	q.push(9);
	q.push(10);

	q.pop();

	return 0;
}