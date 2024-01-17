#include<stdio.h>
int main()
{
    int i,n,sum=0,avg;
    scanf("%d",&n);
    int a[n],c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=avg)
        {
           c++;
        }
    }
    printf("%d",c);
}