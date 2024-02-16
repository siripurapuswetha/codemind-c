#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^
]s", str);
    int i,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            c=c+1;
        }
    }
    printf("%d",c);
}