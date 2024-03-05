#include<stdio.h>

int main(void)
{
	int a;
	int *pa;
	int **ppa;
	
	a = 100;
	pa = &a;
	ppa = &pa;
	
	printf("a: %d\n",a);
	return 0;

}
