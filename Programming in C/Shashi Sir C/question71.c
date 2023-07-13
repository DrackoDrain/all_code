// Write a program to use strcpy function //

#include<stdio.h>
#include<string.h>
void main()
{
    char x[20],y[20];
    printf("enter a string");
    scanf("%s",&x);
    strcpy(y,x);
    printf("x=%s",x);
}