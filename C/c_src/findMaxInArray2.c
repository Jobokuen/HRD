#include<stdio.h>

int findMaxInArray(const int *pArray,int size)
{
	int max = pArray[0];
	for(int i = 1; i<size; ++i){
		if( max < pArray[i]){
			max = pArray[i];
		}
	}
	return max;
}



int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 30, 70, 100, 30, 60};
	
	int max;
	max = findMaxInArray(nums, 10);
	
	printf("max: %d\n",max);
	return 0;
}

	
