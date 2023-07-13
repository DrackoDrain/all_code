// Write a program to check the number is odd or even using function top down approach //

#include<stdio.h>
int i;
void num(int i);
void main()
{
    num(i);
}
    
void num(int i)
{
    printf("enter the value of i");
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
}


