#include <stdio.h>
#include "stack.h"

// struct stack             // 원하는 자료를 변수나 배열로 찍어내고 싶을 때
// {
//     int array[100];
//     int tos;
// };

int main(void){

    struct stack s1, s2;
    initstack(&s1);
    initstack(&s2);
    // s1.tos = 0;
    // s2.tos = 0;


    push(&s1, 100);
    push(&s1, 200);
    push(&s1, 300);

    printf("1st pop() : %d\n",pop(&s1));
    printf("2st pop() : %d\n",pop(&s1));
    printf("3st pop() : %d\n",pop(&s1));

    push(&s2, 100);
    push(&s2, 200);
    push(&s2, 300);

    printf("1st pop() : %d\n",pop(&s2));
    printf("2st pop() : %d\n",pop(&s2));
    printf("3st pop() : %d\n",pop(&s2));

    return 0;
}

