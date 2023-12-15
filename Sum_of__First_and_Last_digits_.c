#include<stdio.h>
int main()
{
    int n,m,r;
    scanf("%d",&n);
    m=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    r=m+n;
    printf("%d",r);
}