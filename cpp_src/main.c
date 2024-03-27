#include <stdio.h>
#define LEN 10

int cal(int a, int b, char sign){
    int answer;
    // switch - case 문 활용 예정
    if(sign == '+') 
        answer= a+b;
    if(sign == '-') 
        answer= a-b;
    if(sign == '*') 
        answer=a*b;
    if(sign == '/') 
        answer=a/b;
    if(sign == '%') 
        answer=a%b;

    return answer;
}


int main(){
    int A;
    int B;
    char sign;
    int an;

    scanf("%d",&A);
    scanf("%c",&sign);
    scanf("%d",&B);
    printf("%d%c%d\n",A,sign,B);
    an = cal(A, B, sign);
    printf("%d",an);
    return 0;
}
    