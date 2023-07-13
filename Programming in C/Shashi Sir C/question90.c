// Write a program to concatenate two strings using pointers //

#include<stdio.h>
void main()
{
    char x[20],y[20],*p,*q;
    printf("enter a string in x");
    scanf("%s",x);
    printf("enter a string in y");
    scanf("%s",y);
    p=&x[0];
    q=&y[0];
    
    while(*p!='\0')
    {
        p++;
    }
    while(*q!='\0')
    {
        *p=*q;
        q++;
        p++;

    }
    *p='\0';
    printf("%s",x);

}