#include<stdio.h>
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    int sum[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&sum[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+sum[i];
        }
    }
    printf("%d",s);
}