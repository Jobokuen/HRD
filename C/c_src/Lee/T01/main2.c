#include<stdio.h>
// int main(void){
//     char ch;


//     printf("문자 입력 : ");
//     scanf("%c",&ch);
//     printf("%c문자의 아스키 코드 값은 %d입니다.\n",ch,ch);
//     return 0 ;

// }

// int main(void){
//     int res;
//     short sh;
//     long lo;
//     res = (sizeof(sh) > sizeof(lo)) ? 1 : 0;

//     if(res == 1){
//         printf("short\n");
//     } else
//         printf("long\n");

//     return 0;
// }

// int main(void){
//     int seats = 70;
//     int audience = 65;
//     double rate;

//     rate = (double) audience / seats * 100;
//     printf("입장률 : %.1lf%%",rate);

//     return 0;
// }

// int main(void){
//     int hour, min, sec;
//     double time = 3.76;
//     double temp;

//     hour = (int)time;
//     temp = time - hour;
//     double temp_min = temp * 60;
//     min = (int)temp_min;
//     temp = temp_min-min;
//     double temp_sec = temp * 60;
//     sec = (int)temp_sec;
      
//     printf("%.2lf시간은 %d시간 %d분 %d초 입니다.",time, hour, min, sec);
//     return 0;
// }

// int main(void) {
//     int hour, min, sec;
//     double time = 3.76; // 주어진 시간 (소수점 형태로 표현된 시간)
//     int total_seconds = (int)(time * 3600); // 총 초 단위로 변환

//     // 시간, 분, 초로 변환
//     hour = total_seconds / 3600;
//     min = (total_seconds % 3600) / 60;
//     sec = total_seconds % 60;

//     // 변환된 시간 출력
//     printf("%.2lf시간은 %d시간 %d분 %d초 입니다.", time, hour, min, sec);
    
//     return 0;
// }

// int main(void){
//     int age = 25, chest = 95;
//     char size;
//     if(age < 20){
//         if(chest < 85) size = 'S';
//         else if(chest <95) size = 'M';
//         else size = 'L';
//     }else{
//         if(chest < 90) size = 'S';
//         else if(chest <100) size = 'M';
//         else size = 'L';
//     }
//     printf("사이즈는 %c입니다.\n",size);

// }

// 3의 배수와 7의배수일때는 합산을 하지 말고 나머지 값을 더하라
// 1~ 100
// int main(void){
//     int sum = 0;
//     for (int i = 1; i < 101; i++){
//         if((i % 3 != 0) && (i % 7 != 0))
//         {continue;}
//         sum = sum + i;
//     }
//     printf("%d",sum);
    
// }

// int main(void){
//     for (int i = 1; i < 10; i++)
//     {
//         for (int j = 2; j < 10; j++)
//         {
//             printf("%d x %d = %d\t",j,i,j*i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// double centi_to_meter(int centi);

// int main(void){
//     double res;

//     res = centi_to_meter(187);
//     printf("%.2lfm\n",res);
//     return 0;
// }

// double centi_to_meter(int centi){
//     double result;
//     result = (double)centi / 100;

//     return result;
// }
void sum(int num);

int main(void){
    int answer;

    sum(10);
    sum(100);

    return 0;
}

void sum(int num){
    int result= 0;
    for (int i = 1; i < num+1; i++)
    {
        result += i;
    }
    printf("1부터 %d까지의 합은 %d입니다.\n",num, result);
}