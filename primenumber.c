#include<stdio.h>
int main()
{
    int n,a=0,i;
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            a=a+1;
        }
    }
    if(a==0)
    {
        printf("Prime");
    }
    else 
    {
        printf("Not prime");
    }
}