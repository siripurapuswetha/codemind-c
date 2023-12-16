#include<stdio.h>
int main()
{
    int r,c,rowsum=0;
    scanf("%d%d",&r,&c);
    int i,j,a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        rowsum=0;
        for(j=0;j<c;j++)
        {
           rowsum=rowsum+a[i][j];
        }
        printf("%d ",rowsum);
    }
}