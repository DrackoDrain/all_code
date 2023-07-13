// Write a program to reverse a string using pointers //

#include<stdio.h>
void main()
{
    char x[20],y[20],*p,*q;
    int l=0,i;
    printf("Enter a string");
    scanf("%s",x);
    p=&x[0];
    q=&y[0];
    while(*p!='\0')
    {
        l=l+1;
        p++;
    }
    p--;
    for(i=l;i>=0;i--)
    {
        *q=*p;
        p--;
        q++;
    }
    *q='\0';
    printf("%s",y);
}