#include<stdio.h>

// #define COUNT 5     // 동적할당에서 문제가 될 수 있다.

// int main(void){
//     int score[COUNT];
//     int total = 0;
//     double avg;
//     // num = sizeof(score)/sizeof(score[0])
//     for (int i = 0; i < COUNT; i++)
//     {
//         printf("what is %d's score?: ",i+1);
//         scanf("%d",&score[i]);
//     }
    
//     for (int i = 0; i < COUNT; i++)
//     {
//         total = total + score[i];
//     }
//     avg = (double)total / COUNT;

//     for (int i = 0; i < COUNT; i++)
//     {
//         printf("num: %d\tscore: %d\taddress: %p\n",i+1 ,score[i],score+i);
//     }
//     printf("avg: %.2f\n",avg);

//     return 0;
// }
// int main(){
//     // char str[] = {'a','p','p','l','e','j','a','m'};
//     char str[80] = "applejam";
//     // unsigned long num;
//     // num = sizeof(str)/sizeof(str[0]); // sizeof > unsigned long type
//     // printf("%ld\n",num);
// }

int main(void){
    char str[5];
    str[0] = 'O';
    str[1] = 'K';
    printf("%s\n",str);
    return 0;
}