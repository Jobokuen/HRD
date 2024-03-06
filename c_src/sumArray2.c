#include<stdio.h>

int sumArray(const int *pArray, int size)	// 배열_포인터 첫번째
		// const > 포인터를 사용하여 읽기전용으로 사용할 때.
// int sumArray(int pArr[],int size) // pArr[] -> 포인터
// int sumaArray(int pArr[],int size)
// 인터넷 상에서 위 2개와 같이 하는 경우가 있음
// 실행은 되나 틀린 표현임으로 주의바람.
{
	int sum = 0;
	for (int i = 0; i < size; ++i){
		sum = sum + pArray[i];		// *(pArray + 1)
	}
	return sum;
}




int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
	
	int sum;
	sum = sumArray(nums, 10);		// sum = sumArray[&nums[0]]
//	sum = sumArray(nums +5, 5);		// &nums[5]부터 5개-> [5]~[9]
	

	printf("sum: %d\n",sum);
	return 0;
}

// sumArray의 한계가 가진다. = 사이즈가 10으로
// 사이즈가 변하는 것 == 변수
// 사이즈에 대한 변수값에 변수를 추가함.
