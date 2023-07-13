// Write a program to find multiplication table of a number using goto statement //

#include<stdio.h>
void main()
{
    int n,p=1,k=1;
    printf("enter a number");
    scanf("%d",&n);
    xx: p=n*k;
    printf("%d \n",p);
    k++;
    if(k<=10)
    {
        goto xx;
    }
}