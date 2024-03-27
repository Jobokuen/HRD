#include<stdio.h>

int findValueInArray(const int *pArr, int size, int value)
{
	int i;
	for (i ; i<10 ; ++i){
		if (value == pArr[i]){
			break;
		}
	}
	
	
	int index = (i<size) ? i :-1;

	return index;
	
	// return (i<size) ? i :-1;   임시변수가 만들어져서 사용가능함.
}

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 30, 70, 100, 30, 60};
	
	int value;
	printf("input value : ");
	scanf("%d", &value);
	
	int index = findValueInArray(nums,10,value);

	if (index != 10){
		printf("%d is found: index : %d\n", value, index); 	//found
	}else {
		printf("%d is not found\n", value);				//not found
	}
	
	printf("value: %d\n",value);
	return 0;
}
