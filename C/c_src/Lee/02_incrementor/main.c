#include<stdio.h>
/*
int main(void){

    int a = 5, b = 5;
    int pre, post;

    pre = (++a) * 3;
    post = (b++) * 3;

    printf("pre: %d\n",pre);
    printf("post: %d\n",post);
    printf("a: %d\n",a);
    printf("b: %d\n",b);

    //for문에서의 증강 연산자
    for(int i = 0 ; i < count ; ++i){
        printf("i: %d", i);
    }

    for(int i = 0 ; i < count ; i++){
        printf("i: %d", i);
    }

    printf("%d",(int)10.7);
    printf("%d",(int)10.2);
    return 0;
}
*/
int main(void){

    int a = 1;
    int b = ++a;

    printf("a: %d\n",a);
    printf("b: %d\n",b);

    int c = 1;
    int d = c++;

    printf("c: %d\n",c);
    printf("d: %d\n",d);
    return 0;
}


