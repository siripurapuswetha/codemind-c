#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    if(sp<cp)
    {
        printf("Loss");
    }
    else if(cp<sp)
    {
        printf("Profit");
    }
    else
    {
        printf("No Profit and No Loss");
    }
}