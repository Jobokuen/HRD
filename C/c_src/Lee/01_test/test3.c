#include<stdio.h>

int main(void){
    int hour, min, sec;
    double time =3.76;
    int temp;

    hour = (int)time;
    temp = time - hour;
    min = 3600* temp / 60;
    sec = 3600 * temp % 60;
    


    printf("%d:%d:%d\n",hour,min,sec);
    return 0;
}