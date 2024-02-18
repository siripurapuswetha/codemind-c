#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,a,sum=0,c=0;
    scanf("%d",&n);
    t=n;
    int tem=n;
    while(tem>0)
    {
      tem=tem/10;
      c=c+1;
    }
    while(n>0)
    {
        a=n%10;
        sum=sum+pow(a,c);
        n=n/10;
        c--;
    }
    if(sum==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}