#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    fgets(s,10,stdin);
    printf("%lu",strlen(s));
    printf("%d",sizeof(s));
    puts(s);
}