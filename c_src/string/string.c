#include "myString.h"

void my_strcat(char *des, char *src)
{
    my_strcpy(des = my_strlen(des), src);
}
void my_strcpy(char *des, char *src)
{
    for(int i = 0; src[i] != '\0'; i++)
    {
        des[i] = src[i]
    }
}
int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){
        if (s1[i] != s2[i]){
            return -1;
        }
    }

    return 0;ff
}
int my_strlen(char *s1)
{
    int i =0;
    for(i = 0; s1[i] != '\0'; i++)
    {
        
    }
    return i;
}