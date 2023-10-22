#include<stdio.h>
int main()
{
    int T,S,B;
    scanf("%d%d%d",&T,&S,&B);
     int res=(2*T*S*B*512)/1024;
    printf("%d KB",res);
}