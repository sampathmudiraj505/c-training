#include<stdio.h>
int main()
{
    char string[]="vivek \0vvanacharla";
    printf("%s",string);
    for(int i=0;string[i]!='\0';i++)
    {
        printf("%c",string[i]);
    }
}