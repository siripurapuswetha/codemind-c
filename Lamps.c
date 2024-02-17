#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    int r=k*x;
    int bc=(n-k)*y;
    int rc=(n-k)*x;
    if(bc<=rc)
    {
        printf("%d",r+bc);
    }
    else
    {
        printf("%d",r+rc);
    }
}