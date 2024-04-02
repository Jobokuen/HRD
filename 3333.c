#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int main(void){
    int num[1000] = {1,2,3,4,5};
    int temp[1000] = {0};
    for (int i = 0; i < 5; i++)
    {
        temp[i] = num[4-i];
        printf("%d\n",temp[i]);
    }

    return 0;
}