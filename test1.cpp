#include<iostream>

int main(void){
    int count = 0 ;
    scanf("%d",&count);
    for (int i = 0; i < count ; i++)
    {
        for (int j = count - i; j > 0; j--)
        {
            
        }
        
        for (int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}