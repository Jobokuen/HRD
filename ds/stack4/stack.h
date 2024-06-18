#ifndef STACK_H
#define STACK_H
// #define ARRAYSIZE 100

typedef struct stack
{
//	int array[ARRAYSIZE];
	int *phrr;
	int size;
	int tos;
}Stack ;

void push(Stack *ps, int data);
void pop)Stack *ps, int *pData);

void initStack(Stack *ps, int size);
void cleanupStack(Stack *ps);

#endif
