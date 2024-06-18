// pointer_4 : struct
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
// struct stack{
//     int array[100];
//     int tos;
// };

void push(struct stack *ps, int data)
{
	if(ps->tos == ARRAYSIZE){
		print("stack is full\n);
		exit(1);
		}
    ps->array[ps->tos] = data;
    ps->tos++;
}

int pop(struct stack *ps){
	if(empty){
		fprintf(stderr, "stack is empty\n");
		exit(2);
		}

    ps->tos--;
    return ps->array[ps->tos];
}

void initstack(struct stack *ps){
    ps->tos = 0;
}
