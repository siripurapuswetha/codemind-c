#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag,se;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        flag=0;
       if(se==arr[i])
       {
           flag=1;
           break;
       }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}