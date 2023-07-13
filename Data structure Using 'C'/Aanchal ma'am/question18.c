// write a program to find factorial of any numeber using function 

#include<stdio.h>

    int factorial(int);
    void main()
    {
        int  n,f;
        printf("\n Enter any integer number");
        scanf("%d",&n);
        if(n<0)
        {
            printf("\n Factorial of any negative nuember is not possible");
        }
        else if(n==0)
        {
            printf("\n Factorial of 0 is 1");
        }
        else{
            f=factorial(n);
            printf("\n Factorial of %d =%d",n,f);
        }
    }
    int factorial(int n)
    {
   
        int f=1;
        if(n>=1)
        {
            f=n*factorial(n-1);   
        }
         return(f);
    }
