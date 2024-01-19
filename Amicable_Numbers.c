#include<stdio.h>
int main()
{
    int a,b,m,n,i,sa=0,sb=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a && i<b;i++)
    {
        if(a%i==0)
        {
            sa=sa+i;
        }
        if(b%i==0)
        {
            sb=sb+i;
        }
    }
    if(sa==b && sb==a)
    {
        printf("Amicable");
    }
    else 
    {
        printf("Not Amicable");
    }
}