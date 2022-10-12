// #pragma warning (disable:4996)
#include "SingleLinkedList.h"
typedef struct Node
{
	int data;
	struct Node* next;
}Node;

void create(int a[], int n, Node **first)
{
	int i;
	struct Node* t, * last;
	*first = (struct Node*)malloc(sizeof(struct Node));
	(*first)->data = a[0];
	(*first)->next = NULL;
	last = *first;

	for (i = 1; i < n; i++)
	{
		t = (struct Node*)malloc(sizeof(struct Node));
		t->data = a[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

void display(Node* p)
{
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
}

void Display(Node* p)
{
	if (p != NULL)
	{
		printf("%d ", p->data);
		Display(p->next);
	}
}

int count(Node* p)
{
	int c = 0;
	while (p != 0)
	{
		c++;
		p = p->next;
	}
	return c;
}

int Count(Node* p)
{
	if (p == 0) return 0;
	else return 1 + count(p->next);
}

int add(Node* p)
{
	int sum = 0;
	while (p != NULL)
	{
		sum = sum + p->data;
		p = p->next;
	}
	return sum;
}

int Add(Node* p)
{
	if (p == NULL) return 0;
	return Add(p->next) + p->data;
}

int max(Node *p)
{
	int x = INT_MIN;
	while (p!=NULL)
	{
		if(p->data > x)
		{
			x = p->data;
		}
		p = p->next;
	}
	return x;
}