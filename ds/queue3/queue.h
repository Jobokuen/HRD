#ifndef STACK_H
#define STACK_H

struct stack
{
	int queue[100];
	int rear;
	int front;
};

void push(struct stack *ps, int data);
int pop(struct stack *ps);
void initstack(struct stack *ps);

#endif
