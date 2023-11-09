#include<stdio.h>
int main()
{
    int i,n,m,sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum*i;
    }
    printf("%d",sum);
}