#ifndef STACK_H
#define STACK_H

typedef struct queue
{
	int *pArr;
	int size;
	int rear;
	int front;
}Queue ;

void push(Queue *ps, int data);
void pop(Queue *ps, int *pData);

void initQueue(Queue *ps, int size);
void cleanupQueue(Queue *ps);

#endif
