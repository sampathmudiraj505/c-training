#include<stdio.h>
#include<string.h>
int main()
{
    int n,rem,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum+10;
        n=n/10;
    }
    printf("%d",sum);

}