#include<stdio.h>
#include<conio.h>
int main()
{
     int num,fac=1,i=0;
    printf("Enter the actorial number:");
    scanf("%d",&num);
    if (num!=1)
    {
      for(int i=1;i<=num;i+1)
      {
       fac=i*fac;
      }
    printf("The fatorial is %d",fac);
    }
     else
    {
    printf("The fact is 1");
    }
    return 0;
}