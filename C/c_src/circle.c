#include<stdio.h>
#define PI 3.14
int main(void)
{
	int radisu;
	double area;
	
	scanf("%d", &radisu);
	
	area = radisu * radisu * PI;
	
	printf("squre: %.1f\n", area);

	return 0;
}
