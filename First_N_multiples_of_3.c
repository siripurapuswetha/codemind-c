#include<stdio.h>
int main()
{
    int i,n,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       a=3*i;
       if(a%3==0)
       {
           printf("%d ",a);
       }
    }
    
}