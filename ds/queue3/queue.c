#include "queue.h"
#include <stdio.h>
#include <stdlib.h>


void push(struct stack *ps, int data){
	ps->queue[ps->rear] = data;
	++ps->rear;
}

int pop(struct stack *ps){
	int i = ps->front;
	++ps->front;

	return ps->queue[i];
}

void initstack(struct stack *ps){
	ps->rear = 0;
	ps->front = 0;	
}

