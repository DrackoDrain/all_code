// Write a program to check whether the given number is odd or even using pointers //

#include<stdio.h>
void main()
{
    int i;
    int *p;
    p=&i;
    printf("enter any number");
    scanf("%d",p);
    if(*p%2==0)
    {
        printf("Given number is even");
    }
    else 
    {
        printf("Given numer is odd");
    }
}