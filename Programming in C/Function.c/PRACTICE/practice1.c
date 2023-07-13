// Write a program to add two numbers using function //
// top down approach //
#include<stdio.h>
void sum(); // function prototype//
void main()
{
    sum();
    sum();
    sum(); // function calling //
}
void sum() // function defination //
{
    int a,b,sum=0;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
}




// Top Down approach //