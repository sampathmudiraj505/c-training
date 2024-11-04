#include<stdio.h>
void CR(int *c,int *d)
{
    int temp=c;
    c=d;
    d=temp;
}
void main()
{
    int a=8,b=9;
    CR(&a,&b);
    printf("%d %d",a,b);

}