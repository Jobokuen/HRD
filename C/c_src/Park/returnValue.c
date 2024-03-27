#include<stdio.h>

int f1(void)
{
	return 100;
}

void f2(int *pResult)
{
	*pResult = 100;				// 인자를 통해서 전달
}

int main(void)
{
	// int re = f1();
	int re;
	f2(&re);					// 유사 scanf();
	
	printf("re: %d\n",re);
	return 0;
}
// c언어에서 lib함수들은 코드 확인
// 상태코드는  return
// 실행결과는 인자를 통해서 결과값
