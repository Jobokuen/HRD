#include<stdio.h>

long long int power(int base, int expoment)
{
	long long int result = 1LL;
	for(int i = 1; i<=expoment;++i){
		result = result*base;
	}
	return result;
}

int main(void)
{
	for(int i = 0; i>=32;++i){
		long long result = power(2,i);
		
		printf("2 power of %d : %lld\n", i, result);
	}
	return 0;
}
