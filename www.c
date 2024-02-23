#include <stdio.h>
int main(void)
{

	int pthour;
	int ptmin ;
	int ethour =5 ;
	int etmin =30 ;
	int lefthour;
	int leftmin ;
	
	lefthour = ethour - pthour;
	leftmin = etmin - ptmin;
	
	scanf("%dhour?", pthour);
	scanf("%dmin?", ptmin);
	
	printf("left %d:%d time", lefthour, leftmin);
	
	return 0;
}
