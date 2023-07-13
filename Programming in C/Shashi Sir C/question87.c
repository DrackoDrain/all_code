 // Write a program to find length of a string using pointers //

#include<stdio.h>
void main()
{
    char x[20],*p;
    int l=0;
    p=&x[0];
    printf("enter a string");
    scanf("%s",x);
    while(*p!='\0')
    {
        l=l+1;
        p++;
    }
    printf("length =%d",l);
}
