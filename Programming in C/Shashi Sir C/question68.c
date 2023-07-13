// Write a program to use strlwr function //

#include<stdio.h>
#include<string.h>
void main()
{
    char x[50];
    printf("enter a string in uppercase");
    scanf("%s",&x);
    strlwr(x);
    printf("%s",x);
}
