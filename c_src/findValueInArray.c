#include<stdio.h>

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 30, 70, 100, 30, 60};
	
	int value;
	int i ;
	printf("input value : ");
	scanf("%d", &value);
	
	for (i ; i<10 ; ++i){
		if (value == nums[i]){
			break;
		}/*else{
			//not found
		}*/
	}
		
	if (i != 10){
		printf("%d is found: index : %d\n", value, i); 	//found
	}else{
		printf("%d is not found\n", value);				//not found
	}
	
	printf("value: %d\n",value);
	return 0;
}
