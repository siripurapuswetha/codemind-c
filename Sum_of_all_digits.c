#include<stdio.h>
int main()
{
    int i,n,r,ds=0;
    scanf("%d",&n);
    for(i=1;n>0;i++)
    {
       r=n%10;
       n=n/10;
       ds=ds+r;
    }
    printf("%d",ds);
}