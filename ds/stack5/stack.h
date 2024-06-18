#ifndef STACK_H
#define STACK_H


typedef struct stack
{
	void *pArr;
	int eleSize;
	int tos;
}Stack ;

void push(Stack *ps, const void *pData, int eleSize);
void pop(Stack *ps, void *pData);

void initStack(Stack *ps, int size);
void cleanupStack(Stack *ps);

#endif
