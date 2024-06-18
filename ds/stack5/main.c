#include <stdio.h>
#include "stack.h"

int main(void){

    Stack s1, s2;
    
    initStack(&s1, 10, sizeof(int));
    initStack(&s2, 100, sizeof(double));
    
	int i;
	i = 100;	    push(&s1, i, sizeof(int));
	i = 200;	    push(&s1, i, sizeof(int));
	i = 300;	    push(&s1, i, sizeof(int));


	int re;
	pop(&s1, &re, sizeof(int)); printf("1st pop() : %d\n",re);
	pop(&s1, &re, sizeof(int)); printf("2st pop() : %d\n",re);
	pop(&s1, &re, sizeof(int)); printf("3st pop() : %d\n",re);

	double d;
	d = 700;	    push(&s2, d, sizeof(double));
	d = 700;	    push(&s2, d, sizeof(double));
	d = 700;	    push(&s2, d, sizeof(double));

	double re2;
	pop(&s2, &re, sizeof(double)); 		printf("1st pop() : %d\n",re);
	pop(&s2, &re, sizeof(double)); 		printf("2st pop() : %d\n",re);
	pop(&s2, &re, sizeof(double));	 	printf("3st pop() : %d\n",re);


	cleanupStack(&s1);
	cleanupStack(&s2);
    return 0;
}

