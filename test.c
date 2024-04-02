#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c) {
    int answer = 0;
    if(a == b && a == c){
        answer = (a + b + c) * ((a*a)+(b*b)+(c*c)) * ((a*a*a) + (b*b*b) + (c*c*c));
    }else if (a == b || a == c || b == c)
    {
        answer = (a+b+c)*((a*a)+(b*b)+(c*c));
    }else{
        answer = a + b + c;
    }
    
    return answer;
}

int main(void){
    int point = 0;
    point = solution(5,3,3);
    printf("%d\n",point);
    return 0;
}