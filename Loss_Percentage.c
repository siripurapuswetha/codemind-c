#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    float L=X-Y;
    float lp=(L*100)/X;
    printf("%.2f",lp);
}