#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    float a,avg[n],s=0;
    for(i=0;i<n;i++)
    {
       scanf("%f",&avg[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+avg[i];
        a=s/n;
    }
    printf("%.2f",a);
}