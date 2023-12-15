#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+num[i];
    }
    printf("%d",sum);
}