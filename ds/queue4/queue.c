#include "queue.h"
#include <stdio.h>
#include <stdlib.h>


void push(Queue *ps, int data){
	
	ps->pArr[ps->rear] = data;
	++ps->rear;
}

void pop(Queue *ps, int *pData){

	++ps->front;
	*pData = ps->pArr[ps->rear];
}

void initQueue(Queue *ps, int size){
	ps->pArr = malloc(sizeof(int)*size);
	ps->size = size;	
	ps->rear = 0;
	ps->front = 0;

}

void cleanupQueue(Queue *ps){
	free(ps->pArr);       
}
