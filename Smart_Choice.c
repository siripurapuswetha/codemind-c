#include<stdio.h>
int main()
{
    int x,y,a,na,mb,ma,nb;
    scanf("%d%d",&x,&y);
    a=x+y;
    na=500-x*2;
    mb=1000-a*4;
    ma=500-y*4;
    nb=1000-a*2;
    int res=na+mb;
    int sol=ma+nb;
    if(res>=sol)
    {
        printf("%d",res);
    }
    else
    {
        printf("%d",sol);
    }
}