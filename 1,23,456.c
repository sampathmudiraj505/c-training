#include <stdio.h>

int main()
{
    int n=4,i,s=0,j;
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<i+1;j++)
         {
              s=s+1;
             printf("%d",s);
             
          }
       printf("\n");
         
    }return 0;
}