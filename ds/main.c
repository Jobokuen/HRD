#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
} Node;

int main(void){
	Node *ptr;
	ptr = malloc(sizeof(Node));
	ptr->data = 1;
	ptr->next = malloc(sizeof(Node));
	ptr->next->data = 3;
	ptr->next->next = malloc(sizeof(Node));
	ptr->next->next->data = 4;
	ptr->next->next->next = NULL;
{
	Node *p = malloc(sizeof(Node));
	p->data = 2;
	p->next = ptr->next;
	ptr->next = p;
}
{	
	Node *p = ptr;
	while(p){
		printf("%d",p->data);
		p = p->next;
	}
}
	return 0;
}

