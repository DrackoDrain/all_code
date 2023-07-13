// Write a program to use strlen function //

#include<stdio.h>
#include<string.h>
void main()
{
    char x[20];
    int l;
    printf("enter a string \n ");
    scanf("%s",x);
    l=strlen(x);
    printf("length=%d",l);
}