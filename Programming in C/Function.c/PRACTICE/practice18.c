// Write a program to check the given number is even or odd //

#include<stdio.h>
int n;
void num(int n);
void main()
{
    num(n);
}
void num(int n)
{
    printf("enter the value of n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Given number is even ");
    }
    else{
        printf("Given number is odd");
    }
}
