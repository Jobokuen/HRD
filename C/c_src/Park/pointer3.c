#include<stdio.h>

int main(void)
{
	int a = 0x12345678;
	char *p;
	p =(char *) &a;
	
	printf("*p : %x\n",*p);
	return 0;
}
