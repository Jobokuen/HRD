#include <stdio.h>
#include "queue.h"


int main(void){
	Queue s1, s2;
	initQueue(&s1, 100);
	initQueue(&s2, 10);

	push(&s1, 100);
	push(&s1, 200);

	int re;
	pop(&s1, re);	printf("1st pop(): %d\n", re);

	push(&s1, 300);

	pop(&s1, re);	printf("2st pop(): %d\n", re);
	pop(&s1, re);	printf("3st pop(): %d\n", re);


	push(&s2, 700);
	push(&s2, 800);

	
	pop(&s2, re);	printf("1st pop(): %d\n", re);

	push(&s2, 900);

	pop(&s2, re);	printf("2st pop(): %d\n", re);
	pop(&s2, re);	printf("3st pop(): %d\n", re);
	
	cleanupQueue(&s1);
	cleanupQueue(&s2);

	return 0;
}
