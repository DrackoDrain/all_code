// write a program to find the length of string using character array //

#include<stdio.h>
void main()
{
    char x[10];
    int i,l=0;
    printf("enter a string");
     scanf("%s",x);
    for(i=0;x[i]!='\0';i++)
    {
        l=l+1;
    }
    printf("length=%d",l);
}