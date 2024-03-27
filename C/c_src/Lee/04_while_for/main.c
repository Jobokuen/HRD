// 1부터 10까지에 합_while
// 시작값 입력 > 10
// 끝값 입력 > 20
// 출력 10~20까지에 합은 165 입니다.
#include<stdio.h>


int main(void){

    int num = 0;
    int count;
    int countEnd;
    int tmp;
    printf("start number: ");
    scanf("%d",&count);
    printf("end number: ");
    scanf("%d",&countEnd);
    tmp = count;

    while (tmp < countEnd + 1)
    {
        num = num + tmp;
        ++tmp;
    }

    printf("%d부터 %d까지의 합은 %d입니다.\n",count, countEnd, num);
}



