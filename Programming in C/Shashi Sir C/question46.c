// Write a program to check the number is prime or not //

#include<stdio.h>
void main()
{
    int i,n,f=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("Not a prime number");
    }
    else
    {
        printf("Prime number");
    }
}