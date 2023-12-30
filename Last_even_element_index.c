#include<stdio.h>
int main()
{
    int n,index_even;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            index_even=i;
        }
    }
    printf("%d",index_even);
}