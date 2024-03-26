#include<stdio.h>

int Solar2luar(int yy,int mm,int dd)
{
	int LUyy, LUmm, LUdd ;
	LUyy = (yy-4)%60+36;
	LUmm = (mm+9)%12+1;
	LUdd = dd;

	printf("%dyear, %dmouth, %dday\n",LUyy,LUmm,LUdd);

	return Solar2luar ;
}

int main(void)
{
	int yy,dd,mm;
	scanf("%d %d %d",&yy,&mm,&dd);
	
	int Solar2luar;

	return 0;
}
