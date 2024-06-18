#include <stdio.h>
#include "queue.h"


int main(void){
    struct stack s1, s2;
    initstack(&s1);
    initstack(&s2);

	push(&s1, 100);
	push(&s1, 200);
	
	printf("1st pop(): %d\n", pop(&s1));
	
	push(&s1, 300);
	
	printf("2st pop(): %d\n", pop(&s1));
	printf("3st pop(): %d\n", pop(&s1));


	push(&s2, 700);
	push(&s2, 800);
	
	printf("1st pop(): %d\n", pop(&s2));
	
	push(&s2, 900);
	
	printf("2st pop(): %d\n", pop(&s2));
	printf("3st pop(): %d\n", pop(&s2));

	return 0;
}
