// write a program to check whether the number is even or odd using conditional operator //
#include<stdio.h>
void main()
{
    int x;
    printf("enter the value of x");
    scanf("%d",&x);
    (x%2==0)?printf("even number"):printf("odd number");
}