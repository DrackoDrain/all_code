// Write a program to find factorial of a number using fuction re-cursion //

#include<stdio.h>
int fact(int n);
int f;
int n;
void main()
{
    printf("enter a number ");
    scanf("%d",&n);
    fact(n);
    printf("factorial =%d",f);
}
int fact(int n)
{
    if(n==1)
    {
        return(1);
    }
    else
    {
        f=n*fact(n-1);
    }
    return(f);
}