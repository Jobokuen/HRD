#include<stdio.h>

void star_display(int a, int b);

int main(void){
    int row = 5, col = 5;
    star_display(row, col);
    return 0;
}

void star_display(int a, int b){
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b ; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
}