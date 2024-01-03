#include<stdio.h>
int main()
{
    int a,b,m,i,t,rev=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        rev=0;
        t=i;
        while(t>0)
        {
            m=t%10;
            rev=rev*10+m;
            t=t/10;
        }
        if(i==rev)
    {
        printf("%d ",rev);
    }
    }
}