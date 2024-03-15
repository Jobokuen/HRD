#include<stdio.h>
//#include<string.h>
#include"myString.h"


int main(void){

    char str[100];
    char str2[100];

//-------------------------- strsat----------------------
    my_strcat(str,"abc");                      // append
    printf("%s\n",str);
    my_strcat(str,"def");
    printf("%s\n",str);

//-------------------------- strcmp----------------------
    printf("%d\n",my_strcmp("abc","def"));     // compare
    printf("%d\n",my_strcmp("abc","abc"));

//-------------------------- strcpy----------------------
    my_strcpy(str2, str);                      // copy
    if(my_strcmp(str, str2) == 0){
        printf("result of strcmp is same\n");
    }else{
        printf("result of strcmp is different\n");
    }

//-------------------------- strlen----------------------
    printf("%d\n",my_strlen(str));            //  return length
    printf("%d\n",my_strlen(str2));
    my_strcat(str, str2);
    printf("%d\n",my_strlen(str));
    
    return 0;


}