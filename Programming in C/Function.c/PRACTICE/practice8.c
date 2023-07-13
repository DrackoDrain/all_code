// Write a program to swap two variable with using third variable using call by value in function //
// Bottom up approach //

#include<stdio.h>
int a,b,c;
void swap(int i,int j)
{
    c=a;
    a=b;
    b=a;
    printf("a=%d",a);
    printf("b=%d",b);
}
void main()
{
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    swap(a,b);
}