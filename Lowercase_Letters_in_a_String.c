#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^
]s", str);
    int i,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            c=c+1;
        }
    }
    printf("%d",c);
}