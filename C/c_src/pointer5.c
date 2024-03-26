#include<stdio.h>

int add(int a, int b)
{
	return a+b;
}

int stbstract(int a, int b)
{
	return a - b;
}

int main (void)
{
	int(*fp)(int, int);
	
	fp = &add;
	int re = (*fp)(4,3);
	printf("re: %d\n",re);
	
	//fp = &stbstract;
	//re = (*fp)(4,3);
	fp = stbstract;
	re = fp(4,3);
	printf("re: %d\n",re);

	return 0;
}
