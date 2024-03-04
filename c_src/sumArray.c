#include<stdio.h>

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 30, 70, 100, 30, 60};
	
	int sum;
	sum = 0;
	for (int i = 0; i < 10;++i){
		sum = sum + nums[i];		// sum += nums[i];
	}

	printf("sum: %d\n",sum);
	return 0;
}
