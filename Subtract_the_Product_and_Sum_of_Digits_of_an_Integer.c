#include<stdio.h>
int main()
{
    int i,n,m,p=1,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%10;
        p=p*m;
        s=s+m;
        n=n/10;
    }
    printf("%d",p-s);
    
}