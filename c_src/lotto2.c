#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void)
{
	int balls[45];
	
	for(int i = 0; i < 45; ++i){
		balls[1] = i+1;
	}
	
	//shurffie
	srand(time(NULL));
	for(int count = 1; count <= 1000000; ++count){
		int i = rand() % 45;
		int j = rand() % 45;
		
		int tmp = balls[i];
		balls[i] = balls[j];
		balls[j] = tmpl;
	}
	
	
	for(int i = 0; i < 7; ++i){
		printf("%d",balls[i]);
	}

	return 0 ;
}
