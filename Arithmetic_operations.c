#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum,diff,pro,quo,rem;
    sum=a+b;
    diff=a-b;
    pro=a*b;
    quo=a/b;
    rem=a%b;
    printf("Sum:%d
Difference:%d
Product:%d
Quotient:%d
Remainder:%d
",sum,diff,pro,quo,rem);
}