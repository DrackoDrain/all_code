// Write a program to copy one string to another string using pointers //

#include<stdio.h>
void main()
{
    char x[20],y[20],*p,*q;
    
    printf("Enter a string");
    scanf("%s",x);
    p=&x[0];
    q=&y[0];
    while(*p!='\0')
    {
        *q=*p;
        p++;
        q++;
    }
    *q='\0';
    printf("y=%s",y);
}