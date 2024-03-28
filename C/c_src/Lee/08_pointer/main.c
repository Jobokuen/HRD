#include<stdio.h>
int main(void){
    int a;
    int *pa;
    pa = &a;
    *pa = 10;
    printf("%ld",sizeof(pa));
    printf("pa: %d\n",*pa);
    printf("a: %d\n",a);
    return 0;
}