#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c],i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int a,se,flag;
    scanf("%d",&se);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            a=arr[i][j];
            if(se==a)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}