// Write a program to find the factorial of n numbers //


#include<stdio.h>
void main()
{
    int i,n,f=1;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial =%d",f);
}