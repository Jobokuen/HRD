#include<stdio.h>

int main(void){
    10+20;

    printf("----------printf-----------------\n");
    printf("%5d\n",10);
    printf("%03d\n",10); 
    printf("%d와 %d의 합은 %d입니다.\n",1,2,3);
    printf("\n\n----------float-----------------\n");
    // a : 출력 전체 자리수 표현(소수점 포함)
    // b : 소수점 자리수 표현
    printf("%6.2f\n",3.45);
    printf("%6.3f\n",10.46);

    
    printf("\n\n----------2/8/16진수-------------\n");
    printf("%0o\n",12);
    printf("%0x\n",12);
    printf("%0X\n",12);

    printf("\n\n----------아스키코드---------------\n");
    char ch = 'A';
    char *str = "A";

    printf("%c\n", ch);
    printf("%s\n", str);


    return 0;
}



