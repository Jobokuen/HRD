#include<stdio.h>
int cal(char calculator[],int size);

int main(void){
    int answer;
    unsigned char text[] = {0};
    while (1)
    {
        printf("?");
        scanf("%s",text);
        int num;
        num = sizeof(text)/sizeof(text[0]);
        answer = cal(text[],num);
    }
    

    return 0;
}
int cal(char calculator[],int size){
    int result;
    char front[] = {0};
    char back[] = {0};


    for(int i = 0 ; i < size ; ++i){
        
        if( (calculator[i] == '+') || (calculator[i] == '-') || (calculator[i] == '/') || (calculator[i] == '%')){
            front[i] = {0};
            for (int j = 0; j < i; j++)         // 계산기 전
            {
                calculator[j] = front[j];
            }
            back[i]= {0};
            for (int j = i; i < size; j++)      // 계산기 후
            {
                calculator[j] = front[j];
            }
            break;
        }
    }

    result = front + back;

    return result;
}