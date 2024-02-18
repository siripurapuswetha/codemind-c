#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],sr,ss=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sr=sqrt(a[i]);
        if(sr*sr==a[i])
        {
            ss=ss+a[i];
        }
    }
    printf("%d",ss);
    
}