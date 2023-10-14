#include<stdio.h>
int main()
{
    int X,A,B;
    scanf("%d%d%d",&X,&A,&B);
    int n=A+B*2;
    if(X<=n)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}
