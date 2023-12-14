#include<stdio.h>
int self(int);
int main()
{
    int i,a,b,flag,t,r;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        flag=0;
        t=i;
        while(t!=0)
        {
            r=t%10;
            if(r==0 || i%r!=0)
            {
                flag=1;
            }
            t=t/10;
        }
        if(flag==0)
        {
           printf("%d ",i);
        }
    }
}