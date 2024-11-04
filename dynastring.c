#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        fgets(arr[i],m,stdin);
    }
    for(int i=0;i<n;i++)
    {
        puts(arr[i]);
    }
}