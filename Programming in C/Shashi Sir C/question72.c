// Write a program to use strrev function //

#include<stdio.h>
#include<string.h>
void main()
{
    char x[20];
    printf("enter  a string");
    scanf("%s",x);
    strrev(x);
    printf("%s",x);
}