#ifdef STACK_H
#defien STACK_H

struct stack
{
    int array[100];
    int tos;
};

void push(struct stack *ps, int data);
int pop(struct stack *ps);
void initstack(struct stack *ps);

#endif