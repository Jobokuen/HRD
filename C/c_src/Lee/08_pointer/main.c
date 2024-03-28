#include<stdio.h>
// int main(void){
//     int a;
//     char *pa;
//     pa = &a;
//     *pa = 10;
//     printf("%ld",sizeof(pa));
//     printf("pa: %d\n",*pa);
//     printf("a: %d\n",a);
//     return 0;
// }   

void swap(int *pa, int *pb);

int main(void){
    int a = 10, b = 15;
    swap(&a, &b);
    printf("a: %d\tb: %d",a,b);
}

void swap(int *pa, int *pb){
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}