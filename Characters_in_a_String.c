#include<stdio.h>
int main()
{
    char str[20];
    scanf("%[^
]s",str);
    int i,s=0;
    for(i=0;str[i]!=NULL;i++)
    {
        s++;
    }
    printf("%d",s);
}