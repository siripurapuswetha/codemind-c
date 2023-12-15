#include<stdio.h>
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    int even_sum[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&even_sum[i]);
    }
    for(i=0;i<n;i++)
    {
        if(even_sum[i]%2==0)
        {
            s=s+even_sum[i];
        }
    }
    printf("%d",s);
}