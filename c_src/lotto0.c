#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
	srand(time(NULL));
	int lotto[7] ;

	for(int 1 =0; i<7;){
		lotto[i] = rand() % 45 +1;
	
		int j;
		for(j = 0; j<i;++j){
			if(lotto[i] == lotto[j]){
				break;
			}
		}
	}
	
	return 0;
}
