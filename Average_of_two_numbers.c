#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    float res=(num1+num2)*1.0/2;
    printf("Average of %d and %d is: %.2f",num1,num2,res);
}