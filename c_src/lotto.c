#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
	srand(time(NULL));
	int lotto[7] ;
	
	for(int i = 0; i<7; ++i){
		lotto[i] = rand() % 45 + 1;
		for(int j = 0; j<7; ++j){
			if(i!=j && lotto[i] == lotto[j])
			lotto[i] = rand() % 45 + 1;
		}
		printf("%d\t",lotto[i]);
	}
	printf("\n");
	
/*	for(int 1 =0; i<7;){
		lotto[i] = rand() % 45 +1;
	
		int j;
		for(j = 0; j<i;++j){
			if(lotto[i] == lotto[j]){
				break;
			}
		}
	}
*/
	
	int match = 0;
	int nums[6] = {0};
	int bouns[1] = {0};

	printf("input 6 number ");
	
	for(int i = 0; i<6; ++i){
		scanf("%d",&nums[i]);}
		
	printf("\ninput bouns number ");
	scanf("%d",&bouns[1]);


	for(int i = 0; i<6; ++i){
		for(int j = i; j<6; ++j){
			if(lotto[i] == nums[j]){
				++match;
			}
		}
	}



	if(match ==6){
		printf("first");
	}else if(match == 5){
		if(lotto[7] == bouns[0]){
			printf("second");
		}else{
			printf("third");}
	}	else if(match==4){
		printf("fourth");
	}else if(match==3){
		printf("fifth");
	}else{
		printf("nope");}

	printf("\nmatch: %d\n",match);
	return 0;
}
