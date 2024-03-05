#include<stdio.h>

int main(void)
{

	int a = 100;
	double b = 3.14;
	
	void *p;
	
	p = &a;
	//*p = 200;
	*(int *)p = 200;
	
	
	p = &b;
	*(double *)p= 2.718;


	printf("a: %d\tb: %f\n",a,b);
	return 0;
}
