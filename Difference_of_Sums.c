#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,ss=0,diff;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ss=ss+i;
        sum=sum+pow(i,2);
    }
    diff=pow(ss,2)-sum;
    printf("%d",diff);
    
    
}