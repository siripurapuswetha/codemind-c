#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='G')
    {
        printf("Green");
    }
    else if(ch=='B')
    {
        printf("Blue");
    }
    else if(ch=='V')
    {
        printf("Violet");
    }
    else if(ch=='Y')
    {
        printf("Yellow");
    }
    else if(ch=='R')
    {
        printf("Red");
    }
    else if(ch=='O')
    {
        printf("Orange");
    }
    else if(ch=='I')
    {
        printf("Indigo");
    }
    else 
    {
        printf("-1");
    }
}