// 처참한 버전

#include <stdio.h>
#include <stdlib.h>

struct Node {
	Node* next;
	int data;
};

void add(Node * link, int key) {
	Node* new_node = (Node *)malloc(sizeof(Node));
	// 새로운 노드 Node 자료형에 맞추기
	
	new_node->next = link->next;
	new_node->data = key;
	link->next = new_node;
	
	// 처음 들어올 자료는 무조건 Head
}

void deleting(Node * link, int key)
{
	if (link == NULL)
	{
		
	}
}

void insert(int key) {

}

int main()
{
	Node* head = (Node*)malloc(sizeof(Node));
	add(head, 12);
	
}