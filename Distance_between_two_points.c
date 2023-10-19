#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,a,b;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    a=(x2-x1);
    b=(y2-y1);
    float res=sqrt((a*a)+(b*b));
    printf("%.4f",res);
}