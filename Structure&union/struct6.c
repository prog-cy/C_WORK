//creating node in the c language using structure
#include<stdio.h>

struct Node
{
	int data;
	
	struct Node *next;
};

void List(struct Node *n);

int main()
{
	struct Node *head, a , *first, b, *second, c;

	head = &a;
	first = &b;
	second = &c;
	
	head->data =10;// first node
	head->next = first;
	
	first->data =20;//second node
	first->next = second;
	
	second->data = 30;//third node
	second->next = 0;
	printf("%d %d %d\n", head->data, first->data, second->data);
	
	List(head);
	
	return 0;
}

void List(struct Node *n)
{
	while(n!=0)
	{
		printf("%d ", n->data);
		n = n->next;
	}
}