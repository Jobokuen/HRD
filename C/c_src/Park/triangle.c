#include<stdio.h>
int main(void)
{
	int width;
	int height;
	double area;
	
	scanf("%d", &width);
	scanf("%d", &height);
	
	area = width * height / 2;
	
	printf("area: %.1f\n", area);

	return 0;
}
