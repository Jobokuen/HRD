// 1부터 10까지에 합_while
// 시작값 입력 > 10
// 끝값 입력 > 20
// 출력 10~20까지에 합은 165 입니다.
#include<stdio.h>


// int main(void){

//     int num = 0;
//     int num_1;
//     int num_2;
//     int count;
//     int countEnd;
//     int tmp;
//     printf("start number: ");
//     scanf("%d",&num_1);
//     printf("end number: ");
//     scanf("%d",&num_2);

//     if(num_1 > num_2){
//         count = num_2;
//         countEnd = num_1;
//     }else if (num_1 < num_2)
//     {
//         count = num_1;
//         countEnd = num_2;
//     }
//     tmp = count;

//     for (int i = tmp; i < (countEnd + 1); i++)
//     {
//         num = num + i;
//     }
    

//     printf("%d부터 %d까지의 합은 %d입니다.\n",count, countEnd, num);
// }

// for 문

// int main(void){
//     int start = 1;
//     int end = 10;
//     int sum = 0;

//     for (int i = start; i < end +1 ; i++)
//     {
//         sum = sum + i;
//     }
//     printf("%d",sum);
// }

// 중첩 for문
int main(void){

    
    for (int i = 5; i > 0; --i)
    {
        for (int j = 0 ; j < i ; ++j)
        {
            printf(" ");
        }
        for (int j = 0; j < 6-i ; ++j)
        {
            printf("*");
        }
        
        printf("\n");
    }
    

    return 0;
}

