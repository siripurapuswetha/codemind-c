#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a=x/60;
    int b=x%60;
    printf("%d Hour(s) %d Minute(s)",a,b);
}