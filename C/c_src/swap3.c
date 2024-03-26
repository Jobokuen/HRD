#include<stdio.h>

int a, b;				// 전역변수 모든 함수에 접근할 수 있는 변수
						// 지역변수 블럭(함수) 안에서 사용하는 변수
void swap()				// 인자 전달할 필요 없음.
{
	int tmp = a;
	a = b;
	b = tmp;

}

int main(void)ㄴ
{
	
	a = 100;
	b = 200;
	
	printf("a: %d\tb: %d\n",a,b);
	
	swap();
	printf("a: %d\tb: %d\n",a,b);
	
	return 0;
}
