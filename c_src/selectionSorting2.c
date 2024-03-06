#include<stdio.h>

void sorting(int *pArr, int size)
{
	int min ;
	for(int i=0; i<10; ++i){
		for(int j=i; j<10; ++j){
			if (pArr[i] > pArr[j]){
				int tmp = pArr[i];
				pArr[i] = pArr[j];
				pArr[j] = tmp;
			}
		}
	}
}



int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 30, 70, 100, 80, 60};

	sorting(nums,10);

	for(int i=0; i<10; ++i){		
		printf("%d  ",nums[i]);
	}
	printf("\n");
	return 0;
}
