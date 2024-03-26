#include<stdio.h>
int main(void)
{
	int celsius ;
	double fath ;
	
	scanf("%d", &celsius);
	
	fath = celsius*9.0/5.0 + 32; 
	
	printf("celsius: %d ---> faht: %.1f\n", celsius, fath);

	return 0;
}
