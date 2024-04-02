#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void) {
    int numbers[] = {4,8,5,3,1};
    int temp[] = {0};
    int N = 0;
    for(int i = 0 ; i < 5 ; ++i){
        for (int j = 1; j < i; j++)
        {
            temp[N] = numbers[i] * numbers[j];
            printf("%d\n",temp[N]);
            ++N;
        }
            
    }
    int K= 0;
    while ( K == 4)
    {
        if(temp[K] > temp[K+1]){
            int tempa;
            tempa = temp[K];
            temp[K] = temp[K+1];
            temp[K+1] = tempa;
        }
        ++K;
    }
    printf("%d",temp[5]);
    return 0;
}