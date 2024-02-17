#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    int a,b,c;
    a=x+y;
    b=y+z;
    c=z+x;
    if(w==a || w==b || w==c || w==x || w==y || w==z)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}