#include<stdio.h>

long long factorial(int base)
{
	long long result = 1;
	for(int i = 1; i <= base; ++i){
		result = result * i;
	}


	return result;
}



int main(void)
{
	for(int i = 1; i <=100; ++i){
		long long result = factorial(i);
		
		printf("%d! = %lld\n", i , result);
	}
	return 0;
}
