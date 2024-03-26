#include<stdio.h>
int main(void)
{
	int korea, math, english;
	double sum, average;
	
	scanf("%d %d %d", &korea, &math, &english);
			
	sum = korea + math+ english ;
	average = sum/3.0./;
	
	printf("sum: %.1lf\taverage: %.2f\n", sum, average);

	return 0;
}
