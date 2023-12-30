#include<stdio.h>
int main()
{
    int n,op;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            op=i;
        }
    }
    printf("%d",op);
}