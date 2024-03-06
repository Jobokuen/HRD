#include<stdio.h>
//#include<stdlib.h>
#include<time.h>
#include"rand.h"
			// function declaration
							// 함수 껍데기만

int main(void)
{
/*	int seed;
	srand(time(NULL), &seed);		// main gkd
	
	int value = rand(&seed);
*/

	for(int i = 1; i<=10;++i){
		int value = my_rand();
		printf("value : %d\n",value);
	}
	return 0;

}

