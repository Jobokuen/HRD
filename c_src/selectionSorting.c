#include<stdio.h>

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 30, 70, 100, 30, 60};
	int min ;
	// selection sorting
	
	for(int i=0; i<10; ++i){
		for(int j=i; j<10; ++j){
			if (nums[i] > nums[j]){
				//swap
				int tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
			}
		}
	}


	for(int i=0; i<10; ++i){		
		printf("%d  ",nums[i]);
	}
	printf("\n");
	return 0;
}
