#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
    if(argc !=3)
        printf("Using %s <op1> <op2> \n\r",argv[0]);
    
    // printf("argc = %d\n\r", argc);
    // printf("argv[0] = %s\n\r", argv[0]);
    // printf("argv[1] = %s\n\r", argv[1]);
    printf("%d+%d = %d\n\r",atoi(argv[1]),atoi(argv[2]),atoi(argv[1])+atoi(argv[2]));


    // int numArray[10] = {0};
    // numArray[0] = atoi(argv[1]);
    // numArray[1] = atoi(argv[2]);
    // printf("%d\n\r",numArray[0] + numArray[1]);

    return 0;
}