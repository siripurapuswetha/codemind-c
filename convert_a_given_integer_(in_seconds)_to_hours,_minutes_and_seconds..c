#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int H,M,S;
    H=x/3600;
    M=(x%3600)/60;
    S=x%60;
    printf("H:M:S-%d:%d:%d",H,M,S);
}