#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    int odd_sum[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&odd_sum[i]);
    }
    for(i=0;i<n;i++)
    {
        if(odd_sum[i]%2==1)
        {
            sum=sum+odd_sum[i];
        }
    }
    printf("%d",sum);
}