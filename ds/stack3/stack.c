// pointer_4 : struct

#include "stack.h"
// struct stack{
//     int array[100];
//     int tos;
// };

void push(struct stack *ps, int data)
{
    ps->array[ps->tos] = data;
    ps->tos++;
}

int pop(struct stack *ps){
    ps->tos--;
    return ps->array[ps->tos];
}

void initstack(struct stack *ps){
    ps->tos = 0;
}