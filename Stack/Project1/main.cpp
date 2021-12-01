#include <iostream>


const int stack_size = 100000; //임시

using namespace std;

class Stack {
private:
	int index;
	int arr[stack_size];

public:
	Stack(int size);
	bool full();
	bool empty();
	void push(int data);
	int pop();
};

Stack::Stack(int size) {
	const int stack_size = size;
	index = -1;
}

bool Stack:: full() {
	if (index >= stack_size) {
		return true;
	}
	return false;
}

bool Stack::empty()
{
	if (index < 0) {
		return true;
	}
	return false;
}

void Stack::push(int data)
{
	if (full()) {
		cout << "스택이 꽉찼네여" << endl;
	}
	else {
		arr[++index] = data; // 기존 -> arr[index] = data, index ++
	}
}

int Stack::pop()
{
	if (empty()) {
		cout << "스택이 비었네여" << endl;
	}
	else {
		index--;
		return arr[index + 1];
	}
}

int main() {
	Stack stack = Stack(15);
	stack.push(123123);
	stack.push(321);
	stack.push(123);
	stack.push(142);
	stack.push(919);

	cout << stack.pop();

	return 0;

}