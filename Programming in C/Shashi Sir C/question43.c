// Write a program to check whether the number is Palindrome Number is not //

#include<stdio.h>
void main()
{
    int t,n,s=0,r;
    printf("enter the value of n");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;

    }
    n=t;
    if(n==s)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not palindrome number");
    }
}