// Write program to printf Fibonacci series upto n terms using recursion function 

#include<stdio.h>
int f1=0,f2=1,f3,x;
int fibonacci(int ,int) ;
void main()
{
    int n;
    printf("\n Enter any number ");
    scanf("%d",&n);
    x=fibonacci(0,n);
}
int fibonacci(int f3,int n1)
{
    if(f3<n1)
    {
        printf("%d",f3);
        f1=f2;
        f2=f3;
        fibonacci(f1+f2,n1);
    }
    return x;
}