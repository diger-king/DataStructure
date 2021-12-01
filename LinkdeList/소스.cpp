#include <iostream>

using namespace std;

typedef struct Node {
	int data; // �츮�� ����� ������
	Node* link; // ���� ��带 ����Ű�� ������
}; Node;

// ** phead = ���� ����Ʈ�� �̸��̴�. (�����͸� ������ ���� ����)
//
void insert_node(Node** phead, Node* p, Node* new_node)
{
	if (*phead == NULL) { // ����Ʈ�� ����ִ� ���
		new_node = NULL;
		*phead = new_node; // ���ε��� ��尡 ��尡��
	}
	else if (p == NULL) { // �Ǿտ� �����ϴ°��
		new_node->link = *phead; //�Ǿտ� �����ϴ� ��Ҵ� ������ ���� ��Ī�Ǿ����
		*phead = new_node;
	}
	else { // �߰��� �����ִ� ��� (�Ϲ����� ���)
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