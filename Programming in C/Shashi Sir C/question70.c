// Write a program to use strcmp function //

#include<stdio.h>
#include<string.h>
void main()
{
    char x[20],y[20];
    int t;
    printf("enter first string");
    scanf("%s",&x);
    printf("enter second string");
    scanf("%s",&y);
    t=strcmp(x,y);
    if(t==0)
    {
        printf("both string are equal");
    }
    else
    {
        printf("both string are not equal");
    }
}
