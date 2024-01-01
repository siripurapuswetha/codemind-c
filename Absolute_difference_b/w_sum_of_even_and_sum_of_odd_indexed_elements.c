#include<stdio.h>
int main()
{
    int n,os=0,es=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            es=es+arr[i];
        }
        else if(i%2==1)
        {
            os=os+arr[i];
        }
    }
    if(es>os)
    {
        printf("%d",es-os);
    }
    else if(os>es)
    {
        printf("%d",os-es);
    }
    else
    {
        printf("0");
    }
}