#include <stdio.h>
#include "stack.h"

int re = f();

int f(void){
	return 0;
}

int re;
f(&re);

void f(int *p)
{
	*p = 100;
}


int main(void){

    Stack s1, s2;
    
    initStack(&s1, 10);
    initStack(&s2, 100);
    // s1.tos = 0;
    // s2.tos = 0;


    push(&s1, 100);
    push(&s1, 200);
    push(&s1, 300);

	int re;
	pop(&s1, &re); printf("1st pop() : %d\n",re);
	pop(&s1, &re); printf("1st pop() : %d\n",re);
	pop(&s1, &re); printf("1st pop() : %d\n",re);

    push(&s2, 100);
    push(&s2, 200);
    push(&s2, 300);

	pop(&s2, &re); printf("1st pop() : %d\n",re);
	pop(&s2, &re); printf("1st pop() : %d\n",re);
	pop(&s2, &re); printf("1st pop() : %d\n",re);


	cleanupStack(&s1);
	cleanupStack(&s2);
    return 0;
}

