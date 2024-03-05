#include<stdio.h>

char getScoreGrade(int score)
{
	char grades[] = {'F','F','F','F','F','F','D','C','B','A'};	

	char grade= grades[score/10];

	return grade;
}

int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d", &score);
	
	char grade;
	printf("score : %d --- grade : %c\n",score,grade);


	return 0;
}
