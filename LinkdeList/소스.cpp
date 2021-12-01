#include <iostream>

using namespace std;

typedef struct Node {
	int data; // 우리가 사용할 데이터
	Node* link; // 다음 노드를 가리키는 포인터
}; Node;

// ** phead = 헤드는 리스트의 이름이다. (데이터를 가지고 있지 않음)
//
void insert_node(Node** phead, Node* p, Node* new_node)
{
	if (*phead == NULL) { // 리스트가 비어있는 경우
		new_node = NULL;
		*phead = new_node; // 새로들어온 노드가 헤드가됨
	}
	else if (p == NULL) { // 맨앞에 삽입하는경우
		new_node->link = *phead; //맨앞에 등장하는 요소는 무조건 헤드로 지칭되어야함
		*phead = new_node;
	}
	else { // 중간에 끼워넣는 경우 (일반적인 경우)
		new_node->link = p->link;
		p->link = new_node;
	}
}

void remove_node(Node** phead, Node* p, Node* removed)
{
	if (p == NULL)
	{

	}
}