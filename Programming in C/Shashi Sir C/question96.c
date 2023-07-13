// Write a program to copy a string using character array //

#include<stdio.h>
void main()
{
    char x[20],y[20];
    int i;
    printf("enter a string in x");
    scanf("%s",x);
    for(i=0;x[i]!='\0';i++)
    {
        y[i]=x[i];
    }
    y[i]='\0';
    printf("string in y=%s",y);
}