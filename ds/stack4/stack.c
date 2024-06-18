#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void push(Stack *ps, int data)
{
	assert(ps->tos != ps
    ps->pArr[ps->tos] = data;
    ps->tos++;
}

void pop(Stack *ps, int *pData){
	assert(ps->tos !=0);
	
	--ps->tos;
	*pData = ps->pArr[ps->tos];
}

void initStack(Stack *ps, int size){
    ps->pArr = malloc(sizeof(int)*size);
    ps->size = size;
    ps->tos = 0;
}

void cleanupStack(Stack *ps){
	free(ps->pArr);
}
