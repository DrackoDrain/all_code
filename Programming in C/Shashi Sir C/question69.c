// Write a program to use strcat function //

#include<stdio.h>
#include<string.h>
void main()
{
    char x[20],y[20];
    printf("enter first string");
    scanf("%s",&x);
    printf("enter second string");
    scanf("%s",&y);
    strcat(x,y);
    printf("x=%s",x);
}