// Write a program to use strupr function //

#include<stdio.h>
#include<string.h>
void main()
{
    char x[50];
    printf("enter a string in lowercase");
    scanf("%s",x);
    strupr(x);
    printf("%s",x);

}