#include<stdio.h>
int main()
{
    int n=4,i,s,j;
    for(int i=0;i<n;i++)
    {
        for (int s = 0; s <n-i; s++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }return 0;
}