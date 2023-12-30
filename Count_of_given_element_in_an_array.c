#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,z,c;
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        a=arr[i];
        if(z==a)
        {
            c++;
        }
    }
    printf("%d",c);
}