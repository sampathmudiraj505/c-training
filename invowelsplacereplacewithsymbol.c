#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    int i;
    for(i=0;i<strlen(str);i++)
    {
    if(str[i]=='a' || str[i]=='A' || str[i]=='e'|| str[i]=='E' || str[i]=='i'
       || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
    {
        str[i]='@';
    }
    else if(str[i]==' ')
    {
        str[i]='_';
    }
    }
    printf("%s",str);
}