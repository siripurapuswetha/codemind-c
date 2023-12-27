#include<stdio.h>
int main()
{
    int r,c,es=0,os=0;
    scanf("%d%d",&r,&c);
    int i,j,arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]%2==0)
            {
                es=es+arr[i][j];
            }
            else
            {
                os=os+arr[i][j];
            }
        }
    }
    printf("%d %d",es,os);
}