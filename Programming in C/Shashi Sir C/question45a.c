// Write a program to check the number whether it is special or not //
// special number - A number is said to be a special number if the sum of the factorial of every  digit is equal to the number itself.//
// It is also known as Krishna's Murthy's Number //

#include<stdio.h>
void main()
{
    int n,i,p,t,f=1,s=0;
    printf("enter the value of n");
    scanf("%d",&n);
    p=n;
    while(n>0)
    {
        t=n%10;
        for(i=t;i>=1;i--)
        {
            f=f*i;
        }
        s=s*f;
        n=n/10;
        f=1;
    }
    if(s==p)
    {
        printf("special number");
    }
    else
    {
        printf("Not special number");
    }
}