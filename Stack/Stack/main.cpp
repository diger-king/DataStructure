#include <iostream>

using namespace std;

const int stack_size = 5;

class Stack {
private:
	int arr[stack_size]; // 배열을 엄청 크게 하나 잡는다
	int index; // 스택 최상단의 인덱스

public:
	Stack();
	bool empty();
	bool full();
	int push(int data);
	int pop();
};

Stack::Stack() {
	index = -1;
}

bool Stack::empty() { // 스택이 비어있는지 확인
	if (index < 0) {
		cout << "스택이 비어있네요" << endl;
		return true;
	}
	else {
		return false;
	}
}

bool Stack::full() { // 스택이 꽉차있는지 확인
	if (index == stack_size) {
		cout << "스택이 꽉찼네요" << endl;
		return true;
	}
	else {
		return false;
	}
}


int Stack::push(int data) {
	if (Stack::full()) { exit(0); }
	else {
		index++;
		arr[index] = data;
		return 0;
	}
}

int Stack::pop() { // 현재 인덱스의 원소를 삭제하고 반환한다.
	if (index >= 0) {
		cout << arr[index] << endl;
		index--;
		return 0;
	}
	else {
		cout << "pop할게 없네여" << endl;
		return 0;
	}
}

int main() {
	Stack s;
	s.push(1);
	s.push(211);
	s.push(13214352);
	s.push(122);
	s.push(321);
	s.push(511);

	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.empty();


	return 0;
}