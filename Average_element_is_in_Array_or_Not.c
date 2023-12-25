#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int arr[n],i,sum=0,avg,flag;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
      flag=0;
      m=arr[i];
      if(avg==m)
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