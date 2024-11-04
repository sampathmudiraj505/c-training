#include<stdio.h>
int main()
{
    int n,m,O;
    scanf("%d""%d""%d",&n,&m,&O);
    int arr[n][m][O];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           for(int k=0;k<O;k++)
           {
             scanf("%d",&arr[i][j][k]);
           }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           for(int k=0;k<O;k++)
           {
             printf("%d ",arr[i][j][k]);
           }
        }
    }
}