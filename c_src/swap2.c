#include<stdio.h>
/*
void swap(int a, int b)				//swap 함수 제작
{									// 값이 없으니깐 void 반환
	int tmp = a;
	a = b;
	b = tmp;
	
	//return ;						// 결과값이 없을 때 return만 사용
									// 혹은 생략도 가능
}
*/

void swap(int *pa, int *pb)			// 변수값이 아닌 주소값을 복사.
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;


}
int main(void)
{
	int a, b;
	a = 100;
	b = 200;
	
	printf("a: %d\tb: %d\n",a,b);
	
	swap(&a, &b);						// main과 swap의 변수는 다르다.
	
	printf("a: %d\tb: %d\n",a,b);
	
	return 0;
}
