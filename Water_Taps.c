#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int res=x*y/(x+y);
    printf("%d",res);
}