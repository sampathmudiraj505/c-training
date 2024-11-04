#include<stdio.h>
int main()
{
    int n,rem,rev=0,org;
    scanf("%d",&n);
    org=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%d",rev);
    if(org==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

}