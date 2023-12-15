#include<stdio.h>
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    int odd_sum_position[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&odd_sum_position[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
            s=s+odd_sum_position[i];
        }
    }
    printf("%d",s);
}