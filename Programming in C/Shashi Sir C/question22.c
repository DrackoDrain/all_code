//write a program to check the given number is odd or even using if-else statement//

#include<stdio.h>
void main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Given number is even");

    }
    else
    {
        printf("GIven number is odd");
    }
}