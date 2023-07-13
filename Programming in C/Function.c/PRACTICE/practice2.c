// Write a program to add two numbers using function //


#include<stdio.h>
void sum()  // function defination //
{
    int a,b,sum=0;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
}
void main()  // function calling //
{
    sum();
    sum();
    sum();
}


// Bottom up approach //