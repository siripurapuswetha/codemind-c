#include<stdio.h>
int main()
{
    int r,es=0,os=0;
    scanf("%d",&r);
    int arr[r],i;
    for(i=0;i<r;i++)
    {
        {
            scanf("%d",&arr[i]);
        }
    }
    for(i=0;i<r;i++)
        {
            if(arr[i]%2==0)
            {
                es=es+arr[i];
            }
            else
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