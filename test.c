#include<stdio.h>
int main(void){
    int A[100] = {0};
    int B[100] = {0};
    int count = 0;
    while (1)
    {
        scanf("%d",A+count);
        scanf("%d",B+count);
        if(A[count] == 0 && B[count] == 0)
        break;
        ++count;
    }
    
    for (int i = 0; i < count; i++)
    {
        int plus = A[i]+B[i];
        printf("%d\n", plus);
    }
    return 0;
}