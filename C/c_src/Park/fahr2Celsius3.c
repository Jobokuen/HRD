#include<stdio.h>
int main(void)
{
	int fahr = 100;
	int celsius = (fahr-32)*5/9;
	int celsius_right = (fahr-32)*5000/9000*100-(celsius*100);
	
	printf("fath: %d ---> celsius:%d.%d\n",fahr,celsius,celsius_right);
	return 0;
 }
